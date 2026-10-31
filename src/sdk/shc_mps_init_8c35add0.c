/* SDK pool group 0x8c35add0-0x8c35b100 (Hitachi SHC): CRI MPS manager setup and
   shutdown, error callbacks, and device slot allocation/reset. */
typedef struct Callback {
    void (*fn)(int);
    int arg;
    int code;
} Callback;

typedef struct Record12 {
    int words[3];
} Record12;

typedef struct Record32 {
    int words[8];
} Record32;

typedef struct Device {
    int state;
    Callback cb;
    int mode;
    Record12 status;
    Record32 config;
    Record32 items[3];
    Record32 extra;
} Device;

typedef struct Manager {
    char version[0x20];
    char copyright[0x20];
    Callback cb;
    int count;
    Device devices[1];
} Manager;

extern Manager *g_mps_8c5483c0;
extern Device *g_last_8c5483c4;
extern char str_8c3f6148[];
extern char str_8c3f6164[];
extern void mem_fill_8c359bac(void *, int, unsigned int);
extern void call_8c12b154(void *, void *, int);
extern void call_8c359bf4(void);
extern void call_8c359bf8(void);
extern void hook_a_8c35acd4(void);
extern void hook_b_8c35acd8(void);

static int setup_8c35adf6(int count, Manager *mem);
static void reset_cb_8c35aeb4(Callback *cb);
static void clear_cb_8c35aeb8(Callback *cb);
int report_8c35aec2(Device *dev, int code);
static void call_cb_8c35af1c(Callback *cb, int code);
static void set_cb_rec_8c35af84(Callback *cb, void (*fn)(int), int arg);
int device_busy_8c35afd4(Device *dev);
static Device *find_free_8c35b01c(void);
static Device *init_device_8c35b04e(Device *dev);
static void neg12_8c35b098(Record12 *r);
static void neg32_8c35b0a2(Record32 *r);
static void neg32b_8c35b0b6(Record32 *r);
static int close_device_8c35b0ca(Device *dev);

int mps_init_8c35add0(int count, Manager *mem)
{
    int err;
    if ((err = setup_8c35adf6(count, mem)) != 0) return err;
    call_8c359bf4();
    hook_a_8c35acd4();
    return 0;
}

static int setup_8c35adf6(int count, Manager *mem)
{
    int i;
    Device *d;
    g_mps_8c5483c0 = mem;
    mem_fill_8c359bac(g_mps_8c5483c0, 0, (sizeof(Manager) + (count - 1) * sizeof(Device)) / 4);
    call_8c12b154(g_mps_8c5483c0->version, str_8c3f6148, 0x20);
    call_8c12b154(g_mps_8c5483c0->copyright, str_8c3f6164, 0x20);
    reset_cb_8c35aeb4(&g_mps_8c5483c0->cb);
    g_mps_8c5483c0->count = count;
    d = g_mps_8c5483c0->devices;
    for (i = 0; i < count; i++) d[i].state = 1;
    return 0;
}

void mps_finish_8c35ae64(void)
{
    Manager *m = g_mps_8c5483c0;
    int n = m->count;
    int i;
    Device *d = m->devices;
    for (i = 0; i < n; i++) {
        if (d[i].state == 1) continue;
        close_device_8c35b0ca(&d[i]);
    }
    call_8c359bf8();
    hook_b_8c35acd8();
}

static void reset_cb_8c35aeb4(Callback *cb)
{
    clear_cb_8c35aeb8(cb);
    return;
}

static void clear_cb_8c35aeb8(Callback *cb)
{
    cb->fn = 0;
    cb->arg = 0;
    cb->code = 0;
}

int report_8c35aec2(Device *dev, int code)
{
    if (dev == 0) {
        call_cb_8c35af1c(&g_mps_8c5483c0->cb, code);
    } else {
        call_cb_8c35af1c(&dev->cb, code);
    }
    return code;
}

static void call_cb_8c35af1c(Callback *cb, int code)
{
    void (*fn)(int);
    cb->code = code;
    if (code != 0) {
        fn = cb->fn;
        if (fn != 0) fn(cb->arg);
    }
}

int mps_set_cb_8c35af3c(Device *dev, void (*fn)(int), int arg)
{
    if (dev == 0) {
        set_cb_rec_8c35af84(&g_mps_8c5483c0->cb, fn, arg);
    } else {
        if (device_busy_8c35afd4(dev)) return report_8c35aec2(0, 0xff020101);
        set_cb_rec_8c35af84(&dev->cb, fn, arg);
    }
    return 0;
}

static void set_cb_rec_8c35af84(Callback *cb, void (*fn)(int), int arg)
{
    cb->fn = fn;
    cb->arg = arg;
}

int mps_get_cb_8c35af8a(Device *dev, Callback *out)
{
    if (dev == 0) {
        *out = g_mps_8c5483c0->cb;
    } else {
        if (device_busy_8c35afd4(dev)) return report_8c35aec2(0, 0xff020102);
        *out = dev->cb;
    }
    return 0;
}

int device_busy_8c35afd4(Device *dev)
{
    g_last_8c5483c4 = dev;
    if (dev == 0 || dev->state == 1) return -1;
    return 0;
}

Device *mps_open_8c35afec(void)
{
    Device *d;
    if ((d = find_free_8c35b01c()) == 0) return 0;
    d = init_device_8c35b04e(d);
    return d;
}

static Device *find_free_8c35b01c(void)
{
    Manager *m = g_mps_8c5483c0;
    int n = m->count;
    int i;
    Device *d;
    if (0) m++; /* dead use: reproduces the reference register choice */
    d = m->devices;
    for (i = 0; i < n; i++) {
        Device *p = &d[i];
        if (p->state == 1) return p;
    }
    return 0;
}

static Device *init_device_8c35b04e(Device *dev)
{
    mem_fill_8c359bac(dev, 0, sizeof(Device) / 4);
    dev->state = 2;
    clear_cb_8c35aeb8(&dev->cb);
    dev->mode = 2;
    neg12_8c35b098(&dev->status);
    neg32_8c35b0a2(&dev->config);
    neg32_8c35b0a2(&dev->items[0]);
    neg32_8c35b0a2(&dev->items[1]);
    neg32_8c35b0a2(&dev->items[2]);
    neg32b_8c35b0b6(&dev->extra);
    return dev;
}

static void neg12_8c35b098(Record12 *r)
{
    r->words[0] = -1;
    r->words[1] = -1;
    r->words[2] = -1;
}

static void neg32_8c35b0a2(Record32 *r)
{
    r->words[0] = -1;
    r->words[1] = -1;
    r->words[2] = -1;
    r->words[3] = -1;
    r->words[4] = -1;
    r->words[5] = -1;
    r->words[6] = -1;
    r->words[7] = -1;
}

static void neg32b_8c35b0b6(Record32 *r)
{
    r->words[0] = -1;
    r->words[1] = -1;
    r->words[2] = -1;
    r->words[3] = -1;
    r->words[4] = -1;
    r->words[5] = -1;
    r->words[6] = -1;
    r->words[7] = -1;
}

static int close_device_8c35b0ca(Device *dev)
{
    if (device_busy_8c35afd4(dev)) return report_8c35aec2(0, 0xff020103);
    dev->state = 1;
    return 0;
}
