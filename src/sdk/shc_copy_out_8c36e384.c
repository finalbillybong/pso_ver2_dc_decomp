/* SDK pool group 0x8c36e384 (Hitachi SHC): strided 8/16/32-bit block copy to
   the bus with per-side step modes; every eighth element waits for the FIFO
   and, when the destination is in G2 space, for the bus. */
typedef struct Driver {
    char unknown0[0xd4];
    int locked;
} Driver;

extern Driver *g_driver_8c3fbdf0;
extern int init_slots_8c36dea0(void);
extern int wait_ready_8c36dfd4(void);
extern int wait_ready_8c36d98c(void);
extern void finish_8c36dd18(void);

int copy_out_8c36e384(char *src, char *dst, int width, int count, int src_mode, int dst_mode)
{
    int old;
    char *to = dst; /* unused copy of dst: reproduces the reference stack-slot layout */
    int s;
    int d;
    int i;
    unsigned int a;
    if (g_driver_8c3fbdf0->locked == 1) {
        old = _builtin_get_imask();
        _builtin_set_imask(15);
    }
    switch (src_mode) {
    case 0: s = 0; break;
    case 1: s = 1; break;
    case 2: s = -1; break;
    }
    switch (dst_mode) {
    case 0: d = 0; break;
    case 1: d = 1; break;
    case 2: d = -1; break;
    }
    init_slots_8c36dea0();
    wait_ready_8c36dfd4();
    switch (width) {
    case 1:
        {
            char *q = dst;
            char *p = src;
            for (i = 0; i < count; i++) {
                if ((i & 7) == 0) {
                    a = (unsigned int)q & 0x1fffffff;
                    wait_ready_8c36dfd4();
                    if (a >= 0x700000 && a <= 0x1000000) wait_ready_8c36d98c();
                }
                *q = *p;
                p += s;
                q += d;
            }
        }
        break;
    case 2:
        {
            short *q = (short *)dst;
            short *p = (short *)src;
            for (i = 0; i < count; i++) {
                if ((i & 7) == 0) {
                    a = (unsigned int)q & 0x1fffffff;
                    wait_ready_8c36dfd4();
                    if (a >= 0x700000 && a <= 0x1000000) wait_ready_8c36d98c();
                }
                *q = *p;
                p += s;
                q += d;
            }
        }
        break;
    case 4:
        {
            int *q = (int *)dst;
            int *p = (int *)src;
            for (i = 0; i < count; i++) {
                if ((i & 7) == 0) {
                    a = (unsigned int)q & 0x1fffffff;
                    wait_ready_8c36dfd4();
                    if (a >= 0x700000 && a <= 0x1000000) wait_ready_8c36d98c();
                }
                *q = *p;
                p += s;
                q += d;
            }
        }
        break;
    }
    finish_8c36dd18();
    if (g_driver_8c3fbdf0->locked == 1) _builtin_set_imask(old);
    return 0;
}
