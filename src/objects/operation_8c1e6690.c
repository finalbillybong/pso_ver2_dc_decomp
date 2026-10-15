typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
extern void call_8c0a2144(int);
extern void call_8c0a237c(void *, Frame *);
extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void describe_hierarchy_node(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern void call_8c184614(void);
extern int call_8c01e180(void);
extern void select_state3_8c01c234(void);
extern void call_8c36a880(void);
extern int call_8c36a868(void);
extern void operation_8c01c1a4(int);
extern void call_8c380516(void);
void operation_8c1e6690(void)
{
    Frame frame;
    int t1;
    int t2;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c32c0e4;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c32c0f0;
    call_8c0a2144(6);
    call_8c0a237c((void *)(&(&frame)->f0c), (Frame *)((&frame)));
    call_8c01daf0();
    call_8c01dea8();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    time_hierarchy_visit((void *)((void *)0x8c44bec8));
    describe_hierarchy_node((void *)((void *)0x8c44bec8));
    hierarchy_output_cycle((void *)((void *)0x8c44bec8));
    process_file_task_queue();
    call_8c05f9e4();
    call_8c184614();
    t1 = call_8c01e180();
    if ((char)t1 != 0) {
        select_state3_8c01c234();
    }
    call_8c36a880();
    t2 = call_8c36a868();
    switch (t2) {
    case 6:
    case 7:
    case 9:
        operation_8c01c1a4(0);
        return;
    default:
        call_8c380516();
        return;
    }
}
