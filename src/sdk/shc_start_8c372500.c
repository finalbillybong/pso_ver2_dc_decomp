/* SDK pool group 0x8c372500 (Hitachi SHC): with interrupts masked, starts the
   driver (state reset, init, callback registration) and stops / resets it. */
extern int d_8c3f7758;
extern int g_running_8c3fbe24;
extern int g_arg_8c56495c;
extern int g_arg_8c564958;
extern int g_count_8c564948;
extern int g_count_8c56494c;
extern int g_count_8c564950;
extern int g_count_8c564954;
extern void tasks_start_8c373184(int);
extern int open_8c373dfa(int, int, int);
extern void set_callback_8c36f93e(int, void (*)(void));
extern void callback_8c372658(void);
extern void tasks_reset_8c3732b0(void);
extern int stream_reset_8c3741d8(void);
extern int busy_8c37365c(int);

int start_8c372500(int a, int b, int c, void (*done)(void))
{
    int old;
    int r;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    g_arg_8c56495c = b;
    g_arg_8c564958 = c;
    g_count_8c564948 = 0;
    g_count_8c56494c = 0;
    g_count_8c564950 = 0;
    g_count_8c564954 = 0;
    tasks_start_8c373184(b);
    r = open_8c373dfa(a, b, c);
    set_callback_8c36f93e(d_8c3f7758, callback_8c372658);
    if (r == 0 && done != 0) done();
    g_running_8c3fbe24 = 1;
    _builtin_set_imask(old);
    return r;
}

void stop_8c37258c(void)
{
    int old;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    set_callback_8c36f93e(d_8c3f7758, 0);
    _builtin_set_imask(old);
}

int reset_8c3725c8(void)
{
    g_running_8c3fbe24 = 0;
    set_callback_8c36f93e(d_8c3f7758, 0);
    tasks_reset_8c3732b0();
    return stream_reset_8c3741d8();
}

int close_all_8c3725e6(void)
{
    int i;
    for (i = 0; i < 8; i++) {
        if (busy_8c37365c(i)) return -1;
    }
    return reset_8c3725c8();
}
