typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cb00 S_L8c41cb00;
struct S_L8c41cb00 {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
};
extern int g_8c4db9c0;
extern S_L8c41cb00 g_8c41cb00;
extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void describe_hierarchy_node(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern int call_8c01e180(void);
extern int operation_8c104da8(void);
extern int call_8c380516(void);
int operation_8c17ba24(void)
{
    int v1;
    int t1;
    int t2;
    int t3;
    v1 = (int)/* ? r0 */ 0;
    for (;;) {
        call_8c01daf0();
        call_8c01dea8();
        time_hierarchy_update((void *)((void *)0x8c44bec8));
        if (g_8c4db9c0 == 1) {
            v1 = (int)0;
            (&g_8c41cb00)->f00 = 1;
            (&g_8c41cb00)->f08 = 1;
            (&g_8c41cb00)->f0c = (int)(v1);
            break;
        }
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        describe_hierarchy_node((void *)((void *)0x8c44bec8));
        hierarchy_output_cycle((void *)((void *)0x8c44bec8));
        process_file_task_queue();
        call_8c05f9e4();
        t1 = call_8c01e180();
        if ((char)t1 != 0) {
            v1 = (int)0;
            (&g_8c41cb00)->f00 = (int)(v1);
            break;
        }
        t2 = operation_8c104da8();
        if (t2 != 0) {
            v1 = (int)0;
            (&g_8c41cb00)->f00 = (int)(v1);
            break;
        }
        t3 = call_8c380516();
        v1 = (int)t3;
    }
    return (int)(v1);
}
