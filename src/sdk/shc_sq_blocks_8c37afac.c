/* Store-queue block helpers: select a queue target, emit 8-byte control blocks (flushed with _builtin_prefetch). */
void _builtin_prefetch(void *);

typedef struct SqCtx {
    unsigned int w0;
    unsigned int pad[6];
    unsigned int addr0;
    unsigned int addr1;
} SqCtx;

extern SqCtx g_sq_ctx_8c56d4d8;
extern unsigned int g_sq_base_8c56d4fc;
extern unsigned int *g_sq_next_8c56d500;

unsigned int *sq_open0_8c37afac(void)
{
    unsigned int a;
    unsigned int *p;

    a = g_sq_ctx_8c56d4d8.addr0;
    p = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    g_sq_base_8c56d4fc = 0xfc000000 & a;
    *(unsigned int *)0xff000038 = *(unsigned int *)0xff00003c = a >> 24 & 0x1c;
    p += 2;
    *--p = 0;
    *--p = g_sq_ctx_8c56d4d8.w0 & 0x30000 | 0x81000000;
    _builtin_prefetch(p);
    p += 8;
    g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr0;
    return p;
}

unsigned int *sq_open1_8c37aff2(void)
{
    unsigned int a;
    unsigned int *p;

    a = g_sq_ctx_8c56d4d8.addr1;
    p = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    g_sq_base_8c56d4fc = 0xfc000000 & a;
    *(unsigned int *)0xff000038 = *(unsigned int *)0xff00003c = a >> 24 & 0x1c;
    p += 2;
    *--p = 0;
    *--p = g_sq_ctx_8c56d4d8.w0 & 0x30000 | 0x81000000;
    _builtin_prefetch(p);
    p += 8;
    g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr1;
    return p;
}

unsigned int *func_8c37b038(unsigned int *p)
{
    p += 2;
    *--p = 0x20000000;
    *--p = g_sq_ctx_8c56d4d8.w0 & 0x30000 | 0x81000040;
    _builtin_prefetch(p);
    p += 8;
    return p;
}

unsigned int *sq_mark_8c37b054(unsigned int *p)
{
    p += 2;
    *--p = 0x40000000;
    *--p = g_sq_ctx_8c56d4d8.w0 & 0x30000 | 0x81000040;
    _builtin_prefetch(p);
    p += 8;
    return p;
}

void use_handle_8c37b070(unsigned int x)
{
    *g_sq_next_8c56d500 = x & 0x3ffffff | g_sq_base_8c56d4fc;
}
