typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int current_effect_mode(void);
extern void emit_lookup_602b0(int);
extern void operation_8c122b00(void);
extern void operation_8c1a86a8(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void operation_8c122ba0(void);
extern void operation_8c1a81a0(void);
extern void call_8c100850(int);
void operation_8c1c509c(void)
{
    int t1;
    t1 = current_effect_mode();
    emit_lookup_602b0(t1);
    operation_8c122b00();
    operation_8c1a86a8();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    operation_8c122ba0();
    operation_8c1a81a0();
    call_8c100850(2);
}
