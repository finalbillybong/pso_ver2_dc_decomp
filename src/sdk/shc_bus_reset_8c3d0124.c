/* Pool group 0x8c3d0124-0x8c3d0694 (Hitachi SHC 5.1r13): bus/port setup through
   the block-copy helpers and 8/16/32-bit port accessors. */
typedef struct {
    int tab[19];
} BusTab;

typedef struct {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    short w1c;
    int f20;
    unsigned short w24;
    short pad26;
    unsigned char b28;
    unsigned char b29;
    unsigned char b2a;
    unsigned char b2b;
    BusTab tab;
} Bus;

typedef struct {
    int mode;
    int width;
    int type;
} BusCfg;

extern Bus *g_8c5ba678;
extern BusCfg *g_8c5ba67c;
extern int g_8c5ba680;
extern void delay_8c3cfc00(int);
extern int copy_8c36e010(char *, char *, int, int, int, int);
extern int copy_out_8c36e384(char *, char *, int, int, int, int);

unsigned char port_read_8c3d05a8(volatile unsigned char *);
unsigned short port_read16_8c3d05cc(volatile unsigned short *);
unsigned long port_read32_8c3d05f0(volatile unsigned long *);
void port_write_8c3d0614(volatile unsigned char *volatile, unsigned char);
void port_write16_8c3d0638(volatile unsigned short *volatile, unsigned short);
void port_write32_8c3d065c(volatile unsigned long *volatile, unsigned long);
void bus_apply_8c3d022c(void);
int bus_start_8c3d0352(void);
int call_8c3d04fa(void);

#define P8(a) ((volatile unsigned char *)(a))
#define P16(a) ((volatile unsigned short *)(a))
#define P32(a) ((volatile unsigned long *)(a))

int bus_reset_8c3d0124(void)
{
    unsigned long r;
    port_write32_8c3d065c(P32(0xa1001418), 0x5a14a501);
    delay_8c3cfc00(2000);
    r = port_read32_8c3d05f0(P32(0xa1001418));
    if (r != 1) return -1;
    port_write32_8c3d065c(P32(0xa1001420), 0x1000000);
    port_write32_8c3d065c(P32(0xa1001424), 0x1000000);
    port_write32_8c3d065c(P32(0xa1001428), 0x1840000);
    port_write32_8c3d065c(P32(0xa1001414), 1);
    port_write32_8c3d065c(P32(0xa1001434), 1);
    return 0;
}

void bus_regs_8c3d0174(void)
{
    unsigned short v;
    unsigned char b;
    port_write16_8c3d0638(P16(0xa1001606), 0xf900);
    port_write32_8c3d065c(P32(0xa1001630), 0);
    port_write_8c3d0614(P8(0xa100163c), 0);
    port_write_8c3d0614(P8(0xa100160d), 0xf0);
    v = port_read16_8c3d05cc(P16(0xa1001604));
    v |= 6;
    port_write16_8c3d0638(P16(0xa1001604), v);
    port_write32_8c3d065c(P32(0xa1001614), 0x1000000);
    b = port_read_8c3d05a8(P8(0xa1001650));
    if (b & 1) {
        v = port_read16_8c3d05cc(P16(0xa1001654));
        v &= 0xfffc;
        v |= 0x8000;
        port_write16_8c3d0638(P16(0xa1001654), v);
    }
}

void bus_apply_8c3d022c(void)
{
    int i;
    g_8c5ba678->f18 = 0x1844000;
    g_8c5ba678->f08 = 0x1846000;
    g_8c5ba678->f0c = 0x1846800;
    g_8c5ba678->f10 = 0x1847000;
    g_8c5ba678->f14 = 0x1847800;
    *(volatile int *)&g_8c5ba680 = 0;
    for (i = 0; i < sizeof(BusTab) / sizeof(int); i++) ((int *)&g_8c5ba678->tab)[i] = 0;
    g_8c5ba678->f04 = 0x3000100;
    switch (g_8c5ba67c->width) {
    case 1: g_8c5ba678->f04 |= 0x20000; break;
    case 2: g_8c5ba678->f04 |= 0x40000; break;
    case 3: g_8c5ba678->f04 |= 0x60000; break;
    case 0: break;
    default: break;
    }
    g_8c5ba678->f00 = 0x4980;
    switch (g_8c5ba67c->type) {
    case 4: g_8c5ba678->f00 |= 0x20;
    case 3: g_8c5ba678->f00 |= 1;
    case 2: g_8c5ba678->f00 |= 4;
    case 1: g_8c5ba678->f00 |= 0xa;
    case 0: break;
    }
    switch (g_8c5ba67c->mode) {
    case 4: g_8c5ba678->w1c = 0x1000; break;
    case 3: g_8c5ba678->w1c = 0x2100; break;
    case 2: g_8c5ba678->w1c = 0x2000; break;
    case 1: g_8c5ba678->w1c = 0x100; break;
    case 0: default: g_8c5ba678->w1c = 0; break;
    }
}

int bus_start_8c3d0352(void)
{
    unsigned char v;
    int i;
    port_write_8c3d0614(P8(0xa1001737), 0x10);
    g_8c5ba678->f20 = 0x1840000;
    g_8c5ba678->w24 = 0xfff0;
    g_8c5ba678->b28 = 0;
    g_8c5ba678->b29 = 0;
    g_8c5ba678->b2a = 0;
    for (i = 0; i < 1000; i++) {
        v = port_read_8c3d05a8(P8(0xa1001737));
        if (!(v & 0x10)) break;
    }
    v = port_read_8c3d05a8(P8(0xa10017d8));
    port_write_8c3d0614(P8(0xa10017d8), v | 4);
    port_write_8c3d0614(P8(0xa1001750), 0xc0);
    v = port_read_8c3d05a8(P8(0xa1001752));
    port_write_8c3d0614(P8(0xa1001752), (v | 0x80) & 0xbf);
    port_write_8c3d0614(P8(0xa1001750), 0);
    if (call_8c3d04fa() == 1) g_8c5ba678->b2b = 1;
    else g_8c5ba678->b2b = 0;
    port_write32_8c3d065c(P32(0xa1001730), g_8c5ba678->f20);
    port_write16_8c3d0638(P16(0xa1001738), g_8c5ba678->w24);
    port_write32_8c3d065c(P32(0xa1001720), g_8c5ba678->f08);
    port_write32_8c3d065c(P32(0xa1001724), g_8c5ba678->f0c);
    port_write32_8c3d065c(P32(0xa1001728), g_8c5ba678->f10);
    port_write32_8c3d065c(P32(0xa100172c), g_8c5ba678->f14);
    v = port_read_8c3d05a8(P8(0xa1001737));
    v |= 0xc;
    port_write_8c3d0614(P8(0xa1001737), v);
    port_write32_8c3d065c(P32(0xa1001708), -1);
    port_write32_8c3d065c(P32(0xa100170c), -1);
    port_write_8c3d0614(P8(0xa1001750), 0xc0);
    port_write16_8c3d0638(P16(0xa1001762), g_8c5ba678->w1c);
    port_write_8c3d0614(P8(0xa1001750), 0);
    port_write32_8c3d065c(P32(0xa1001740), g_8c5ba678->f04);
    port_write32_8c3d065c(P32(0xa1001744), g_8c5ba678->f00);
    port_write16_8c3d0638(P16(0xa100173e), 0xffff);
    port_write16_8c3d0638(P16(0xa100173c), 0x807f);
    return 0;
}

int bus_config_8c3d04b0(BusCfg *c)
{
    g_8c5ba67c->mode = c->mode;
    g_8c5ba67c->width = c->width;
    g_8c5ba67c->type = c->type;
    bus_apply_8c3d022c();
    return bus_start_8c3d0352();
}

void bus_get_config_8c3d04ce(BusCfg *c)
{
    c->mode = g_8c5ba67c->mode;
    c->width = g_8c5ba67c->width;
    c->type = g_8c5ba67c->type;
}

void bus_get_table_8c3d04e4(BusTab *t)
{
    *t = g_8c5ba678->tab;
}

int call_8c3d04fa(void)
{
    unsigned char b;
    b = port_read_8c3d05a8(P8(0xa1001758));
    if (b & 4) return 0;
    return 1;
}

int bus_wait_8c3d0560(void)
{
    unsigned int i;
    unsigned char b;
    port_write_8c3d0614(P8(0xa1001750), 0x40);
    for (i = 0; i < 3000; i++) {
        b = port_read_8c3d05a8(P8(0xa1001750));
        if (!(b & 0xc0)) break;
        delay_8c3cfc00(1);
    }
    if (i == 3000) return -1;
    return 0;
}

unsigned char port_read_8c3d05a8(volatile unsigned char *p)
{
    volatile unsigned char *volatile a = p;
    unsigned char v;
    copy_8c36e010((char *)a, (char *)&v, 1, 1, 1, 1);
    return v;
}

unsigned short port_read16_8c3d05cc(volatile unsigned short *p)
{
    volatile unsigned short *volatile a = p;
    unsigned short v;
    copy_8c36e010((char *)a, (char *)&v, 2, 1, 1, 1);
    return v;
}

unsigned long port_read32_8c3d05f0(volatile unsigned long *p)
{
    volatile unsigned long *volatile a = p;
    unsigned long v;
    copy_8c36e010((char *)a, (char *)&v, 4, 1, 1, 1);
    return v;
}

void port_write_8c3d0614(volatile unsigned char *volatile p, unsigned char v)
{
    unsigned char b = v;
    copy_out_8c36e384((char *)&b, (char *)p, 1, 1, 1, 1);
}

void port_write16_8c3d0638(volatile unsigned short *volatile p, unsigned short v)
{
    unsigned short b = v;
    copy_out_8c36e384((char *)&b, (char *)p, 2, 1, 1, 1);
}

void port_write32_8c3d065c(volatile unsigned long *volatile p, unsigned long v)
{
    unsigned long b = v;
    copy_out_8c36e384((char *)&b, (char *)p, 4, 1, 1, 1);
}
