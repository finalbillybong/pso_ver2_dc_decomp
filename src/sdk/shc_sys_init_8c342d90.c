/* SDK pool group 0x8c342d90 (Hitachi SHC): library open/close with a nesting
   counter: initialises and shuts down the subsystems in order. */
typedef struct InitArgs {
    int a;
    int b;
    int c;
    int d;
} InitArgs;

typedef struct Mode {
    int unknown0;
    int mode;
} Mode;

extern int debug_print_8c35570c(char *, ...);
extern int g_open_count_8c3fabf0;
extern void func_8c355afa(void);
extern void snd_init_8c34ddc0(void);
extern void counter_inc_8c34e1dc(void);
extern void func_8c355d82(void);
extern void func_8c358dea(void);
extern void func_8c358ad6(void);
extern void func_8c359256(void);
extern int ret0_8c34dc8c(void);
extern void mic_set_8c341470(int);
extern char str_8c3f3630[];
extern int func_8c34092c(void);
extern char g_state_8c51b500[];
extern void *memset(void *, int, unsigned int);
extern void init_8c36b200(int);
extern void func_8c3559f2(void (*)(void), int);
extern void cb_8c341c80(void);
extern void func_8c3409a0(int, int, int, int);
extern volatile int g_8c51b6cc;
extern void func_8c35575a(void (*)(void), int);
extern void cb_8c3420b2(void);
extern void func_8c35582c(void (*)(void), int);
extern void cb_8c342104(void);
extern void func_8c3558ee(void (*)(void), int);
extern void cb_8c342164(void);
extern int d_8c3faa80;
extern int func_8c34283e(int, int, int);
extern int g_8c3faa8c;
extern int d_8c3faa90;
extern void channels_open_8c3524bc(void);
extern void set_print_hook_8c3523fc(void (*)(int, char *), int);
extern void func_8c340944(int);
extern Mode g_mode_8c51b504;
extern void func_8c341058(void);
extern void channels_close_8c3524fa(void);
extern void func_8c360bac(void);
extern void func_8c355a3e(void (*)(void));
extern void func_8c35593a(void (*)(void));
extern void func_8c355878(void (*)(void));
extern void func_8c3557a6(void (*)(void));
extern void release_8c34debc(void);
extern void func_8c355da4(void);
extern void func_8c34dc94(void);
extern void shutdown_i_8c359278(void);
extern void shutdown_g_8c358af8(void);
extern void shutdown_h_8c358e0c(void);
extern void func_8c355c14(void);

void print_hook_8c342d90(int a, char *s)
{
    debug_print_8c35570c(s);
}

void sys_init_8c342da6(InitArgs *p)
{
    int saved;
    int r;
    p->d -= 2;
    if (p->d < 0) p->d = 0;
    if (g_open_count_8c3fabf0 == 0) {
        func_8c355afa();
        snd_init_8c34ddc0();
        counter_inc_8c34e1dc();
        func_8c355d82();
        func_8c358dea();
        func_8c358ad6();
        func_8c359256();
        r = ret0_8c34dc8c();
        if (r) {
            mic_set_8c341470(-101);
            debug_print_8c35570c(str_8c3f3630);
        }
        saved = func_8c34092c();
        memset(g_state_8c51b500, 0, 0x1cc);
        ((void (*)(int))((int)init_8c36b200 | 0xa0000000))(0x185);
        func_8c3559f2(cb_8c341c80, 0);
        if (p) func_8c3409a0(p->a, p->b, p->c, p->d);
        g_8c51b6cc = 0;
        func_8c35575a(cb_8c3420b2, 0);
        func_8c35582c(cb_8c342104, 0);
        func_8c3558ee(cb_8c342164, 0);
        r = func_8c34283e(0, 1, d_8c3faa80);
        if (r) {
            for (;;)
                ;
        }
        g_8c3faa8c = 1;
        d_8c3faa90 = 1;
        channels_open_8c3524bc();
        set_print_hook_8c3523fc(print_hook_8c342d90, 0);
        func_8c340944(saved);
    }
    g_open_count_8c3fabf0++;
}

void sys_reinit_8c342f24(InitArgs *p)
{
    if (g_open_count_8c3fabf0) {
        g_open_count_8c3fabf0 = 0;
        sys_init_8c342da6(p);
    }
}

void sys_exit_8c342f36(void)
{
    int saved;
    Mode *m;
    g_open_count_8c3fabf0--;
    if (g_open_count_8c3fabf0 == 0) {
        saved = func_8c34092c();
        d_8c3faa90 = 0;
        m = &g_mode_8c51b504;
        if (m->mode == 1) func_8c341058();
        channels_close_8c3524fa();
        func_8c360bac();
        func_8c355a3e(cb_8c341c80);
        func_8c35593a(cb_8c342164);
        func_8c355878(cb_8c342104);
        func_8c3557a6(cb_8c3420b2);
        release_8c34debc();
        func_8c355da4();
        func_8c34dc94();
        shutdown_i_8c359278();
        shutdown_g_8c358af8();
        shutdown_h_8c358e0c();
        ((void (*)(int))((int)init_8c36b200 | 0xa0000000))(0x105);
        func_8c355c14();
        func_8c340944(saved);
    }
}
