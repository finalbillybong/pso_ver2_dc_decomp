extern int d_8c3fb410;
extern int d_8c3fb414;
extern int g_references_8c3fb40c;
extern int g_pending_8c3fb408;
extern char g_snd_work_8c3faee8[];
extern void call_8c34c3ae();
extern void func_8c350980(void);
extern void func_8c34bbf4(void);
extern void lock_8c34bbfc(void);
extern void func_8c359256(void);
extern void func_8c358dea(void);
extern void func_8c358ad6(void);
extern void func_8c34c370(void);
extern void func_8c349590(void);
extern void slots_init_8c34e1f4(void);
extern void table_init_8c34c824(void);
extern void snd_thunk_8c34e0b8(void);
extern void func_8c3543d2(void (*fn)(int, int), int arg);
extern void *memset(void *p, int c, unsigned int n);
extern void channels_open_8c3524bc(void);
extern int create_handler_8c36bbc4(int prio, void (*fn)(void), int stack, int arg);
extern void unlock_8c34bc24(void);

void snd_set_mode_8c34dda4(int mode)
{
    d_8c3fb410 = mode;
}

void snd_error_cb_8c34ddaa(int obj, int code)
{
    call_8c34c3ae(code);
}

void snd_tick_8c34ddb4(void)
{
    d_8c3fb414++;
    func_8c350980();
}

void snd_init_8c34ddc0(void)
{
    if (g_references_8c3fb40c == 0) {
        func_8c34bbf4();
        lock_8c34bbfc();
        func_8c359256();
        func_8c358dea();
        func_8c358ad6();
        func_8c34c370();
        func_8c349590();
        slots_init_8c34e1f4();
        table_init_8c34c824();
        snd_thunk_8c34e0b8();
        func_8c3543d2(snd_error_cb_8c34ddaa, 0);
        memset(g_snd_work_8c3faee8, 0, 0x520);
        channels_open_8c3524bc();
        if (d_8c3fb410 == 1)
            g_pending_8c3fb408 = create_handler_8c36bbc4(0x900, snd_tick_8c34ddb4, 0x70, 0);
        d_8c3fb414 = 0;
        unlock_8c34bc24();
    }
    g_references_8c3fb40c++;
}

void snd_reinit_8c34de4e(void)
{
    g_references_8c3fb40c = 0;
    snd_init_8c34ddc0();
}
