/* SHC pool group 0x8c203e70-0x8c204010 (tcppapi.c): stack init/reset with
   debug trace lines, name copy, and small wrappers. */
extern int trace_8c23157a(int, char *, ...);
extern char *_builtin_strcpy(char *, const char *);
#define strcpy _builtin_strcpy
extern int d_8c2e1470;
extern char str_8c2e1474[];
extern char str_8c2e1484[];
extern char g_name_init_8c2e1498[];
extern char g_name_8c502a84[];
extern int g_link_state_8c32c530;
extern int g_link_8c32c534;
extern int g_link_8c32c538;
extern int g_link_8c32c53c;
extern int g_link_8c32c540;
extern int g_configured_8c32c544;
extern int g_sock_8c502d44;
extern int g_sock_8c502d48;
extern int g_sock_8c502d4c;
extern int g_sock_8c502d50;
extern int g_sock_8c502d54;
extern int g_sock_8c502d58;
extern int g_cfg_8c504760;
extern int g_cfg_8c504764;
extern int g_cfg_8c504768;
extern int g_cfg_8c50476c;
extern void func_8c1fe5bc(void);
extern int check_ready_trace_8c1fc288(int, int *);
extern void blk_sync_wait_8c1fbe0c(void);
extern int blk_sync_drain_8c1fbe5e(void);
extern int func_8c1fed74(int, int, int);

int tcp_init_8c203e70(int a, int b, int c, int d)
{
    int v[1];
    v[0] = d_8c2e1470;
    trace_8c23157a(1, str_8c2e1474, str_8c2e1484, 119);
    strcpy(g_name_8c502a84, g_name_init_8c2e1498);
    g_link_state_8c32c530 = 0;
    g_link_8c32c534 = 0;
    g_link_8c32c538 = 0;
    g_link_8c32c53c = 0;
    g_link_8c32c540 = 0;
    g_configured_8c32c544 = 0;
    func_8c1fe5bc();
    trace_8c23157a(1, str_8c2e1474, str_8c2e1484, 132);
    check_ready_trace_8c1fc288(1, v);
    trace_8c23157a(1, str_8c2e1474, str_8c2e1484, 135);
    blk_sync_wait_8c1fbe0c();
    g_sock_8c502d44 = 0;
    g_sock_8c502d48 = 0;
    g_sock_8c502d4c = -1;
    g_sock_8c502d50 = -1;
    g_sock_8c502d54 = -1;
    g_sock_8c502d58 = -1;
    trace_8c23157a(1, str_8c2e1474, str_8c2e1484, 146);
    g_cfg_8c504760 = a;
    g_cfg_8c504764 = b;
    g_cfg_8c504768 = c;
    g_cfg_8c50476c = d;
    return 0;
}

int tcp_init_default_8c203f3a(void)
{
    return tcp_init_8c203e70(0, 0, 0, 0);
}

int tcp_drain_8c203f44(void)
{
    return blk_sync_drain_8c1fbe5e();
}

void tcp_set_name_8c203f4a(char *s)
{
    strcpy(g_name_8c502a84, s);
}

void tcp_open_8c203f5a(int x)
{
    int r;
    trace_8c23157a(1, str_8c2e1474, str_8c2e1484, 184);
    r = func_8c1fed74(0, x, 0);
}

void tcp_close_8c203f84(void)
{
    int r;
    r = func_8c1fed74(1, 0, 0);
}
