extern unsigned char g_8c5be3c7[];
extern unsigned char g_8c5be0be[];
extern unsigned char g_8c5be56e;
extern unsigned char g_8c5be56f;
extern unsigned char g_8c5be3f8;
extern unsigned char g_8c5be3b0[];
extern char check_a_8c3dac14(void);
extern char check_b_8c3dac2a(void);
extern void notify_8c3d2cf0(int);

void poll_buttons_8c3e0188(void)
{
    unsigned char saved;

    if ((g_8c5be3c7[0] & 0x40) && !(g_8c5be0be[0] & 0x40)) {
        if (!check_a_8c3dac14()) {
            if (!g_8c5be56e && !g_8c5be3b0[0] && !(g_8c5be0be[0] & 8)) {
                saved = g_8c5be3f8;
                notify_8c3d2cf0(1);
                g_8c5be3f8 = saved;
            }
            g_8c5be56e = 1;
        } else {
            if (g_8c5be56e && g_8c5be3b0[0] == 1) {
                saved = g_8c5be3f8;
                notify_8c3d2cf0(0);
                g_8c5be3f8 = saved;
            }
            g_8c5be56e = 0;
        }
        if (!check_b_8c3dac2a()) {
            if (!g_8c5be56f && !g_8c5be3b0[0] && (g_8c5be0be[0] & 8)) {
                saved = g_8c5be3f8;
                notify_8c3d2cf0(6);
                g_8c5be3f8 = saved;
            }
            g_8c5be56f = 1;
        } else {
            if (g_8c5be56f && g_8c5be3b0[0] == 0x10) {
                saved = g_8c5be3f8;
                notify_8c3d2cf0(0);
                g_8c5be3f8 = saved;
            }
            g_8c5be56f = 0;
        }
    }
}
