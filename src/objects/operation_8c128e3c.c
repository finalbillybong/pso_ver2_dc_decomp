typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c312388[];
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void call_8c22cd80(void);
extern void operation_8c22f180(void);
extern void check_and_load_8c199628(void);
extern void operation_8c1980b0(void);
extern void operation_8c227ac4(void);
extern void call_8c238fd4(void *);
extern void operation_8c122ba0(void);
extern int operation_8c2324e0(void);
extern void call_8c1003d0(void *);
void operation_8c128e3c(void)
{
    int t1;
    call_8c05f87c((void *)((void *)g_8c312388));
    operation_8c122b00();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    call_8c22cd80();
    operation_8c22f180();
    check_and_load_8c199628();
    operation_8c1980b0();
    operation_8c227ac4();
    call_8c238fd4((void *)((void *)0x8c41ce5c));
    operation_8c122ba0();
    t1 = operation_8c2324e0();
    if (t1 != 0) {
        call_8c1003d0((void *)((g_8c312388 + 0xc)));
    }
}
