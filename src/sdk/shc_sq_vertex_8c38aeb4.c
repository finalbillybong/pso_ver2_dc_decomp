/* Store-queue polygon/vertex submission helpers (Hitachi SHC, _builtin_prefetch flushes the queue). */
typedef struct SqCtx {
    unsigned int w0;
    unsigned int w4;
    unsigned int w8;
    unsigned int wc;
    unsigned int addr0;
    unsigned int addr1;
} SqCtx;

extern void prepare_8c37a3ec(void);
extern void use_handle_8c37b070(unsigned int);
extern void finish_8c37a44a(void);
extern void sq_begin_8c37b152(int);
extern void sq_begin2_8c37b220(int);
extern int g_sq_mode_8c5763f4;
extern unsigned int g_sq_ptr_8c5763f0;
extern SqCtx g_sq_ctx_8c56d4d8;
extern unsigned int g_sq_base_8c56d4fc;
extern unsigned int *g_sq_next_8c56d500;

void sq_select_8c38aeb4(int mode)
{

    prepare_8c37a3ec();
    g_sq_mode_8c5763f4 = mode;
    if (mode) {
        g_sq_ptr_8c5763f0 = g_sq_ctx_8c56d4d8.addr1 & 0x3ffffff | 0xe0000000;
        g_sq_base_8c56d4fc = 0xfc000000 & g_sq_ctx_8c56d4d8.addr1;
        *(unsigned int *)0xff000038 = *(unsigned int *)0xff00003c = g_sq_ctx_8c56d4d8.addr1 >> 24 & 0x1c;
    } else {
        g_sq_ptr_8c5763f0 = g_sq_ctx_8c56d4d8.addr0 & 0x3ffffff | 0xe0000000;
        g_sq_base_8c56d4fc = 0xfc000000 & g_sq_ctx_8c56d4d8.addr0;
        *(unsigned int *)0xff000038 = *(unsigned int *)0xff00003c = g_sq_ctx_8c56d4d8.addr0 >> 24 & 0x1c;
    }
}

void sq_flush_8c38af12(void)
{
    (*use_handle_8c37b070)(g_sq_ptr_8c5763f0);
    finish_8c37a44a();
}

void sq_header_8c38af22(volatile int a, unsigned int b)
{
    unsigned int *p;
    unsigned int m;

    sq_begin_8c37b152(a);
    p = (unsigned int *)g_sq_ptr_8c5763f0;
    m = 0x30080;
    if (g_sq_mode_8c5763f4) {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0xfff7ffff | 0x100000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & m | 0xa2800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr1;
    } else {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0x3efffff | 0x20080000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & m | 0xa0800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr0;
    }
    g_sq_ptr_8c5763f0 = (unsigned int)p;
}

void sq_header2_8c38afa8(volatile int a, unsigned int b)
{
    unsigned int *p;
    unsigned int m;

    sq_begin2_8c37b220(a);
    p = (unsigned int *)g_sq_ptr_8c5763f0;
    m = 0x30080;
    if (g_sq_mode_8c5763f4) {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0xfff7ffff | 0x100000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & m | 0xa2800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr1;
    } else {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0x3efffff | 0x20080000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & m | 0xa0800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr0;
    }
    g_sq_ptr_8c5763f0 = (unsigned int)p;
}

void sq_header3_8c38b02e(unsigned int b)
{
    unsigned int *p;

    p = (unsigned int *)g_sq_ptr_8c5763f0;
    if (g_sq_mode_8c5763f4) {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0xfff7ffff | 0x100000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & 0x30080 | 0xa2800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr1;
    } else {
        p += 5;
        *--p = b;
        *--p = g_sq_ctx_8c56d4d8.wc;
        *--p = g_sq_ctx_8c56d4d8.w8 & 0x3efffff | 0x20080000;
        *--p = g_sq_ctx_8c56d4d8.w4;
        *--p = g_sq_ctx_8c56d4d8.w0 & 0x30080 | 0xa0800009;
        _builtin_prefetch(p);
        p += 8;
        g_sq_next_8c56d500 = &g_sq_ctx_8c56d4d8.addr0;
    }
    g_sq_ptr_8c5763f0 = (unsigned int)p;
}

void sq_quad_8c38b09e(register float *v, float z)
{
    float x0;
    float y0;
    float x1;
    float y1;
    register unsigned int c0;
    register unsigned int c1;
    register unsigned int c2;
    register unsigned int c3;
    float *p;
    x0 = *v++;
    y0 = *v++;
    x1 = *v++;
    y1 = *v++;
    p = (float *)g_sq_ptr_8c5763f0 + 8;
    *--p = x1;
    *--p = z;
    *--p = y0;
    *--p = x1;
    *--p = z;
    *--p = y0;
    *--p = x0;
    *(unsigned int *)--p = 0xffff0000;
    _builtin_prefetch(p);
    c0 = *(unsigned int *)v++;
    p += 16;
    c1 = *(unsigned int *)v++ >> 16;
    c2 = *(unsigned int *)v++ & 0xffff0000;
    c3 = *(unsigned int *)v >> 16;
    *(unsigned int *)--p = c2 | c3;
    *(unsigned int *)--p = c2 | c1;
    *(unsigned int *)--p = c0 & 0xffff0000 | c1;
    --p;
    *--p = y1;
    *--p = x0;
    *--p = z;
    *--p = y1;
    _builtin_prefetch(p);
    p += 8;
    g_sq_ptr_8c5763f0 = (unsigned int)p;
}
