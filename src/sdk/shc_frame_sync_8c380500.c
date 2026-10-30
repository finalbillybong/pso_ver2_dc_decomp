typedef struct { int a, b, c, d, e; } Pad5;
extern void (*hook_8c3fc160)(void);
extern int tick_count_8c36e6f6(void);
extern int tick_elapsed_8c36e700(int, int);
extern unsigned int func_8c36e73a(int);
extern void func_8c3b8880(void);
extern void func_8c3b8340(void);
extern void func_8c36af1e(void);
extern int t0_8c575da4;
extern int t1_8c575da8;
extern int wait_8c57575c;
extern volatile int obj_8c575754;
extern int c_8c575598;
extern int c_8c57559c;
extern int c_8c5755a0;
extern int frames_8c5755c0;
extern Pad5 *obj_8c575c5c;
extern int cur_a_8c575574;
extern int cur_b_8c575578;
extern int cur_c_8c57557c;
extern int cur_d_8c575580;
extern int cur_e_8c575584;

void frame_hook_8c380500(void)
{
    register void (*fn)(void) = hook_8c3fc160;
    if (fn) {
        fn();
    }
}

void frame_sync_8c380516(void)
{
    unsigned int e = 0;
    Pad5 *p;
    t0_8c575da4 = tick_count_8c36e6f6();
    if (wait_8c57575c) {
        while (obj_8c575754 && e < 0x28870) {
            int t = tick_count_8c36e6f6();
            int d = tick_elapsed_8c36e700(t0_8c575da4, t);
            e = func_8c36e73a(d);
        }
        if (e < 0x28870) {
            frame_hook_8c380500();
        }
    }
    obj_8c575754 = 1;
    func_8c3b8880();
    c_8c575598 = 0;
    c_8c57559c = 0;
    c_8c5755a0 = 0;
    frames_8c5755c0++;
    func_8c3b8340();
    func_8c36af1e();
    t1_8c575da8 = tick_count_8c36e6f6();
    p = obj_8c575c5c;
    cur_a_8c575574 = p->a;
    cur_b_8c575578 = p->b;
    cur_c_8c57557c = p->c;
    cur_d_8c575580 = p->d;
    cur_e_8c575584 = p->e;
}

void frame_reset_8c3805cc(void)
{
    obj_8c575754 = 1;
    func_8c3b8880();
    c_8c575598 = 0;
    c_8c57559c = 0;
    c_8c5755a0 = 0;
}

void frame_begin_8c3805ea(void)
{
    Pad5 *p;
    t0_8c575da4 = tick_count_8c36e6f6();
    func_8c3b8340();
    frames_8c5755c0++;
    t1_8c575da8 = tick_count_8c36e6f6();
    p = obj_8c575c5c;
    cur_a_8c575574 = p->a;
    cur_b_8c575578 = p->b;
    cur_c_8c57557c = p->c;
    cur_d_8c575580 = p->d;
    cur_e_8c575584 = p->e;
}
