typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c3082b4[];
extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void call_8c011ef0(void *, ...);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void describe_hierarchy_node(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern void operation_8c17e194(void);
extern void call_8c042488(void);
extern int call_8c01e180(void);
extern void operation_8c0e8148(void);
extern void select_state3_8c01c234(void);
extern void clear_global_8c01c1c4(void);
extern void clear_global_8c01c210(void);
extern int operation_8c104da8(void);
extern void call_8c01c1a4(int);
extern int call_8c01c1dc(void);
extern void call_8c0e7c80(void);
extern int call_8c01c228(void);
extern void call_8c0e7fb4(void);
extern void call_8c380516(void);
void operation_8c0e7a90(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    call_8c01daf0();
    call_8c01dea8();
    call_8c011ef0((void *)((g_8c3082b4 + 0xd)), (int)(*(int *)0x8c46ed18 * 0xc));
    call_8c011ef0((void *)((g_8c3082b4 + 0x1b)), (int)(*(int *)0x8c46ed14 << 2));
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    time_hierarchy_visit((void *)((void *)0x8c44bec8));
    describe_hierarchy_node((void *)((void *)0x8c44bec8));
    hierarchy_output_cycle((void *)((void *)0x8c44bec8));
    process_file_task_queue();
    call_8c05f9e4();
    operation_8c17e194();
    call_8c042488();
    t1 = call_8c01e180();
    if ((char)t1 != 0) {
        operation_8c0e8148();
        select_state3_8c01c234();
        clear_global_8c01c1c4();
        clear_global_8c01c210();
        *(int *)0x8c4dc800 = 0;
    }
    t2 = operation_8c104da8();
    if (t2 != 0) {
        call_8c01c1a4(0);
    }
    t3 = call_8c01c1dc();
    if (t3 != 0) {
        call_8c0e7c80();
        clear_global_8c01c1c4();
    }
    t4 = call_8c01c228();
    if (t4 != 0) {
        call_8c0e7fb4();
        clear_global_8c01c210();
    }
    call_8c380516();
}
