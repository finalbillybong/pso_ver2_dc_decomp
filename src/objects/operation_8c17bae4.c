typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void forward_reviewed_8c104e8c(void);
extern void call_8c380516(void);
void operation_8c17bae4(void)
{
    clear_global_render_resources();
    clear_hierarchy_groups((void *)0x8c44bec8);
    call_8c01364c((void *)0x8c319820, 0x28);
    forward_reviewed_8c104e8c();
    call_8c380516();
}
