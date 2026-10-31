typedef struct Disc {
    char unknown0[0x50];
    unsigned short w50;
    char unknown52[2];
    short w54;
    char unknown56[0x5a];
    unsigned short wb0;
} Disc;

extern unsigned char blink_update_8c3e1af0(void);
extern unsigned char g_8c5be555;
extern unsigned int g_8c5be558;
extern unsigned int g_8c5be0fc;
extern unsigned char g_8c5be489;
extern Disc *g_8c5bb378;
extern char check_a_8c3d6466(unsigned char, unsigned int);
extern char check_b_8c3d660a(unsigned char, unsigned int);
extern char check_c_8c3d67b4(unsigned char, unsigned int);
extern char check_d_8c3d692e(unsigned char, unsigned int);
extern void reset_8c3dc224(unsigned int *, int);
extern unsigned int g_8c5be530;
extern unsigned int g_8c5be534;
extern unsigned int g_8c5be538;

char disc_poll_8c3de1ec(void)
{
    unsigned char cur;
    unsigned int now;
    unsigned int dt;
    unsigned int *last;
    unsigned char *prev;
/* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto LA; LA:

    cur = blink_update_8c3e1af0();
    prev = &g_8c5be555;
    last = &g_8c5be558;
    now = g_8c5be0fc;
    if (cur != *prev) {
        dt = now - *last;
        *last = now;
        *prev = cur;
        if ((g_8c5be489 & 0x20) && check_a_8c3d6466(cur, dt))
            return 2;
        if ((g_8c5be489 & 8) && check_b_8c3d660a(cur, dt))
            return 1;
        if (check_c_8c3d67b4(cur, dt))
            return 3;
        if (g_8c5bb378->w54 != 0 && check_d_8c3d692e(cur, dt) != 0)
            goto four;
    } else if (cur && (g_8c5bb378->wb0 & 0x4000) && !g_8c5bb378->w54) {
        if (now - *last >= g_8c5bb378->w50)
four:
            return 4;
    }
    return 0;
}

void disc_timers_8c3de2be(void)
{
    reset_8c3dc224(&g_8c5be530, 30);
    reset_8c3dc224(&g_8c5be534, 25);
    reset_8c3dc224(&g_8c5be538, 30);
}
