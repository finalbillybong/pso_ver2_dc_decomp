/* SDK pool group 0x8c20497c (Hitachi SHC): unpacks the status register bytes
   into a byte record, and the masked sync step that latches the counters. */
typedef struct Status {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char b8;
    unsigned char b9;
    unsigned char b10;
    unsigned char b11;
} Status;

typedef struct Flags {
    unsigned char unknown:5;
    unsigned char bit:1;
    unsigned char rest:2;
} Flags;

typedef struct Ops {
    int unknown0[2];
    void (*sync)(int *);
} Ops;

extern unsigned char g_status_8c504860[];
extern unsigned char g_status_8c504864[];
extern volatile char g_active_8c50480c[];
extern int g_count_8c504874;
extern int g_latch_8c504878;
extern int g_latch_8c50487c;
extern int g_time_8c504870;
extern int g_time_8c504880;
extern Flags g_flags_8c50486f;
extern Flags g_flags_8c50486b;
extern int g_sync_8c504868;
extern Ops *g_ops_8c5047e0;

void read_status_8c20497c(Status *s)
{
    unsigned char *p;
    p = g_status_8c504860;
    s->b0 = p[0] & 1;
    s->b1 = p[0] & 2;
    s->b2 = ((unsigned char *)((int)p + 1))[0] & 3;
    s->b3 = ((unsigned char *)((int)p + 1))[0] & 0x38;
    s->b4 = ((unsigned char *)((int)p + 1))[0] & 4;
    s->b5 = ((unsigned char *)((int)p + 1))[0] & 0x40;
    s->b6 = p[2];
    p = g_status_8c504864;
    s->b10 = (p[0] & 0x80) >> 7;
    s->b9 = (p[0] & 0x40) >> 6;
    s->b8 = (p[0] & 0x20) >> 5;
    s->b7 = (p[0] & 0x10) >> 4;
    s->b11 = ((unsigned char *)((int)p + 1))[0] & 1;
}

void sync_8c2049ea(void)
{
    short old;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto check;
check:
    if (g_active_8c50480c[0]) {
        old = _builtin_get_imask();
        _builtin_set_imask(15);
        g_latch_8c504878 = g_latch_8c50487c = g_count_8c504874;
        g_time_8c504880 = g_time_8c504870;
        if (g_flags_8c50486f.bit == 1) {
            g_flags_8c50486b.bit = 1;
            g_ops_8c5047e0->sync(&g_sync_8c504868);
            g_sync_8c504868 = 0;
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto restore;
restore:
            _builtin_set_imask(old);
        } else {
            for (;;) ;
        }
    }
}
