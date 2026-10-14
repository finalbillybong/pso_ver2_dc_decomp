typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void call_8c1005d0(void);
extern void run_current_resource_start_8c03c3cc(void);
extern void run_current_resource_end(void);
extern void operation_8c122b50(void);
void operation_8c1aa288(void)
{
    clear_global_render_resources();
    call_8c1005d0();
    run_current_resource_start_8c03c3cc();
    run_current_resource_end();
    operation_8c122b50();
}
