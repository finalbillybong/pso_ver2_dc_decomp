typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void call_8c122ba0(void);
void operation_8c1aa23c(void)
{
    call_8c05f87c((void *)((void *)0x8c324e30));
    operation_8c122b00();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    call_8c122ba0();
}
