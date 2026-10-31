/* SDK pool group 0x8c373184-0x8c373608 (Hitachi SHC): starts one worker
   task per enabled port; each worker loop (never returns) dispatches queued
   storage operations, stores the result and invokes the completion callback. */
typedef struct Req {
    int f0;
    int f4;
    int op;
    int fc;
    int saved;
    int arg;
    int a18;
    int a1c;
    int a20;
    int a24;
    int a28;
    char x2c[0x10];
    char x3c[0x10];
    char x4c[0x20];
    char x6c[0x8];
    void (*done)(int, int, int, int);
    void (*notify)(int, int, int, int);
    int done_arg;
} Req;

extern Req g_reqs_8c564980[];
extern int g_results_8c564960[];
extern void wrap_8c3737a2(void);
extern int wrap_open_8c373764(void);
extern void wrap_call3_8c37377a(void (*)(void), char *, int);
extern int wrap_8c373792(void);
extern void *memset(void *, int, unsigned int);
extern char g_stack0_8c564d80[];
extern char g_stack1_8c565180[];
extern char g_stack2_8c565580[];
extern char g_stack3_8c565980[];
extern char g_stack4_8c565d80[];
extern char g_stack5_8c566180[];
extern char g_stack6_8c566580[];
extern char g_stack7_8c566980[];
extern void call_8c3744ee(int);
extern int op_8c37437e();
extern int op_8c374284();
extern int op_8c374604();
extern int op_8c375182();
extern int op_8c3755ce();
extern int op_8c3752ea();
extern int op_8c375d04();
extern int op_8c375f02();
extern int op_8c376228();
extern int op_8c37680c();
extern int op_8c377568();
extern int op_8c3775f2();
extern int op_8c37765e();
extern int op_8c377700();
extern int op_8c377900();
extern int op_8c377b96();
extern int op_8c375de4();
extern int op_8c377cba();

static void task_main_8c37333a(int id);
void task0_8c3732c8(void);
void task1_8c3732cc(void);
void task2_8c3732d0(void);
void task3_8c3732d4(void);
void task4_8c3732d8(void);
void task5_8c3732dc(void);
void task6_8c3732e0(void);
void task7_8c373338(void);

int tasks_start_8c373184(int mask)
{
    g_results_8c564960[0] = 0;
    g_results_8c564960[1] = 0;
    g_results_8c564960[2] = 0;
    g_results_8c564960[3] = 0;
    g_results_8c564960[4] = 0;
    g_results_8c564960[5] = 0;
    g_results_8c564960[6] = 0;
    g_results_8c564960[7] = 0;
    memset(g_reqs_8c564980, 0, 0x400);
    memset(g_stack0_8c564d80, '0', 0x400);
    memset(g_stack1_8c565180, '1', 0x400);
    memset(g_stack2_8c565580, '2', 0x400);
    memset(g_stack3_8c565980, '3', 0x400);
    memset(g_stack4_8c565d80, '4', 0x400);
    memset(g_stack5_8c566180, '5', 0x400);
    memset(g_stack6_8c566580, '6', 0x400);
    memset(g_stack7_8c566980, '7', 0x400);
    if (wrap_open_8c373764() == 0) return -1;
    if (mask & 0x01) wrap_call3_8c37377a(task0_8c3732c8, g_stack0_8c564d80, 0x400);
    if (mask & 0x02) wrap_call3_8c37377a(task1_8c3732cc, g_stack1_8c565180, 0x400);
    if (mask & 0x04) wrap_call3_8c37377a(task2_8c3732d0, g_stack2_8c565580, 0x400);
    if (mask & 0x08) wrap_call3_8c37377a(task3_8c3732d4, g_stack3_8c565980, 0x400);
    if (mask & 0x10) wrap_call3_8c37377a(task4_8c3732d8, g_stack4_8c565d80, 0x400);
    if (mask & 0x20) wrap_call3_8c37377a(task5_8c3732dc, g_stack5_8c566180, 0x400);
    if (mask & 0x40) wrap_call3_8c37377a(task6_8c3732e0, g_stack6_8c566580, 0x400);
    if (mask & 0x80) wrap_call3_8c37377a(task7_8c373338, g_stack7_8c566980, 0x400);
    return 0;
}

int tasks_reset_8c3732b0(void)
{
    memset(g_reqs_8c564980, 0, 0x400);
    return 0;
}

int tasks_stop_8c3732c2(void)
{
    return wrap_8c373792();
}

void task0_8c3732c8(void)
{
    task_main_8c37333a(0);
}

void task1_8c3732cc(void)
{
    task_main_8c37333a(1);
}

void task2_8c3732d0(void)
{
    task_main_8c37333a(2);
}

void task3_8c3732d4(void)
{
    task_main_8c37333a(3);
}

void task4_8c3732d8(void)
{
    task_main_8c37333a(4);
}

void task5_8c3732dc(void)
{
    task_main_8c37333a(5);
}

void task6_8c3732e0(void)
{
    task_main_8c37333a(6);
}

void task7_8c373338(void)
{
    task_main_8c37333a(7);
}

static void task_main_8c37333a(int id)
{
    int err = -255;
    Req *req = &g_reqs_8c564980[id];
    int (*fn)() = op_8c37437e;
    int r;
    int arg;
    int op;
    for (;;) {
        switch (req->op) {
        case 18:
            req->saved = req->arg;
            r = fn(req->arg);
            break;
        case 1:
            req->saved = req->arg;
            r = op_8c374284(req->arg);
            break;
        case 3:
            req->saved = req->arg;
            r = op_8c374604(req->arg, req->x4c, req->a1c, req->x6c, req->a24);
            break;
        case 4:
            req->saved = ((Req *)req->arg)->a28;
            r = op_8c375182(req->arg, req->a18);
            break;
        case 5:
            req->saved = ((Req *)req->arg)->a28;
            r = op_8c3755ce(req->arg, req->a18, req->a1c);
            break;
        case 6:
            req->saved = ((Req *)req->arg)->a28;
            r = op_8c3752ea(req->arg, req->a18, req->a1c);
            break;
        case 7:
            req->saved = req->arg;
            r = op_8c375d04(req->arg, req->x2c);
            break;
        case 8:
            req->saved = req->arg;
            r = op_8c375f02(req->arg, req->x2c, req->x3c);
            break;
        case 10:
            req->saved = req->arg;
            r = op_8c376228(req->arg, req->x2c, req->a1c, req->a20);
            break;
        case 9:
            req->saved = req->arg;
            r = op_8c37680c(req->arg, req->a18);
            break;
        case 15:
            req->saved = req->arg;
            r = op_8c377568(req->arg, req->a18);
            break;
        case 16:
            req->saved = req->arg;
            r = op_8c3775f2(req->arg, req->a18);
            break;
        case 11:
            req->saved = req->arg;
            r = op_8c37765e(req->arg, req->x2c, req->a1c, req->a20);
            break;
        case 12:
            req->saved = req->arg;
            r = op_8c377700(req->arg, req->x2c, req->a1c, req->a20, &req->x6c[0], req->a28);
            break;
        case 13:
            req->saved = req->arg;
            r = op_8c377900(req->arg, req->x2c, req->a1c, req->a20, &req->x6c[0], req->a28);
            break;
        case 14:
            req->saved = req->arg;
            r = op_8c377b96(req->arg, req->x2c, req->a1c, req->a20, req->a24);
            break;
        case 17:
            req->saved = req->arg;
            r = op_8c375de4(req->arg, req->a18, req->a1c);
            break;
        case 20:
            req->saved = req->arg;
            r = op_8c377cba(req->arg, req->x2c, req->a1c, req->a20, req->a24);
            break;
        case 0:
        default:
            wrap_8c3737a2();
            continue;
        }
        if (r == err) call_8c3744ee(req->saved);
        g_results_8c564960[id] = r;
        arg = req->done_arg;
        op = req->op;
        req->f0 = 0;
        req->f4 = 0;
        req->op = 0;
        req->fc = 0;
        req->saved = 0;
        req->arg = 0;
        req->a18 = 0;
        req->a1c = 0;
        req->a20 = 0;
        req->a24 = 0;
        req->a28 = 0;
        if (req->done != 0) {
            req->done(id, op, r, arg);
            continue;
        }
    }
}

void task_done_8c373570(int id, int a, int b)
{
    Req *req = &g_reqs_8c564980[id];
    if (req->done) req->done(id, a, b, req->done_arg);
}

void task_notify_8c373596(int id, int a, int b, int c)
{
    Req *req = &g_reqs_8c564980[id];
    if (req->notify) req->notify(id, a, b, c);
}
