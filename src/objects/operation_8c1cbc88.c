typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2e44 S_g8c4e2e44;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c1cbf6c(void);
extern void call_8c01daf0(void);
extern void call_8c01dea8(void);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void describe_hierarchy_node(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern void operation_8c17e194(void);
extern void call_8c184614(void);
extern int call_8c01e180(void);
extern void select_state3_8c01c234(void);
extern void call_8c36a880(void);
extern int call_8c36a868(void);
extern void call_8c01c1a4(int);
extern int operation_8c104da8(void);
extern void call_8c380516(void);
void operation_8c1cbc88(void)
{
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    if (*(int *)0x8c4e2e40 != 0) {
        switch (*(int *)0x8c4e2e40) {
        case 1:
            if (*(int *)0x8c4e2e44 != 0) {
                v1 = (S_vv1 *)*(S_g8c4e2e44 **)0x8c4e2e44;
                v1->f04 |= 1;
                *(int *)0x8c4e2e44 = 0;
            }
            *(int *)0x8c4e2e40 = 2;
            break;
        case 2:
            *(int *)0x8c4e2e40 = 0;
            operation_8c1cbf6c();
        }
    }
    call_8c01daf0();
    call_8c01dea8();
    time_hierarchy_update((void *)((void *)0x8c44bec8));
    time_hierarchy_visit((void *)((void *)0x8c44bec8));
    describe_hierarchy_node((void *)((void *)0x8c44bec8));
    hierarchy_output_cycle((void *)((void *)0x8c44bec8));
    process_file_task_queue();
    call_8c05f9e4();
    operation_8c17e194();
    call_8c184614();
    if (*(int *)0x8c4dbaec == 0 && *(int *)0x8c329150 != 0xb) {
        t1 = call_8c01e180();
        if ((char)t1 != 0) {
            select_state3_8c01c234();
        }
        if (*(int *)0x8c329150 != 1 && *(int *)0x8c329150 != 0x15) {
            goto L_8c1cbd5a;
        }
        call_8c36a880();
        t2 = call_8c36a868();
        switch (t2) {
        case 6:
        case 7:
        case 9:
            call_8c01c1a4(0);
            goto L_8c1cbd6a;
L_8c1cbd5a:;
            t3 = operation_8c104da8();
            if (t3 != 0) {
                call_8c01c1a4(0);
            }
        }
    }
L_8c1cbd6a:;
    call_8c380516();
}
