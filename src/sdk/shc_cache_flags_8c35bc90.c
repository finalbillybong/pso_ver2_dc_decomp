/* SDK pool group 0x8c35bc90-0x8c35be20 (Hitachi SHC): cache-mode flags, address
   attribute helpers and per-slot buffer layout setup. */
typedef struct Mgr {
    char pad0[0x60];
    int x60;
    int x64;
    char pad68[0x70 - 0x68];
    int count;
    struct Slot *slots;
} Mgr;

typedef struct Sub {
    int a;
    char *b;
    char *c;
    char *d;
} Sub;

typedef struct Slot {
    char pad0[0x10];
    char *x10;
    char *x14;
    char *x18;
    char *x1c;
    char *x20;
    char *x24;
    char *x28;
    char *x2c;
    char *x30;
    char *x34;
    int x38;
    char pad3c[0xf8 - 0x3c];
    Sub sub;
    char pad108[0x170 - 0x108];
    int x170;
    char pad174[0x2c4 - 0x174];
    char *ptrs[6];
    char pad2dc[4];
    char buf[0xc60 - 0x2e0];
    char buf2[0x2000 - 0xc60];
} Slot;

extern Mgr g_mgr_8c548868;
extern int g_flag_8c5488c8;
extern int g_flag_8c5488cc;
typedef struct Blk { char a[0x20]; char b[0x40]; char c[0x20]; } Blk;
extern Blk *g_buf_8c5488d4;
extern char *g_buf_8c54893c;
extern char *g_buf_8c548938;
extern char *g_buf_8c548934;
extern char *g_buf_8c548930;
extern char *g_buf_8c54892c;
extern char *g_buf_8c548928;
extern char *g_buf_8c548924;
extern int g_val_8c548448;
extern void palette_init_8c3598d6(int *);

void slot_init_8c35bd28(Slot *s);

void cache_flags_8c35bc90(void)
{
    unsigned int v;
    g_mgr_8c548868.x60 = 0;
    g_mgr_8c548868.x64 = 0;
    v = *(volatile unsigned int *)0xff00001c;
    if (v & 0x8000) g_mgr_8c548868.x60 = 1;
    if (v & 0x80) g_mgr_8c548868.x64 = 1;
}

unsigned int attr_a_8c35bcba(unsigned int x)
{
    if (g_flag_8c5488c8) x |= 0x2000000;
    return x;
}

unsigned int attr_b_8c35bcca(unsigned int x)
{
    if (g_flag_8c5488cc) x |= 0x2000000;
    return x;
}

void slots_init_8c35bcda(void)
{
    int i;
    int n = g_mgr_8c548868.count;
    Slot *p = g_mgr_8c548868.slots;
    for (i = 0; i < n; i++) slot_init_8c35bd28(p++);
}

void slot_init_8c35bd28(Slot *s)
{
    Blk *base;
    Sub *sub;
    s->x170 = 1;
    base = g_buf_8c5488d4;
    s->x10 = g_buf_8c54893c;
    s->x14 = g_buf_8c548938 - 0x10;
    s->x18 = g_buf_8c548934 - 0x20;
    s->x1c = g_buf_8c548930 - 0x20;
    s->x20 = g_buf_8c54892c;
    s->x24 = g_buf_8c548928;
    s->x28 = g_buf_8c548924;
    s->x2c = base->b;
    s->x30 = base->a;
    s->x34 = base->c;
    sub = &s->sub;
    s->x38 = g_val_8c548448;
    sub->a = s->x38;
    sub->b = s->buf;
    sub->c = s->buf2;
    sub->d = sub->c + 0x180;
    s->ptrs[0] = s->buf + 0x100;
    s->ptrs[1] = s->buf + 0x180;
    s->ptrs[2] = s->buf + 0x200;
    s->ptrs[3] = s->buf + 0x280;
    s->ptrs[4] = s->buf;
    s->ptrs[5] = s->buf + 0x80;
}

void slot_free_8c35bdd8(p)
char *p;
{
    palette_init_8c3598d6((int *)(p + 0x60));
    return;
}
