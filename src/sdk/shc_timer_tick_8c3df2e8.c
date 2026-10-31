extern unsigned char g_8c5be500;
extern char g_8c5be50a;
extern unsigned char g_8c5be504;
extern unsigned char g_8c5be506;
extern unsigned int g_8c5be520;
extern unsigned int g_8c5be0fc;
extern void send_8c3e5498(int, char);
extern void reset_8c3dc224(unsigned int *, int);

void timer_tick_8c3df2e8(void)
{
    g_8c5be500 = 6;
    send_8c3e5498(0, g_8c5be50a);
    if (g_8c5be520 <= g_8c5be0fc) {
        reset_8c3dc224(&g_8c5be520, 2000);
        g_8c5be504 = 1;
    } else {
        g_8c5be504++;
    }
    g_8c5be506 = 0;
}
