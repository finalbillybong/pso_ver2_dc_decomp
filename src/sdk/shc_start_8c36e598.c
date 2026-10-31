/* SDK pool group 0x8c36e598 (Hitachi SHC): system start-up helpers: resets the
   interrupt priorities and applies the register table, initialises the cache
   from the uncached P2 mirror, and chains the subsystem initialisers. */
typedef struct RegInit {
    int *reg;
    int value;
} RegInit;

extern int g_arg_8c3f7248;
extern int g_arg_8c3fbe00;
extern int d_8c3f7244;
extern RegInit g_reg_table_8c3f724c[];
extern void init_8c36c694(int, int);
extern void init_8c36d1fc(void);
extern void init_8c36b200(int);
extern void tmu0_start_8c36e6d0(void);
extern void init_8c36bb74(void);
extern void init_8c36e17c(int);
extern void init_8c37a014(void);
extern void stop_8c37a128(void);
extern void stop_8c36d2aa(void);
static void init_registers_8c36e642(void);
void init_cache_8c36e618();

void start_8c36e598(void)
{
    init_registers_8c36e642();
    init_8c36c694(g_arg_8c3f7248, g_arg_8c3fbe00);
    init_8c36d1fc();
    ((void (*)(int))(0xa0000000 | (int)init_8c36b200))(d_8c3f7244);
    tmu0_start_8c36e6d0();
}

void start2_8c36e5c2(void)
{
    init_8c36bb74();
    init_8c36e17c(0);
    init_8c37a014();
}

void restart_8c36e5d6(void)
{
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    stop_8c37a128();
    stop_8c36d2aa();
    init_cache_8c36e618();
    _builtin_set_imask(old);
}

static void cache_body_8c36e628(void);

/* K&R parameter: homed in the frame while the P2 alias is jumped to */
void init_cache_8c36e618(f)
void (*f)();
{
    void (*g)();
    f = (void (*)())cache_body_8c36e628;
    f = (void (*)())(0xa0000000 | (int)f);
    g = f;
    g();
}

static void cache_body_8c36e628(void)
{
    int a;
    *(volatile int *)0xff00001c = 0;
    for (a = (int)0xf4000000; a < (int)0xf4004000; a += 0x20)
        *(volatile int *)a = 0;
    *(volatile int *)0xff00001c = 0x800;
    *(volatile int *)0xff00001c = 0;
}

static void init_registers_8c36e642(void)
{
    RegInit *e;
    *(volatile short *)0xffd00000 = 0;
    *(volatile short *)0xffd00004 = 0;
    *(volatile short *)0xffd00008 = 0;
    *(volatile short *)0xffd0000c = 0;
    *(volatile short *)0xffe80020 = 0xc0;
    e = g_reg_table_8c3f724c;
    for (;;) {
        if (e->reg == 0) break;
        *e->reg = e->value;
        e++;
    }
}
