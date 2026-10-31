/* Pool group 0x8c3ee8e4-0x8c3ee9a0 (Hitachi SHC): resets a block of state bytes,
   clears a 128-entry halfword table and snapshots a counter. */
extern unsigned char g_8c5c58c4;
extern unsigned char g_8c5c588a;
extern unsigned char g_8c5c5889;
extern unsigned char g_8c5c588b;
extern unsigned char g_8c5c588c;
extern unsigned char g_8c5c58bb;
extern unsigned char g_8c5c58bc;
extern short *g_8c5c587c;
extern char *g_8c5c4218;
extern char *g_8c5c4220;
extern short *g_8c5c5880;
extern unsigned char g_8c5c58a8;
extern unsigned char g_8c5c58a9;
extern unsigned char g_8c5c58ad;
extern unsigned char g_8c5c58ac;
extern unsigned char g_8c5c58c1;
extern unsigned char g_8c5c58b9;
extern int g_8c5be0fc;
extern int g_8c5c5898;

void state_init_8c3ee8e4(void)
{
    unsigned short i;

    g_8c5c58c4 = 0;
    g_8c5c588a = 0;
    g_8c5c5889 = 0;
    g_8c5c588b = 0;
    g_8c5c588c = 0;
    g_8c5c58bb = 0;
    g_8c5c58bc = 0;
    *g_8c5c587c = g_8c5c4220 - g_8c5c4218;
    for (i = 0; i <= 127; i++)
        g_8c5c5880[i] = 0;
    g_8c5c58a8 = 12;
    g_8c5c58a9 = 0xaf;
    g_8c5c58ad = 1;
    g_8c5c58ac = 1;
    g_8c5c58c1 = 1;
    g_8c5c58b9 = 0;
    g_8c5c5898 = g_8c5be0fc;
}
