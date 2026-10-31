/* SHC pool group 0x8c3822a0-0x8c382460: tagged chunk walker ('PVRT' /
   'GBIX') and texture-handle wrappers that set an error code on failure.
   The volatile/address-taken locals in tex_define reproduce the reference's
   stack homing (stored and reloaded vs stored only). */
typedef struct Hdr {
    unsigned int flags;
    char unknown4[0x1c - 4];
    int size;
} Hdr;

typedef struct Tex {
    char unknown0[0x18];
    Hdr hdr;
} Tex;

typedef struct Dims {
    int data;
    unsigned short w;
    unsigned short h;
} Dims;

extern void call_8c3889a4(int, unsigned int *, int);
extern int call_8c38c374(Hdr *, int, int, int);
extern int g_error_8c575734;
extern int call_8c3821b2(Hdr *);
extern Hdr g_hdr_8c3fc078;
extern int call_8c3b9d36(Hdr *);
extern void call_8c382460(int, int, int);
extern int channel_release_8c3ba068(Hdr *);
extern int call_8c3b78c0(void);

unsigned int *find_chunk_8c3822a0(int base, int *out, unsigned int *p)
{
    unsigned int tag;
    *out = -1;
    do {
        tag = *p++;
        switch (tag) {
        case 0x54525650:
            p++;
            call_8c3889a4(base, p, 8);
            p += 2;
            break;
        case 0x58494247:
            {
                unsigned int n = *p++;
                *out = *p;
                p += n >> 2;
            }
            break;
        default:
            return 0;
        }
    } while (tag != 0x54525650);
    return p;
}

int tex_define_8c382306(Tex *t, Dims *d)
{
    Hdr *volatile hp;
    volatile int w;
    int h;
    hp = &t->hdr;
    w = d->w;
    h = d->h;
    &h;
    if (0) w = 0;
    {
        int data = d->data;
        if (call_8c38c374(hp, w, h, data)) {
            g_error_8c575734 = 6;
            return -1;
        }
    }
    return 1;
}

int tex_load_8c382344(Tex *t)
{
    &t;
    if (call_8c3821b2(&t->hdr)) {
        g_error_8c575734 = 8;
        return -1;
    }
    return 1;
}

int tex_bind_8c38236c(Tex *t)
{
    if ((t->hdr.flags & 0x10000000) || (t->hdr.flags & 0x11000000)) {
        g_hdr_8c3fc078.size = t->hdr.size - 4;
        if (call_8c3b9d36(&g_hdr_8c3fc078)) goto fail;
    } else if (call_8c3b9d36(&t->hdr)) {
fail:
        g_error_8c575734 = 8;
        return -1;
    }
    return 1;
}

int tex_copy_8c3823ba(Tex *t, int dst, int off, int n)
{
    if (t == 0) return -1;
    {
        int src = (t->hdr.size | 0xa4000000) + off;
        call_8c382460(dst, src, n);
    }
    return 1;
}

int tex_release_8c3823e8(Tex *t)
{
    &t;
    if (channel_release_8c3ba068(&t->hdr)) return -1;
    return 1;
}

int tex_sync_8c38240a(void)
{
    if (call_8c3b78c0() == 0) return 1;
    return -1;
}
