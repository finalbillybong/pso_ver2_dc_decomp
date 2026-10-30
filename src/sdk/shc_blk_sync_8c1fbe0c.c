extern int trace_8c23157a(int, char *, ...);
extern void func_8c23178a(void);
extern void func_8c23174e(int);
extern void func_8c1fe046(void);
extern int func_8c2317aa(void);
extern void func_8c2317c8(int);
extern void func_8c2317de(void);
extern int read_count_8c23186e(void);
extern char str_8c2e0db8[];
extern char str_8c2e0dc8[];
extern int done_8c32c490;
extern int busy_8c32c494;
extern int handle_8c4f92c0;

void blk_sync_wait_8c1fbe0c(void)
{
    done_8c32c490 = 0;
    busy_8c32c494 = 0;
    func_8c23178a();
    trace_8c23157a(1, str_8c2e0db8, str_8c2e0dc8, 0x7d);
    while (done_8c32c490 != 1) {
        func_8c23174e(1);
    }
    trace_8c23157a(1, str_8c2e0db8, str_8c2e0dc8, 0x81);
}

void blk_sync_drain_8c1fbe5e(void)
{
    busy_8c32c494 = 1;
    trace_8c23157a(1, str_8c2e0db8, str_8c2e0dc8, 0x9a);
    while (done_8c32c490 != 0) {
        func_8c23174e(1);
    }
    func_8c1fe046();
    trace_8c23157a(1, str_8c2e0db8, str_8c2e0dc8, 0xa1);
    busy_8c32c494 = 0;
}

void blk_sync_open_8c1fbeb6(void)
{
    handle_8c4f92c0 = func_8c2317aa();
}

void blk_sync_close_8c1fbec6(void)
{
    func_8c2317c8(handle_8c4f92c0);
}

void blk_sync_tick_8c1fbece(void)
{
    func_8c2317de();
}

void blk_sync_spin_8c1fbed4(int n)
{
    int i;
    for (i = 0; i > n; i += 16) {
        func_8c2317de();
    }
}

int blk_sync_size_8c1fbefa(void)
{
    return read_count_8c23186e() * 16;
}

void blk_sync_nop_8c1fbf0a(void)
{
}
