typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void operation_8c122ba0(void);
extern int allocate_block(void *, unsigned int);
extern void operation_8c206c40(void *);
void operation_8c14f81c(void)
{
    int t1;
    call_8c05f87c((void *)((void *)0x8c315818));
    operation_8c122b00();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    operation_8c122ba0();
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
    if (t1 != 0) {
        operation_8c206c40((void *)t1);
    }
}
