typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c301f64[];
extern void call_8c05f87c(void *);
extern void operation_8c122b00(void);
extern void call_8c1a80d4(void *);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void operation_8c122ba0(void);
extern void create_effect_node_8c080310(void);
extern void operation_8c1a81a0(void);
extern void call_8c100850(int);
void operation_8c09cfb4(void)
{
    call_8c05f87c((void *)((void *)g_8c301f64));
    operation_8c122b00();
    call_8c1a80d4((void *)((g_8c301f64 + 0xf)));
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    operation_8c122ba0();
    create_effect_node_8c080310();
    operation_8c1a81a0();
    call_8c100850(0);
}
