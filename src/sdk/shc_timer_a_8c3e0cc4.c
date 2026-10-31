extern unsigned char g_8c40030d;
extern int g_8c400308;
extern unsigned char g_8c40030c;
extern int g_8c400304;
extern unsigned char g_8c40030e;
extern unsigned int g_8c400310;
extern unsigned int g_8c400300;
extern unsigned int g_8c400314;
extern int create_handler_8c36bbc4(int, int, int, int);
extern void release_pending_8c36becc(int);
extern unsigned int tmu0_count_8c36e6f6(void);
extern unsigned int tmu0_to_us_8c36e706(unsigned int);

void timer_a_8c3e0cc4(char on, int arg)
{
    if (on) {
        g_8c400308 = create_handler_8c36bbc4(0xb40, arg, 0x10, 0);
        g_8c40030d = 1;
    } else if (g_8c40030d) {
        release_pending_8c36becc(g_8c400308);
        g_8c40030d = 0;
    }
}

void timer_b_8c3e0cfc(char on, int arg)
{
    if (on) {
        g_8c400304 = create_handler_8c36bbc4(0x900, arg, 0x48, 0);
        g_8c40030c = 1;
    } else if (g_8c40030c) {
        release_pending_8c36becc(g_8c400304);
        g_8c40030c = 0;
    }
}

unsigned int timer_now_8c3e0d34(void)
{
    unsigned int now, half, t;

    if (!g_8c40030e) {
        g_8c40030e = 1;
        now = tmu0_count_8c36e6f6();
        if (g_8c400310 > now)
            g_8c400300++;
        half = g_8c400310 = now;
        half >>= 1;
        now -= half;
        t = tmu0_to_us_8c36e706(now) / 10000;
        now = tmu0_to_us_8c36e706(half);
        t += now / 10000;
        t += g_8c400300 * 0x7dd44;
        g_8c40030e = 0;
        g_8c400314 = t;
    }
    return g_8c400314;
}
