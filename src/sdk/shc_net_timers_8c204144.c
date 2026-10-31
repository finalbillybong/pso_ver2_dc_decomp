/* SHC pool group 0x8c204144-0x8c204318 (tcppapi.c): software timer list
   (arm, stop, add, poll), the never-returning network task loop and small
   timer-state setters. */
typedef struct Timer {
    struct Timer *next;
    int period;
    int limit;
    unsigned int start;
    void (*cb)(int);
    int arg;
    unsigned char state;
} Timer;

extern Timer *g_timers_8c504788;
extern int g_timer_on_8c50478c;
extern int g_timer_rate_8c504790;
extern void blk_sync_open_8c1fbeb6(void);
extern void blk_sync_close_8c1fbec6(void);
extern void blk_sync_tick_8c1fbece(void);
extern unsigned int blk_sync_size_8c1fbefa(void);
extern int func_8c1fe5e8(void);
extern void func_8c1fd2d2(void);
extern void func_8c1ff398(void);
extern void func_8c1fef7c(void);
extern int done_8c32c490;
extern int g_link_8c32c538;
extern int g_link_8c32c534;
extern int g_link_8c32c53c;
extern int busy_8c32c494;

void timer_stop_8c204188(Timer *t);
unsigned int timer_now_8c2042d0(void);

void timer_arm_8c204144(Timer *t)
{
    if (t == 0) return;
    if (t->state == 1) timer_stop_8c204188(t);
    if (t->period == 0) return;
    t->limit = t->period;
    if (t->limit == 0) t->limit = 1;
    t->start = timer_now_8c2042d0();
    if (t->cb) t->state = 1;
}

void timer_stop_8c204188(Timer *t)
{
    if (t == 0) return;
    if (t->state == 1) t->state = 0;
}

void timer_add_8c2041a0(Timer *t, int period)
{
    Timer *p, *q;
    int z = 0;
    if (t == 0) return;
    if (0) z = 1;
    t->period = period;
    q = g_timers_8c504788;
    if (0) { q++; q++; }
    if (q == 0) {
        g_timers_8c504788 = t;
    } else {
        for (p = q; p->next; p = p->next) {
            if (p == t) goto done;
        }
        p->next = t;
    }
    t->next = (Timer *)z;
done:
    t->state = z;
}

void timer_poll_8c2041cc(void)
{
    Timer *p;
    unsigned int now;
    void (*lock)(void);
    void (*unlock)(void);
    void (*f2)(void);
    int (*f1)(void);
    lock = blk_sync_open_8c1fbeb6;
    lock();
    unlock = blk_sync_close_8c1fbec6;
    f2 = func_8c1fd2d2;
    f1 = func_8c1fe5e8;
    if (0) { lock(); unlock(); f1(); f2(); lock(); unlock(); f1(); f2(); }
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto LQ0;
LQ0:
    if (f1() == 0) ;
    now = timer_now_8c2042d0();
    for (p = g_timers_8c504788; p; p = p->next) {
        if (p->state == 1 && now - p->start > p->limit) {
            timer_stop_8c204188(p);
            p->state = 2;
            if (p->cb) {
                p->state = 0;
                p->cb(p->arg);
            }
        }
    }
    unlock();
    if (0) { p->state = 0; }
}

void net_task_8c20423c(void)
{
    void (*fn)(void);
    void (*op)(void);
    int *d;
    int *f;
    d = &done_8c32c490;
    (*d)++;
    goto check;
loop:
    op = blk_sync_open_8c1fbeb6;
    f = &g_link_8c32c538;
    if (*f) {
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto LQ0;
LQ0:
        op();
        fn = func_8c1ff398;
        goto run;
    }
    f = &g_link_8c32c534;
    if (*f) {
        op();
        fn = func_8c1fef7c;
run:
        fn();
        fn = blk_sync_close_8c1fbec6;
        fn();
        goto check;
    }
    f = &g_link_8c32c53c;
    if (*f) {
        fn();
        timer_poll_8c2041cc();
    } else {
        fn();
    }
check:
    if (0) { fn(); fn(); op(); }
    f = &busy_8c32c494;
    fn = blk_sync_tick_8c1fbece;
    if (*f == 0) goto loop;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto LG0;
LG0:
    (*d)--;
    for (;;) fn();
}

int timer_init_8c2042a6(void)
{
    g_timers_8c504788 = 0;
    g_timer_on_8c50478c = 1;
    g_timer_rate_8c504790 = 0;
    return 0;
}

void timer_rate_8c2042ba(void)
{
    g_timer_on_8c50478c = 0;
    g_timer_rate_8c504790 = 100;
}

void timer_off_8c2042c8(void)
{
    g_timer_on_8c50478c = 0;
}

unsigned int timer_now_8c2042d0(void)
{
    return blk_sync_size_8c1fbefa();
}
