typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c311e28[];
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void call_8c013620(void *, int);
extern void operation_8c013fc8(void);
extern void operation_8c122ba0(void);
extern void call_8c141e80(void);
extern void call_8c1003d0(void *);
void operation_8c122da0(void)
{
    call_8c05f87c((void *)((void *)g_8c311e28));
    operation_8c122b00();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    call_8c013620((void *)((void *)0x8c311e20), 8);
    operation_8c013fc8();
    operation_8c122ba0();
    call_8c141e80();
    call_8c1003d0((void *)((g_8c311e28 + 0xe)));
}
