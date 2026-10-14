typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void run_current_resource_end(void);
extern void run_current_resource_start_8c03c3cc(void);
extern void operation_8c122b50(void);
void operation_8c1c5254(void)
{
    clear_global_render_resources();
    run_current_resource_end();
    run_current_resource_start_8c03c3cc();
    operation_8c122b50();
}
