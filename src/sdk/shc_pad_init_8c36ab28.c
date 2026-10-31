/* SDK pool group 0x8c36ab28-0x8c36ae78 (Hitachi SHC): controller channel table
   setup, per-channel reset, and analog trigger/axis decoding. */
typedef struct Chan {
    int x0;
    int flags;
    int buttons;
    int xc;
    int x10;
    int x14;
    short r_trig;
    short l_trig;
    short ax1;
    short ay1;
    short ax2;
    short ay2;
    char *name;
    int x28;
    int x2c;
    int id;
} Chan;

typedef struct Msg {
    int x0;
    int x4;
    unsigned char *data;
} Msg;

extern int g_mode_8c55fafc;
extern int g_open_8c55f5b4;
extern int g_ready_8c55f5b0;
extern int g_count_8c55f5b8;
extern Chan g_chans_8c55f5bc[24];
extern int g_state_8c55fa9c[24];
extern unsigned char g_rlatch_8c55fb02[24];
extern unsigned char g_llatch_8c55fb1a[24];
extern unsigned char g_hi_8c55fb00;
extern unsigned char g_lo_8c55fb01;
extern char str_8c3f6d64[];
extern void *memset(void *, int, unsigned int);
extern void open_8c36ed24(int, int);
extern void open_8c36ed7e(int, int, int, int);
extern int func_8c36f2be(int);

void chan_reset_8c36aca6(Chan *c);

void pad_init_8c36ab28(int mode, int a, int b)
{
    int i;
    g_mode_8c55fafc = mode;
    g_open_8c55f5b4 = 0;
    g_ready_8c55f5b0 = 1;
    g_count_8c55f5b8 = 0;
    memset(g_chans_8c55f5bc, 0, sizeof(g_chans_8c55f5bc));
    if (b && a) {
        g_open_8c55f5b4 = 1;
        open_8c36ed24(a, b);
    }
    for (i = 0; i < 24; i++) {
        g_chans_8c55f5bc[i].id = func_8c36f2be(i);
        chan_reset_8c36aca6(&g_chans_8c55f5bc[i]);
        g_state_8c55fa9c[i] = 0;
        g_rlatch_8c55fb02[i] = 0;
        g_llatch_8c55fb1a[i] = 0;
    }
    g_hi_8c55fb00 = 0xc0;
    g_lo_8c55fb01 = 0xa0;
}

void pad_init2_8c36ac00(int mode, int a, int b, int c, int d)
{
    int i;
    g_mode_8c55fafc = mode;
    g_open_8c55f5b4 = 0;
    g_ready_8c55f5b0 = 1;
    g_count_8c55f5b8 = 0;
    memset(g_chans_8c55f5bc, 0, sizeof(g_chans_8c55f5bc));
    if (c && b) {
        g_open_8c55f5b4 = 1;
        open_8c36ed7e(a, b, c, d);
    }
    for (i = 0; i < 24; i++) {
        g_chans_8c55f5bc[i].id = func_8c36f2be(i);
        chan_reset_8c36aca6(&g_chans_8c55f5bc[i]);
        g_state_8c55fa9c[i] = 0;
        g_rlatch_8c55fb02[i] = 0;
        g_llatch_8c55fb1a[i] = 0;
    }
    g_hi_8c55fb00 = 0xc0;
    g_lo_8c55fb01 = 0xa0;
}

void chan_reset_8c36aca6(Chan *c)
{
    c->x0 = 0;
    c->flags = 0;
    if (g_mode_8c55fafc == 0) {
        c->buttons = 0;
        c->xc = -1;
        c->x10 = 0;
        c->x14 = 0;
    } else {
        c->buttons = -1;
        c->xc = 0;
        c->x10 = -1;
        c->x14 = -1;
    }
    c->r_trig = 0;
    c->l_trig = 0;
    c->ay2 = 0;
    c->ax2 = 0;
    c->ay1 = 0;
    c->ax1 = 0;
    c->x28 = 0;
    c->name = str_8c3f6d64;
}

void chan_decode_8c36ace4(Chan *c, Msg *m, int idx)
{
    unsigned char *p;
    unsigned int v;
    p = m->data;
    p += 8;
    v = p[0] | p[1] << 8 | 0xffff0000;
    if (p[3] >= g_hi_8c55fb00) {
        v &= 0xfffdffff;
        g_rlatch_8c55fb02[idx] = 1;
    } else if (p[3] <= g_lo_8c55fb01) {
        v |= 0x20000;
        g_rlatch_8c55fb02[idx] = 0;
    } else if (g_rlatch_8c55fb02[idx]) {
        v &= 0xfffdffff;
    }
    if (p[2] >= g_hi_8c55fb00) {
        v &= 0xfffeffff;
        g_llatch_8c55fb1a[idx] = 1;
    } else if (p[2] <= g_lo_8c55fb01) {
        v |= 0x10000;
        g_llatch_8c55fb1a[idx] = 0;
    } else if (g_llatch_8c55fb1a[idx]) {
        v &= 0xfffeffff;
    }
    if (g_mode_8c55fafc == 0) v ^= 0xffffffff;
    c->buttons = v;
    c->r_trig = (c->flags & 0x10000) ? p[2] : 0;
    c->l_trig = (c->flags & 0x20000) ? p[3] : 0;
    c->ax1 = (c->flags & 0x40000) ? p[4] - 0x80 : 0;
    c->ay1 = (c->flags & 0x80000) ? p[5] - 0x80 : 0;
    c->ax2 = (c->flags & 0x100000) ? p[6] - 0x80 : 0;
    c->ay2 = (c->flags & 0x200000) ? p[7] - 0x80 : 0;
}
