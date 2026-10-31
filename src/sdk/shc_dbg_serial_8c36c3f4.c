/* SDK pool group 0x8c36c3f4 (Hitachi SHC): debug serial console on the SCI or
   SCIF port (init, put/get character, shutdown, string and hex output).
   Registers are reached through base-address macros (add-then-store form). */
#define REG8(b, o) (*(volatile unsigned char *)((b) + (o)))
#define REG16(b, o) (*(volatile unsigned short *)((b) + (o)))
#define SCSMR 0x00
#define SCBRR 0x04
#define SCSCR 0x08
#define SCTDR 0x0c
#define SCSSR 0x10
#define SCRDR 0x14
#define SCFCR 0x18
#define SCSPTR 0x1c
#define SCSPTR2 0x20
#define SCLSR 0x24

/* FIFO data count register, read through a struct view of the SCIF base */
typedef struct ScifFifo {
    char unknown0[0x1c];
    unsigned short fdr;
} ScifFifo;

extern unsigned long g_sci_8c560e58;
extern unsigned long g_scif_8c560e5c;
extern int g_port_8c560e60;

int dbg_init_8c36c3f4(void)
{
    volatile int i;
    volatile int j;
    volatile int k;
    REG8(0xffc00000, 4) &= 0xfe;
    i = REG8(0xffc00000, 4);
    for (i = 0; i < 0x50000; i++)
        ;
    if (REG8(g_sci_8c560e58, SCSPTR) & 4) g_port_8c560e60 = 0;
    else g_port_8c560e60 = 1;
    switch (g_port_8c560e60) {
    case 0:
        g_scif_8c560e5c = 0xffe80000;
        REG16(0xffe80000, SCSCR) = 0;
        REG16(g_scif_8c560e5c, SCFCR) = 6;
        REG16(g_scif_8c560e5c, SCSCR) = 0;
        REG16(g_scif_8c560e5c, SCSMR) = 0;
        REG8(g_scif_8c560e5c, SCBRR) = 40;
        for (k = 0; k < 0x80000; k++)
            ;
        REG16(g_scif_8c560e5c, SCFCR) = 0x308;
        REG16(g_scif_8c560e5c, SCSCR) = 0x30;
        break;
    case 1:
    default:
        g_sci_8c560e58 = 0xffe00000;
        REG8(0xffe00000, SCSCR) = 0;
        REG8(g_sci_8c560e58, SCSCR) = 0;
        REG8(g_sci_8c560e58, SCSMR) = 0;
        REG8(g_sci_8c560e58, SCBRR) = 40;
        for (j = 0; j < 0x80000; j++)
            ;
        REG8(g_sci_8c560e58, SCSCR) = 0x30;
        break;
    }
    return g_port_8c560e60;
}

void dbg_putc_8c36c4c0(char c0)
{
    char c = c0;
    switch (g_port_8c560e60) {
    case 0:
        while ((REG16(g_scif_8c560e5c, SCSSR) & 0x20) != 0x20)
            ;
        REG8(g_scif_8c560e5c, SCTDR) = c;
        REG16(g_scif_8c560e5c, SCSSR) &= 0xffdf;
        REG16(g_scif_8c560e5c, SCSSR) &= 0xffbf;
        while ((REG16(g_scif_8c560e5c, SCSSR) & 0x40) != 0x40)
            ;
        break;
    case 1:
        while ((REG8(g_sci_8c560e58, SCSSR) & 0x80) != 0x80)
            ;
        REG8(g_sci_8c560e58, SCTDR) = c;
        REG8(g_sci_8c560e58, SCSSR) &= 0x7f;
        while ((REG8(g_sci_8c560e58, SCSSR) & 4) != 4)
            ;
        break;
    }
}

int dbg_getc_8c36c572(void)
{
    int c;
    unsigned long b;
    switch (g_port_8c560e60) {
    case 0:
        b = g_scif_8c560e5c;
        while ((unsigned char)((volatile ScifFifo *)b)->fdr == 0)
            ;
        c = *(volatile char *)(b + SCRDR);
        break;
    case 1:
        if ((REG8(g_sci_8c560e58, SCSPTR) & 4) == 4) c = 13;
        break;
    }
    return c;
}

void dbg_exit_8c36c5ac(void)
{
    switch (g_port_8c560e60) {
    case 0:
        REG16(g_scif_8c560e5c, SCSCR) = 0;
        REG16(g_scif_8c560e5c, SCFCR) = 6;
        REG16(g_scif_8c560e5c, SCSMR) = 0;
        REG8(g_scif_8c560e5c, SCBRR) = 0xff;
        REG16(g_scif_8c560e5c, SCSCR) = 0;
        REG16(g_scif_8c560e5c, SCSSR) = 0;
        REG16(g_scif_8c560e5c, SCFCR) = 0;
        REG16(g_scif_8c560e5c, SCSPTR2) = 0;
        REG16(g_scif_8c560e5c, SCLSR) = 0;
        break;
    case 1:
    default:
        break;
    }
    REG8(0xffc00000, 4) |= 1;
}

void dbg_puts_8c36c602(char *s)
{
    while (*s) dbg_putc_8c36c4c0(*s++);
}

void dbg_puthex_8c36c638(unsigned int v)
{
    int s;
    unsigned char c;
    for (s = 28; s >= 0; s -= 4) {
        c = (v >> s) & 15;
        if (c >= 10) c += 55;
        else c += 48;
        dbg_putc_8c36c4c0(c);
    }
}
