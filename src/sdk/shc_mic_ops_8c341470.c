typedef struct {
    void (*cb)(int, int);
    int arg;
    int val;
} Hook;
typedef struct {
    int pad00;
    int pad04;
    int level;
    int mode;
    char pad10[0x34 - 0x10];
    int port;
    char pad38[0x44 - 0x38];
    int v44;
    int pad48;
    int dev_a;
    int dev_b;
    char pad54[0xa0 - 0x54];
    int va0;
    int va4;
} Mic;
extern Hook hook_8c51b6c0;
extern void *memset(void *, int, unsigned int);
extern int func_8c3563a0(int);
extern void func_8c35677c(int, int *, int *);
extern void port_set_slot_8c364aae(int, int, int);

int mic_set_8c341470(int v)
{
    Hook *h = &hook_8c51b6c0;
    h->val = v;
    if (v == 0) {
        return 0;
    }
    {
        void (*cb)(int, int) = h->cb;
        if (cb) {
            cb(h->arg, v);
        }
    }
    return v;
}

int mic_query_a_8c34149e(Mic *m, int *out)
{
    memset(out, 0, 12);
    if (m->level < 2 || (out[0] = func_8c3563a0(m->dev_a)) == 0) {
        return 0;
    }
    func_8c35677c(m->dev_a, &out[1], &out[2]);
    return 1;
}

int mic_query_b_8c3414e6(Mic *mic, int *out)
{
    Mic *m = mic;
    memset(out, 0, 12);
    if (m->level < 2) {
        return 0;
    }
    if (m->dev_b != 0) {
        if ((out[0] = func_8c3563a0(m->dev_b)) != 0) {
            goto ok;
        }
    }
    return 0;
ok:
    func_8c35677c(m->dev_b, &out[1], &out[2]);
    return 1;
}

void mic_enable_8c341534(Mic *m, int on)
{
    int port = m->port;
    if (on == 0) {
        port_set_slot_8c364aae(port, 15, 0);
    } else if (m->mode == 1) {
        port_set_slot_8c364aae(port, 15, 2);
    } else {
        port_set_slot_8c364aae(port, 15, 1);
    }
}

int mic_get_44_8c341568(Mic *m)
{
    return m->v44;
}

void mic_set_a0_8c34156e(Mic *m, int a, int b)
{
    m->va0 = a;
    m->va4 = b;
}
