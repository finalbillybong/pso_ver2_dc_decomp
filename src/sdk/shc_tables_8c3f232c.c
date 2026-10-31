extern unsigned short g_8c5bb13a;
extern unsigned short g_8c5bb13c;
extern unsigned short g_8c5bb140;
extern unsigned short g_8c5bb142;
extern unsigned short g_8c5bb144;
extern unsigned short g_8c5bb146;
extern unsigned short g_8c5bb148;
extern short g_8c5bb14a;
extern unsigned short g_8c5bb12a;
extern unsigned short g_8c5bb12c;
extern unsigned short g_8c5bb12e;
extern unsigned short g_8c5bb130;
extern unsigned short g_8c5bb132;
extern unsigned short g_8c5bb134;
extern unsigned short g_8c5bb122;
extern unsigned short g_8c5bb14c;
extern unsigned short g_8c5bb118;
extern unsigned short g_8c5bb120;
extern unsigned short g_8c5be13c;
extern unsigned short g_8c5be13e;
extern unsigned short g_8c5be140;
extern unsigned char g_8c5bb10a;
extern unsigned char g_8c5bb10b;
extern unsigned char g_8c5bb10c;
extern unsigned char g_8c5bb10d;
extern unsigned char g_8c5bb10e;
extern unsigned char g_8c5bb110;
extern unsigned char g_8c5bb111;
extern unsigned char g_8c5bb112;
extern unsigned char g_8c5c5935;
extern char g_8c5bfa18[];
extern char *g_8c5bb150;
extern short *g_8c5bb154;
extern short *g_8c5bb158;
extern short *g_8c5bb15c;
extern char *g_8c5bb28c;
extern short *g_8c5bb290;
extern short *g_8c5bb294;
extern short *g_8c5bb298;
extern unsigned short g_8c5bb274;
extern unsigned short g_8c5bb276;
extern unsigned short g_8c5bb278;
extern unsigned short g_8c5bb27a;
extern unsigned short g_8c5bb27e;
extern unsigned short g_8c5bb280;
extern unsigned short g_8c5bb282;
extern unsigned short g_8c5bb286;
extern unsigned short g_8c5bb288;
extern unsigned short g_8c5bb164;
extern unsigned char g_8c5bb271;
extern unsigned char g_8c5bb272;
extern unsigned char g_8c5bb16c;
extern unsigned char g_8c5bb16d;
extern unsigned char g_8c5bb16e;
extern unsigned char g_8c5bb170;

void tables_init_8c3f232c(void)
{
    short i;

    g_8c5bb142 = g_8c5bb13a;
    g_8c5bb144 = 9;
    g_8c5bb148 = 1;
    g_8c5bb14a = -7;
    g_8c5bb146 = 0x200;
    g_8c5bb12a = 0;
    g_8c5bb111 = 0;
    g_8c5bb12c = 0;
    g_8c5bb134 = 0;
    g_8c5bb122 = 0;
    g_8c5bb14c = 0;
    g_8c5bb132 = 0;
    g_8c5be13c = 0x400;
    g_8c5be13e = 0;
    g_8c5be140 = 0;
    g_8c5bb130 = 0;
    g_8c5bb110 = 0;
    g_8c5bb10e = 1;
    g_8c5bb10a = 0;
    g_8c5bb10b = 0;
    g_8c5bb10c = 0;
    g_8c5bb112 = 0;
    g_8c5bb10d = 0;
    if (g_8c5c5935)
        g_8c5bb12e = 0;
    else
        g_8c5bb12e = 0x40;
    g_8c5bb118 = 0;
    g_8c5bb120 = 0;
    g_8c5bb150 = g_8c5bfa18;
    g_8c5bb28c = g_8c5bb150 + 0x400;
    g_8c5bb154 = (short *)(g_8c5bb150 + 0x800);
    g_8c5bb158 = (short *)(g_8c5bb150 + 0x1000);
    g_8c5bb15c = (short *)(g_8c5bb150 + 0x1800);
    g_8c5bb290 = (short *)(g_8c5bb150 + 0x2000);
    g_8c5bb294 = (short *)(g_8c5bb150 + 0x2800);
    g_8c5bb298 = (short *)(g_8c5bb150 + 0x3000);
    for (i = 0; i <= g_8c5bb140; i++) {
        g_8c5bb150[i] = 0;
        g_8c5bb154[i] = 0;
        g_8c5bb158[i] = 0;
        g_8c5bb15c[i] = 0;
    }
    for (i = g_8c5bb13c; i < g_8c5bb13a; i++)
        g_8c5bb150[i] = i - g_8c5bb13c;
}

void tables_reset_8c3f24fc(void)
{
    short i;

    g_8c5bb274 = g_8c5bb13a;
    g_8c5bb276 = 9;
    g_8c5bb278 = 0x200;
    g_8c5bb27a = 0x1ff;
    g_8c5bb280 = 0;
    g_8c5bb282 = 0;
    g_8c5bb271 = 0;
    g_8c5bb27e = 0;
    g_8c5bb286 = 0;
    g_8c5bb170 = 0;
    g_8c5bb16d = 0;
    g_8c5bb16c = 1;
    g_8c5bb16e = 0;
    g_8c5bb272 = 1;
    g_8c5bb288 = 0;
    g_8c5bb164 = 0;
    for (i = 0; i <= g_8c5bb140; i++) {
        g_8c5bb28c[i] = 0;
        g_8c5bb290[i] = 0;
        g_8c5bb294[i] = 0;
        g_8c5bb298[i] = 0;
    }
    for (i = g_8c5bb13c; i < g_8c5bb13a; i++)
        g_8c5bb28c[i] = i - g_8c5bb13c;
}
