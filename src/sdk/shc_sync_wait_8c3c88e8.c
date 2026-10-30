extern int trace_8c23157a(int, char *, ...);
extern void func_8c23179a(void);
extern void func_8c23174e(int);
extern int func_8c2317aa(void);
extern void func_8c2317c8(int);
extern void func_8c231852(void);
extern int read_count_8c23186e(void);
extern char str_8c3f8600[];
extern char str_8c3f8610[];
extern volatile int done_8c400240;
extern volatile int busy_8c400244;
extern int handle_8c5a3034;

void sync_idle_8c3c895c(void);

void sync_wait_8c3c88e8(void)
{
    trace_8c23157a(1, str_8c3f8600, str_8c3f8610, 0x1ec);
    func_8c23179a();
    trace_8c23157a(1, str_8c3f8600, str_8c3f8610, 0x1ef);
    while (done_8c400240 != 1) {
        sync_idle_8c3c895c();
    }
    trace_8c23157a(1, str_8c3f8600, str_8c3f8610, 0x1f3);
}

void sync_drain_8c3c893c(void)
{
    busy_8c400244 = 1;
    while (done_8c400240 != 0) {
        sync_idle_8c3c895c();
    }
    busy_8c400244 = 0;
}

void sync_idle_8c3c895c(void)
{
    func_8c23174e(1);
}

void sync_open_8c3c8962(void)
{
    handle_8c5a3034 = func_8c2317aa();
}

void sync_close_8c3c8972(void)
{
    func_8c2317c8(handle_8c5a3034);
}

void sync_spin_8c3c897a(int n)
{
    int i;
    for (i = 0; i < n; i += 16) {
        func_8c231852();
    }
}

void sync_nop_8c3c89a0(void)
{
}

void sync_tick_8c3c89a4(void)
{
    func_8c231852();
}

int sync_size_8c3c89aa(void)
{
    return read_count_8c23186e() * 16;
}
