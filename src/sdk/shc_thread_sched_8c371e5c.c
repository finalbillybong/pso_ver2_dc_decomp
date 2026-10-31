typedef struct Thread {
    char *stack;
    unsigned int words;
    int x8;
    int state;
    int wake;
    unsigned int due;
    int ctx[64];
    void (*on_exit)(void *);
    int x11c;
    char pad[4];
} Thread;

typedef struct Sched {
    int inuse;
    int main_ctx[64];
    int tmpl_ctx[64];
    unsigned int tick;
    int nthreads;
    int nused;
    Thread threads[10];
    Thread *current;
} Sched;

extern void *memset(void *, int, unsigned long);
extern void *memcpy(void *, const void *, unsigned long);
extern int jmp_save_8c12b970(void *);
extern int jmp_load_8c12b6d4(void *, int);
extern Sched scheds_8c562e38[2];
extern Sched *sched_cur_8c564930;
extern Sched *sched_saved_8c564934;
extern int sched_count_8c564938;

void func_8c371e5c(void)
{
    Sched *z;

    memset(scheds_8c562e38, 0, 0x1af8);
    z = 0;
    sched_cur_8c564930 = z;
    sched_saved_8c564934 = z;
    sched_count_8c564938 = 0;
}

Sched *func_8c371e7c(int n)
{
    int m;
    int i;
    Sched *p;

    m = _builtin_get_imask();
    _builtin_set_imask(15);
    p = scheds_8c562e38;
    for (i = 0; i < 2; i++, p++)
        if (p->inuse == 0)
            break;
    if (i == 2)
        p = 0;
    else {
        p->nthreads = n;
        p->nused = 0;
        p->tick = 0;
        memset(p->threads, 0, 0xb68);
        memset(p->tmpl_ctx, 0, 0x100);
        jmp_save_8c12b970(p->tmpl_ctx);
        p->inuse = 1;
        sched_count_8c564938++;
    }
    _builtin_set_imask(m);
    return p;
}

int func_8c371f12(Sched *m, void (*fn)(void), char *stack, unsigned int size)
{
    int buf[38];
    int i;
    Thread *t;

    memset(buf, 0, 0x98);
    if (m->nused == m->nthreads)
        return -1;
    i = 0;
    t = m->threads;
    while (t->state != 0) {
        i++;
        t++;
    }
    size >>= 2;
    t->x8 = 0;
    t->state = 1;
    t->due = m->tick;
    t->stack = stack;
    t->words = size;
    t->on_exit = 0;
    t->wake = 0;
    t->x11c = 0;
    memcpy(t->ctx, m->tmpl_ctx, 0x100);
    jmp_save_8c12b970(buf);
    memcpy(t->ctx, buf, 0x100);
    t->ctx[0] = (int)(stack + (size - 1) * 4);
    t->ctx[2] = (int)fn;
    return i;
}

void sched_exit_thread_8c371fee(Sched *m, Thread *t)
{
    m->nused--;
    t->state = 0;
    if (t->on_exit)
        t->on_exit(m);
}

void func_8c37203c(Sched *m);

void sched_destroy_all_8c372010(void)
{
    int i;
    Sched *p = scheds_8c562e38;

    for (i = 0; i < 2; i++, p++)
        if (p->inuse)
            func_8c37203c(p);
}

void func_8c37203c(Sched *m)
{
    int i;
    Thread *t;

    for (i = 0, t = m->threads; i < m->nthreads; i++, t++)
        if (t->state)
            sched_exit_thread_8c371fee(m, t);
    memset(m, 0, 0xd7c);
}

void sched_sleep_8c372142(int n);

void func_8c37207a(void)
{
    sched_cur_8c564930->current->state = 3;
    sched_sleep_8c372142(0);
}

void sched_touch_8c372126(Sched *m, int i);

int sched_wake_8c3720b4(Sched *m, int i)
{
    Thread *t = &m->threads[i];

    if (t->state == 1) {
        sched_touch_8c372126(m, i);
        t->state = 2;
        return 0;
    }
    return -1;
}

void sched_wake_due_8c3720e2(Sched *m, int now)
{
    int i;
    Thread *t;

    for (i = 0, t = m->threads; i < m->nthreads; i++, t++)
        if (t->state) {
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto next_wake;
next_wake:
            if (t->wake <= now)
                sched_wake_8c3720b4(m, i);
        }
}

void sched_touch_8c372126(Sched *m, int i)
{
    Thread *t = &m->threads[i];

    if (t->state)
        t->due = m->tick;
}

void sched_sleep_8c372142(int n)
{
    int r;

    sched_cur_8c564930->current->due = (n >= 0) ? sched_cur_8c564930->tick + n : 0x7fffffff;
    if (jmp_save_8c12b970(sched_cur_8c564930->current->ctx) == 0)
        r = jmp_load_8c12b6d4(sched_cur_8c564930->main_ctx, 1);
}

void func_8c372180(void)
{
    sched_sleep_8c372142(1);
}

void func_8c372184(Sched *m)
{
    int fp;
    int three;
    int (*jl)(void *, int);
    int i;
    Thread *t;

    sched_saved_8c564934 = sched_cur_8c564930;
    sched_cur_8c564930 = m;
    i = 0;
    t = m->threads;
    fp = _builtin_get_fpscr();
    _builtin_set_fpscr(0x40000);
    jmp_save_8c12b970(m->main_ctx);
    jl = jmp_load_8c12b6d4;
    three = 3;
    if (0) three++;
    for (; i < m->nthreads; i++, t++) {
        m->current = t;
        switch (t->state) {
        case 0:
            break;
        case 3:
            sched_exit_thread_8c371fee(m, t);
            break;
        case 1:
            if (t->due <= m->tick)
                jl(t->ctx, 1);
            /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
            goto next_case;
next_case:
            break;
        case 2:
            t->state = three;
            t->ctx[2] = (int)func_8c37207a;
            break;
        }
    }
    m->tick++;
    sched_cur_8c564930 = sched_saved_8c564934;
    _builtin_set_fpscr(fp);
}
