extern void target_8c3e4b00(void);
extern unsigned char g_8c5bf098;
extern unsigned char g_8c5bf099;
extern unsigned char g_8c5bf09a;
extern unsigned char g_8c5bf09b;
extern unsigned char g_8c5bf09c;
extern unsigned char g_8c5bf09d;
extern unsigned char g_8c5bf09e;
extern unsigned char g_8c5bf09f;
extern unsigned char g_8c5bf0a0;
extern char check_8c3dab2a(void);
extern void report_8c3da100(unsigned char, unsigned char, unsigned char, unsigned char,
                            unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
extern void target_8c3e5150(void);
extern void target_8c3e519c(void);
extern void target_8c3e72ba(void);

int zero_8c3e9670(void)
{
    return 0;
}

void forward_8c3e9674(void)
{
    target_8c3e4b00();
}

void nothing_8c3e967a(void)
{
}

void nothing_8c3e967e(void)
{
}

void nothing_8c3e9682(void)
{
}

void test_8c3e9686(unsigned char x)
{
    if (x) {
    }
}

void nothing_8c3e968c(void)
{
}

void report_8c3e9690(unsigned char x)
{
    if (x) {
    }
    if (g_8c5bf098 != 0xfe && check_8c3dab2a() != 0)
    report_8c3da100(g_8c5bf098, g_8c5bf099, g_8c5bf09a, g_8c5bf09b,
                    g_8c5bf09c, g_8c5bf09d, g_8c5bf09e, g_8c5bf09f, g_8c5bf0a0);
}

void nothing_8c3e96e8(void)
{
}

void set_bit_8c3e96ec(char on)
{
    volatile unsigned char *p = (volatile unsigned char *)0xa0600480;
    if (on == 1)
        *p &= 0xfe;
    else
        *p |= 1;
}

void nothing_8c3e9702(void)
{
}

int one_8c3e9706(void)
{
    return 1;
}

void select_8c3e970a(char on)
{
    if (on == 1)
        target_8c3e5150();
    else
        target_8c3e519c();
}

void nothing_8c3e971c(void)
{
}

void forward_8c3e9720(void)
{
    target_8c3e72ba();
}

int zero_8c3e9726(void)
{
    return 0;
}

void nothing_8c3e972a(void)
{
}

void nothing_8c3e972e(void)
{
}

void nothing_8c3e9732(void)
{
}
