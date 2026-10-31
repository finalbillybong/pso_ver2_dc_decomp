/* Store-queue context: load/save the polygon header words from the render state, open queue 0 with a 3-word header. */
void _builtin_prefetch(void *);

typedef struct State {
    char pad[0x90];
    unsigned int hdr[4];
} State;

typedef struct Buf {
    unsigned int a0;
    unsigned int a4;
    unsigned int a8;
    unsigned int ac;
    unsigned int a10;
} Buf;

typedef struct SqCtx {
    unsigned int w0;
    unsigned int w4;
    unsigned int w8;
    unsigned int wc;
    unsigned int a10;
    unsigned int a14;
    unsigned int a18;
    unsigned int addr0;
    unsigned int addr1;
} SqCtx;

extern State *g_state_8c575c3c;
extern Buf *obj_8c575c5c;
extern unsigned int g_8c575570;
extern SqCtx g_sq_ctx_8c56d4d8;
extern unsigned int g_sq_base_8c56d4fc;
extern unsigned int *g_sq_next_8c56d500;

void prepare_8c37a3ec(void)
{
    g_sq_ctx_8c56d4d8.w0 = g_state_8c575c3c->hdr[0];
    g_sq_ctx_8c56d4d8.w4 = g_state_8c575c3c->hdr[1];
    g_sq_ctx_8c56d4d8.w8 = g_state_8c575c3c->hdr[2];
    g_sq_ctx_8c56d4d8.wc = g_state_8c575c3c->hdr[3];
    g_sq_ctx_8c56d4d8.a10 = obj_8c575c5c->a0;
    g_sq_ctx_8c56d4d8.addr0 = obj_8c575c5c->a4;
    g_sq_ctx_8c56d4d8.addr1 = obj_8c575c5c->ac;
    if (g_8c575570 & 0x4000) {
        g_sq_ctx_8c56d4d8.a14 = obj_8c575c5c->a10;
        g_sq_ctx_8c56d4d8.a18 = obj_8c575c5c->a8;
    } else {
        g_sq_ctx_8c56d4d8.a14 = obj_8c575c5c->a8;
        g_sq_ctx_8c56d4d8.a18 = obj_8c575c5c->a10;
    }
}

void finish_8c37a44a(void)
{
    g_state_8c575c3c->hdr[0] = g_sq_ctx_8c56d4d8.w0;
    g_state_8c575c3c->hdr[1] = g_sq_ctx_8c56d4d8.w4;
    g_state_8c575c3c->hdr[2] = g_sq_ctx_8c56d4d8.w8;
    g_state_8c575c3c->hdr[3] = g_sq_ctx_8c56d4d8.wc;
    obj_8c575c5c->a0 = g_sq_ctx_8c56d4d8.a10;
    obj_8c575c5c->a4 = g_sq_ctx_8c56d4d8.addr0;
    obj_8c575c5c->ac = g_sq_ctx_8c56d4d8.addr1;
    if (g_8c575570 & 0x4000) {
        obj_8c575c5c->a10 = g_sq_ctx_8c56d4d8.a14;
        obj_8c575c5c->a8 = g_sq_ctx_8c56d4d8.a18;
    } else {
        obj_8c575c5c->a8 = g_sq_ctx_8c56d4d8.a14;
        obj_8c575c5c->a10 = g_sq_ctx_8c56d4d8.a18;
    }
}

unsigned int *start_mode_b_8c37a4a8(void)
{
    register unsigned int a;
    register unsigned int *p;

    a = g_sq_ctx_8c56d4d8.a10;
    p = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    g_sq_base_8c56d4fc = 0xfc000000 & a;
    *(unsigned int *)0xff000038 = *(unsigned int *)0xff00003c = a >> 24 & 0x1c;
    p += 3;
    *--p = g_sq_ctx_8c56d4d8.w8 & 0x3efffff | 0x20080000;
    *--p = g_sq_ctx_8c56d4d8.w4;
    *--p = g_sq_ctx_8c56d4d8.w0;
    _builtin_prefetch(p);
    p += 8;
    g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.a10;
    return p;
}
