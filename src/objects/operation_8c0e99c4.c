typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void describe_hierarchy_node(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern void call_8c184614(void);
extern void select_state2_8c01c1b4(void);
extern int call_8c01e180(void);
extern void select_state3_8c01c234(void);
extern int operation_8c104da8(void);
extern void call_8c01c1a4(int);
extern void call_8c380516(void);
void operation_8c0e99c4(void)
{
    int t1;
    int t2;
    call_8c01daf0();
    call_8c01dea8();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    time_hierarchy_visit((void *)((void *)0x8c44bec8));
    describe_hierarchy_node((void *)((void *)0x8c44bec8));
    hierarchy_output_cycle((void *)((void *)0x8c44bec8));
    process_file_task_queue();
    call_8c05f9e4();
    call_8c184614();
    if (*(char *)0x8c470340 == 1) {
        select_state2_8c01c1b4();
    }
    t1 = call_8c01e180();
    if ((char)t1 != 0) {
        select_state3_8c01c234();
    }
    t2 = operation_8c104da8();
    if (t2 != 0) {
        call_8c01c1a4(0);
    }
    call_8c380516();
}
