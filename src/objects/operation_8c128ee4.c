typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c227b0c(void);
extern void call_8c1981fc(void);
extern void query_global_entries_8c199674(void);
extern void query_global_entries_8c22f1a8(void);
extern void operation_8c22cde8(void);
extern void clear_global_render_resources(void);
extern void run_current_resource_start_8c03c3cc(void);
extern void run_current_resource_end(void);
extern void operation_8c122b50(void);
void operation_8c128ee4(void)
{
    operation_8c227b0c();
    call_8c1981fc();
    query_global_entries_8c199674();
    query_global_entries_8c22f1a8();
    operation_8c22cde8();
    clear_global_render_resources();
    run_current_resource_start_8c03c3cc();
    run_current_resource_end();
    operation_8c122b50();
}
