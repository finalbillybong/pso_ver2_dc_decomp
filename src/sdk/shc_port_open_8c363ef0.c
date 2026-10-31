/* SDK pool group 0x8c363ef0-0x8c3643a4 (Hitachi SHC): port object creation,
   counters with slot callbacks, mode changes and the reopen sequence. */
typedef struct Config {
    int mode;
    int size;
    int words[13];
} Config;

typedef struct Block {
    int words[16];
} Block;

typedef struct Sub {
    char pad0[0x534];
    int mode;
} Sub;

typedef struct Port {
    Config cfg;
    int arg;
    int state;
    int phase;
    int flag48;
    char link[0x8e0 - 0x4c];
    Block in;
    Block out;
    char area960[0x974 - 0x960];
    int slots[0x40];
    char areaa74[0xc34 - 0xa74];
    char areac34[0x2774 - 0xc34];
    Sub sub;
    char pad[0x56b4 - 0x2774 - sizeof(Sub)];
    char tail[0x10];
} Port;

typedef struct Status {
    int words[5];
    int value;
    int extra;
} Status;

typedef int (*SlotFn)(Port *, int, Block *);

extern int g_default_slots_8c5499b8[];
extern void mem_fill_8c359bac(void *, int, unsigned int);
extern void copy_bytes_8c359abc(void *dst, void *src, int count);
extern void call_8c3604ea(void *);
extern void call_8c360c7e(void *);
extern void call_8c364d1e(Port *, void *);
extern void call_8c35f7f0(Port *, void *, Config *);
extern void call_8c365a78(Port *, void *, Config *, int);
extern void call_8c364498(void *);
extern int get_slot_8c364c24(Port *, int);
extern int call_8c365d12(Port *, int);
extern int port_invalid_8c360d92(Port *);
extern int send_code_8c360c8c(int, int);
extern void call_8c3604fa(void *);
extern int call_8c3637fa(Port *);
extern int request_8c365d70(Port *, int, int, void *, int);
extern void call_8c3602ea(Port *, int, int);

static void init_in_8c363f9e(Block *b);
static void init_out_8c363fc8(Block *b);
static int start_8c36409e(Port *p);
static int stop_8c3640ce(Port *p);
static int set_phase_8c364128(Port *p);
static int resume_8c3641a4(Port *p);
static int restore_8c3641c6(Port *p);
static int get_status_8c3642dc(Port *p, Status *st);
static int set_status_8c364312(Port *p, int a, int b);
static int apply_mode_8c36434a(Port *p);

Port *port_create_8c363ef0(Port *p, Config *cfg, int arg)
{
    mem_fill_8c359bac(p, 0, sizeof(Port) / 4);
    cfg->size = (cfg->size + 0x1f) & ~0x1f;
    p->cfg = *cfg;
    p->arg = arg;
    p->flag48 = 0;
    call_8c3604ea(p->link);
    init_in_8c363f9e(&p->in);
    init_out_8c363fc8(&p->out);
    call_8c360c7e(p->area960);
    copy_bytes_8c359abc(p->slots, g_default_slots_8c5499b8, 0x40);
    call_8c364d1e(p, p->areaa74);
    call_8c35f7f0(p, p->areac34, cfg);
    call_8c365a78(p, &p->sub, cfg, arg);
    call_8c364498(p->tail);
    if (start_8c36409e(p)) p = 0;
    if (p) {
        p->phase = 1;
        p->state = 1;
    }
    return p;
}

static void init_in_8c363f9e(Block *b)
{
    mem_fill_8c359bac(b, 0, sizeof(Block) / 4);
    b->words[0] = 0;
    b->words[1] = 0;
    b->words[2] = 0;
    b->words[3] = 0;
    b->words[4] = 0;
    b->words[5] = 0;
    b->words[6] = 0;
    b->words[7] = 1;
}

static void init_out_8c363fc8(Block *b)
{
    mem_fill_8c359bac(b, 0, sizeof(Block) / 4);
    b->words[0] = 0;
    b->words[1] = 0;
    b->words[2] = 0;
    b->words[3] = 0;
    b->words[4] = 0;
}

void port_add_in_8c363fea(Port *p, int n, int arg)
{
    Block *b = &p->out;
    SlotFn fn;
    b->words[0] += n;
    fn = (SlotFn)get_slot_8c364c24(p, 0x24);
    if (fn) fn(p, arg, b);
}

void port_add_out_8c364064(Port *p, int n, int arg)
{
    Block *b = &p->out;
    SlotFn fn;
    b->words[1] += n;
    fn = (SlotFn)get_slot_8c364c24(p, 0x25);
    if (fn) fn(p, arg, b);
}

static int start_8c36409e(Port *p)
{
    return call_8c365d12(p, 3);
}

int port_stop_8c3640a4(Port *p)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000131);
    call_8c3604fa(p->link);
    return stop_8c3640ce(p);
}

static int stop_8c3640ce(Port *p)
{
    int r = call_8c365d12(p, 4);
    p->state = 0;
    p->phase = 0;
    return r;
}

int port_pause_8c3640ee(Port *p)
{
    int r;
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000132);
    if (get_slot_8c364c24(p, 0x2f) == 1) {
        r = call_8c3637fa(p);
    } else {
        r = set_phase_8c364128(p);
    }
}

static int set_phase_8c364128(Port *p)
{
    p->phase = 4;
    return 0;
}

int port_request_8c364132(Port *p)
{
    int r;
    if ((r = request_8c365d70(p, 7, 6, 0, 0)) != 0) return r;
    return 0;
}

int port_resume_8c364158(Port *p)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000133);
    return resume_8c3641a4(p);
}

static int resume_8c3641a4(Port *p)
{
    int r;
    if (p->state != 1) {
        if ((r = restore_8c3641c6(p)) != 0) return r;
    }
    return 0;
}

static int restore_8c3641c6(Port *p)
{
    int r;
    if (p->state == 4) {
        if ((r = request_8c365d70(p, 7, 7, 0, 0)) != 0) return r;
    }
    p->state = 1;
    p->phase = 1;
    return 0;
}

int port_reopen_8c364206(Port *p)
{
    int value;
    Config cfg;
    Status st;
    int save[0x40];
    int arg;
    int r;
    int slot;
    Port *q;
    cfg = p->cfg;
    arg = p->arg;
    if (arg == 0) {
        slot = p->slots[8];
        if (slot) {
            get_status_8c3642dc(p, &st);
            value = st.value;
        }
    }
    if ((r = stop_8c3640ce(p)) != 0) return r;
    copy_bytes_8c359abc(save, p->slots, 0x40);
    q = port_create_8c363ef0(p, &cfg, arg);
    if (q == 0) return send_code_8c360c8c(0, 0xff000202);
    copy_bytes_8c359abc(q->slots, save, 0x40);
    if (arg == 0 && slot) {
        r = get_status_8c3642dc(q, &st);
        if (r) return r;
        r = set_status_8c364312(q, value, st.value);
        if (r) return r;
        apply_mode_8c36434a(q);
    }
    return 0;
}

static int get_status_8c3642dc(Port *p, Status *st)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000134);
    return request_8c365d70(p, 0, 9, st, 0);
}

static int set_status_8c364312(Port *p, int a, int b)
{
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000135);
    return request_8c365d70(p, 0, 10, (void *)a, b);
}

static int apply_mode_8c36434a(Port *p)
{
    Sub *sub;
    int mode;
    if (port_invalid_8c360d92(p)) return send_code_8c360c8c(0, 0xff000135);
    sub = &p->sub;
    mode = sub->mode;
    call_8c3602ea(p, mode, 1);
    return 0;
}
