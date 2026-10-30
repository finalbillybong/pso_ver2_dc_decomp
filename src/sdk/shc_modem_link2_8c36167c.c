/* Link channel set-up, buffers and stubs (Hitachi SHC). */
typedef struct Queue {
    int handle;
    int f4;
    int f8;
    int low;
    int high;
    int count;
} Queue;

typedef struct Sub {
    int pad0[2];
    Queue q;
} Sub;

typedef struct Buffers {
    char tx[0xb0];
    char rx[0xb0];
    int tx_len;
    int rx_len;
} Buffers;

typedef struct Chan {
    int busy;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    Buffers buf;
} Chan;

typedef struct Mix {
    char pad0[0x18];
    int f18;
    int f1c;
} Mix;

typedef struct Stat {
    char pad0[0xe8];
    int fe8;
} Stat;

typedef struct Level {
    char pad0[8];
    int f8;
    int fc;
    int f10;
    int f14;
    char pad18[8];
} Level;

typedef struct Range {
    char pad0[8];
    int f8;
} Range;

typedef struct Info {
    int pad0[2];
    int rx_ok;
    int tx_ok;
    int pad10[4];
} Info;

typedef struct Ctrl {
    char pad0[0x8a0];
    Chan chan;
} Ctrl;

typedef struct Dev {
    char pad0[0x8e0];
    Mix mix;
    char pad900[0xa74 - 0x900];
    Stat stat;
    char padb60[0x2774 - 0xb60];
    char audio[0x56b4 - 0x2774];
    Ctrl *ctrl;
} Dev;


extern void get_config_8c35ad4c(int, Info *);
extern int open_port_8c3602da(Dev *, int);
extern void start_8c3602ca(Dev *, int, int);
extern int get_slot_8c364c24(Dev *, int);
extern int get_state_8c365dc2(Dev *, int);
extern void set_slot_8c364b3c(Dev *, int, int);
extern void get_item_8c35ad0e(int, Level *, int);
extern void get_status_8c35acdc(int, Range *);
extern void copy_bytes_8c3599e0(char *, char *, int);
extern int create_link_8c35afec(void);
extern int attach_link_8c35af3c(int, int (*)(), Dev *);
extern int send_code_8c360c8c();
extern int destroy_link_8c35b0ca(int);
extern void flush_8c360672(Dev *);
extern int link_xfer_8c359c28(int, char *, int, int *, int *);

Chan *get_chan_8c361ade(Dev *dev);
static void link_levels_8c36178c(Dev *dev, int *a, int *b);
static void queue_init_8c361972(Queue *q);
static int link_event_8c361984();
int link_release_8c3619e8(int h);
void link_queue_8c361a6c(Dev *dev);
int link_exchange_8c361a78(Dev *dev, Queue *q, Chan *ch);
int link_count_8c361b2e(Dev *dev);

int link_state_8c36167c(Dev *dev)
{
    char *area = dev->audio + 0x540;
    int a = open_port_8c3602da(dev, *(int *)(area + 0x538));
    int b = open_port_8c3602da(dev, *(int *)(area + 0x534));
    int c = open_port_8c3602da(dev, *(int *)(area + 0x53c));
    return a | b | c;
}

void link_set_state_8c3616c2(Dev *dev, int state)
{
    char *area = dev->audio + 0x540;
    start_8c3602ca(dev, *(int *)(area + 0x538), state);
    start_8c3602ca(dev, *(int *)(area + 0x534), state);
    start_8c3602ca(dev, *(int *)(area + 0x53c), state);
}

int link_ready_8c361702(void)
{
    return 1;
}

void link_update_slots_8c361706(Dev *dev)
{
    int a, b;
    link_levels_8c36178c(dev, &a, &b);
    if (get_slot_8c364c24(dev, 6) == 1 && a == 0 && get_state_8c365dc2(dev, 6))
        set_slot_8c364b3c(dev, 6, 0);
    if (get_slot_8c364c24(dev, 5) == 1 && b == 0 && get_state_8c365dc2(dev, 7))
        set_slot_8c364b3c(dev, 5, 0);
}

static void link_levels_8c36178c(Dev *dev, int *a, int *b)
{
    register int max1;
    register int max2;
    int i;
    Queue *q;
    char *area;
    int h;
    Level lv;
    area = dev->audio + 0x540;
    q = (Queue *)(area + 8);
    h = q->handle;
    max1 = 0;
    max2 = 0;
    for (i = 0; i < 3; i++) {
        get_item_8c35ad0e(h, &lv, i);
        max1 = max1 > lv.f8 ? max1 : lv.f8;
        max2 = max2 > lv.fc ? max2 : lv.fc;
    }
    q->f8 = max1;
    q->f4 = max2;
    *a = q->f8;
    *b = q->f4;
    if (0) *a = i;
}

void link_poll_levels_8c361800(Dev *dev)
{
    Mix *m = &dev->mix;
    char *area = dev->audio + 0x540;
    int h = ((Queue *)(area + 8))->handle;
    Range rg;
    Level lv;
    int v;
    get_status_8c35acdc(h, &rg);
    v = rg.f8;
    if (v != -1 && v > 0) m->f18 = v;
    get_item_8c35ad0e(h, &lv, 1);
    v = lv.f10;
    if (v != -1) m->f1c = v;
}

void link_snapshot_8c36184c(Dev *dev)
{
    Chan *ch;
    char *area;
    Queue *q;
    Stat *st;
    Mix *m;
    if ((ch = get_chan_8c361ade(dev)) == 0) return;
    area = dev->audio + 0x540;
    q = (Queue *)(area + 8);
    st = &dev->stat;
    m = &dev->mix;
    st->fe8 = q->high - ch->f18;
    if (ch->busy != 0) return;
    ch->f4 = m->f18 * 50;
    ch->f8 = m->f1c;
    ch->fc = q->f4;
    ch->f10 = q->f8;
    ch->f14 = q->low;
    ch->f18 = q->high;
}

void link_write_8c3618b4(Dev *dev, int id, char *data, int len)
{
    Chan *ch;
    Buffers *b;
    Info info;
    int n;
    char *dst;
    if ((ch = get_chan_8c361ade(dev)) == 0) return;
    if (ch->busy != 0) return;
    b = &ch->buf;
    get_config_8c35ad4c(id, &info);
    n = len < 0xb0 ? len : 0xb0;
    if (info.tx_ok > 0) {
        b->tx_len = n;
        dst = b->tx;
    } else if (info.rx_ok > 0) {
        b->rx_len = n;
        dst = b->rx;
    } else return;
    copy_bytes_8c3599e0(dst, data, n);
}

int link_open_8c361914(Dev *dev)
{
    char *area = dev->audio + 0x540;
    Queue *q = (Queue *)(area + 8);
    int h;
    int r;
    int err;
    queue_init_8c361972(q);
    h = create_link_8c35afec();
    if (h == 0) {
        err = 0xff000d08;
        goto fail;
    }
    r = attach_link_8c35af3c(h, link_event_8c361984, dev);
    if (r != 0) {
        link_release_8c3619e8(h);
        err = 0xff000d09;
fail:
        return send_code_8c360c8c(dev, err);
    }
    q->handle = h;
    return 0;
}

static void queue_init_8c361972(Queue *q)
{
    q->handle = 0;
    q->f4 = 0;
    q->f8 = 0;
    q->low = 0x7fffffff;
    q->high = 0x7fffffff;
    q->count = 0;
}

static int link_event_8c361984(a, b)
{
    return send_code_8c360c8c(a, b);
}

int link_close_8c36198a(Dev *dev)
{
    char *area = dev->audio + 0x540;
    Queue *q;
    int h, r;
    q = (Queue *)(area + 8);
    h = q->handle;
    r = link_release_8c3619e8(h);
    if (r)
        return send_code_8c360c8c(dev, 0xff000d0a);
    return 0;
}

int link_release_8c3619e8(int h)
{
    return destroy_link_8c35b0ca(h);
}

int link_stub_a_8c3619ee(void) { return 0; }
int link_stub_b_8c3619f2(void) { return 0; }
int link_stub_c_8c3619f6(void) { return 0; }
int link_stub_d_8c3619fa(void) { return 0; }

int link_unsupported_a_8c3619fe(Dev *dev) { return send_code_8c360c8c(dev, 0xff000d0b); }
int link_unsupported_b_8c361a06(Dev *dev) { return send_code_8c360c8c(dev, 0xff000d0b); }
int link_unsupported_c_8c361a0e(Dev *dev) { return send_code_8c360c8c(dev, 0xff000d0b); }
int link_unsupported_d_8c361a16(Dev *dev) { return send_code_8c360c8c(dev, 0xff000d0b); }

int link_poll_8c361a1e(Dev *dev)
{
    Chan *ch;
    Sub *sub;
    Queue *q;
    int r;
    if ((ch = get_chan_8c361ade(dev)) == 0) return 0;
    if (ch->busy == 0) return 0;
    sub = (Sub *)(dev->audio + 0x540);
    q = &sub->q;
    flush_8c360672(dev);
    link_queue_8c361a6c(dev);
    r = link_exchange_8c361a78(dev, q, ch);
    if (r) return r;
    return 0;
}

void link_queue_8c361a6c(Dev *dev)
{
    char *area = dev->audio + 0x540;
    Queue *q = (Queue *)(area + 8);    if (0) q->count = 0;
}

int link_exchange_8c361a78(Dev *dev, Queue *q, Chan *ch)
{
    Buffers *b = &ch->buf;
    int h = q->handle;
    int done, avail;
    int r1, r2;
    r1 = link_xfer_8c359c28(h, b->tx, b->tx_len, &done, &avail);
    r2 = link_xfer_8c359c28(h, b->rx, b->rx_len, &done, &avail);
    if (r1 || r2)
        return send_code_8c360c8c(dev, 0xff000d0d);
    return 0;
}

Chan *get_chan_8c361ade(Dev *dev)
{
    if (dev->ctrl == 0) return 0;
    if (link_count_8c361b2e(dev) > 0) return 0;
    return &dev->ctrl->chan;
}

int link_count_8c361b2e(Dev *dev)
{
    char *area = dev->audio + 0x540;
    Queue *q = (Queue *)(area + 8);
    return q->count;
}
