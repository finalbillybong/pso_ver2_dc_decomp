/* SDK pool group 0x8c36e6d0 (Hitachi SHC): SH-4 TMU timer helpers: free-running
   channel 0, one-shot/interrupt channels 1 and 2, tick conversions. */
#define TOCR (*(volatile unsigned char *)0xffd80000)
#define TSTR (*(volatile char *)0xffd80004)
#define TCOR0 (*(volatile unsigned long *)0xffd80008)
#define TCNT0 (*(volatile unsigned long *)0xffd8000c)
#define TCR0 (*(volatile short *)0xffd80010)
#define TCOR1 (*(volatile unsigned long *)0xffd80014)
#define TCNT1 (*(volatile unsigned long *)0xffd80018)
#define TCR1 (*(volatile short *)0xffd8001c)
#define TCOR2 (*(volatile unsigned long *)0xffd80020)
#define TCNT2 (*(volatile unsigned long *)0xffd80024)
#define TCR2 (*(volatile short *)0xffd80028)
#define IPRA (*(volatile short *)0xffd00004)

typedef void (*TimerFn)(void *);

extern TimerFn g_cb1_8c561058;
extern void *g_arg1_8c56105c;
extern TimerFn g_cb2_8c561060;
extern void *g_arg2_8c561064;

void tmu1_irq_8c36e82c(void);
void tmu2_irq_8c36e850(void);

void tmu0_start_8c36e6d0(void)
{
    TOCR = 0;
    TSTR &= 0xfe;
    TCR0 = 2;
    TCOR0 = 0xffffffff;
    TCNT0 = 0xffffffff;
    TSTR |= 1;
}

long tmu0_count_8c36e6f6(void)
{
    return -1 - (long)TCNT0;
}

unsigned long tmu_diff_8c36e700(unsigned long a, unsigned long b)
{
    return b - a;
}

unsigned long tmu0_to_us_8c36e706(unsigned long t)
{
    return (t % 100) * 128 / 100 + (t / 100) * 128;
}

unsigned long tmu0_from_us_8c36e73a(unsigned long t)
{
    return ((t & 127) * 100 >> 7) + (t >> 7) * 100;
}

int tmu1_start_mode_8c36e758(unsigned long count, TimerFn cb, void *arg, int mode);

int tmu1_start_8c36e754(unsigned long count, TimerFn cb, void *arg)
{
    return tmu1_start_mode_8c36e758(count, cb, arg, 2);
}

int tmu1_start_mode_8c36e758(unsigned long count, TimerFn cb, void *arg, int mode)
{
    if (TSTR & 2) return -1;
    TOCR = 0;
    TSTR &= 0xfd;
    TCR1 = mode;
    if (cb) {
        *(void (**)(void))((char *)_builtin_get_vbr() + 0x244) = tmu1_irq_8c36e82c;
        g_cb1_8c561058 = cb;
        g_arg1_8c56105c = arg;
        TCR1 |= 0x20;
        IPRA = (IPRA & ~0xf00) | 0xf00;
        TCR1 &= ~0x100;
    }
    TCOR1 = count;
    TCNT1 = count;
    TSTR |= 2;
    if (!cb) {
        while (!(TCR1 & 0x100))
            ;
        TSTR &= 0xfd;
        TCR1 &= ~0x100;
    }
    return 0;
}

void tmu1_stop_8c36e7d6(void)
{
    TSTR &= 0xfd;
    TCR1 &= ~0x20;
}

void tmu1_irq_8c36e82c(void)
{
    TSTR &= 0xfd;
    TCR1 &= ~0x20;
    TCR1 &= ~0x100;
    (*g_cb1_8c561058)(g_arg1_8c56105c);
}

void tmu2_irq_8c36e850(void)
{
    TSTR &= 0xfb;
    TCR2 &= ~0x20;
    TCR2 &= ~0x100;
    (*g_cb2_8c561060)(g_arg2_8c561064);
}

void tmu2_run_8c36e874(void)
{
    TOCR = 0;
    TSTR |= 4;
}

void tmu2_stop_8c36e884(void)
{
    TSTR &= 0xfb;
}

void tmu2_set_cb_8c36e88e(TimerFn cb, void *arg)
{
    char s = TSTR;
    TSTR &= 0xfb;
    if (cb) {
        *(void (**)(void))((char *)_builtin_get_vbr() + 0x248) = tmu2_irq_8c36e850;
        g_cb2_8c561060 = cb;
        g_arg2_8c561064 = arg;
        TCR2 |= 0x20;
        IPRA = (IPRA & ~0xf0) | 0xf0;
        TCR2 &= ~0x100;
    }
    TSTR = s;
    if (!cb) {
        TOCR = 0;
        TSTR |= 4;
        while (!(TCR2 & 0x100))
            ;
        TSTR &= 0xfb;
        TCR2 &= ~0x100;
    }
}

void tmu2_no_irq_8c36e8fa(void)
{
    char s = TSTR;
    TSTR &= 0xfb;
    TCR2 &= ~0x20;
    TSTR = s;
}

void tmu2_set_mode_8c36e944(unsigned short mode)
{
    char s;
    if (mode != 0 && mode != 1 && mode != 2 && mode != 3 && mode != 4) mode = 2;
    s = TSTR;
    TSTR &= 0xfb;
    TCR2 = (TCR2 & ~7) | mode;
    TSTR = s;
}

void tmu2_set_count_8c36e97e(unsigned long count)
{
    char s = TSTR;
    TSTR &= 0xfb;
    TCOR2 = 0xffffffff;
    TCNT2 = -count;
    TSTR = s;
}

long tmu2_count_8c36e998(void)
{
    return -1 - (long)TCNT2;
}

unsigned long tmu2_to_us_8c36e9a2(unsigned long t, unsigned short mode)
{
    unsigned long d;
    switch (mode) {
    case 0:
        d = 8;
        break;
    case 1:
        d = 32;
        break;
    case 3:
        d = 0x200;
        break;
    case 4:
        d = 0x800;
        break;
    default:
        d = 0x80;
        break;
    }
    return (t % 100) * d / 100 + (t / 100) * d;
}

unsigned long tmu2_from_us_8c36e9f8(unsigned long t, unsigned short mode)
{
    unsigned long d;
    switch (mode) {
    case 0:
        d = 8;
        break;
    case 1:
        d = 32;
        break;
    case 3:
        d = 0x200;
        break;
    case 4:
        d = 0x800;
        break;
    default:
        d = 0x80;
        break;
    }
    return (t % d) * 100 / d + (t / d) * 100;
}

unsigned long tmu_diff2_8c36ea6c(unsigned long a, unsigned long b)
{
    return tmu_diff_8c36e700(a, b);
}
