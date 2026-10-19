typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void operation_8c0604b4(void);
extern void call_8c01364c(void *, int);
extern void run_current_resource_start_8c03c3cc(void);
extern void run_current_resource_end(void);
extern void operation_8c122b50(void);
void operation_8c122a9c(void)
{
    clear_global_render_resources();
    operation_8c0604b4();
    call_8c01364c((void *)((void *)0x8c311d40), 0x40);
    run_current_resource_start_8c03c3cc();
    run_current_resource_end();
    operation_8c122b50();
}
