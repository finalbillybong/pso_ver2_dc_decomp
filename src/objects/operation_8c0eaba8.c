typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void clear_hierarchy_groups(void *);
extern void release_hierarchy_children(void *);
extern void call_8c01364c(void *, int);
extern void call_8c380516(void);
void operation_8c0eaba8(void)
{
    clear_global_render_resources();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    release_hierarchy_children((void *)((void *)0x8c470374));
    call_8c01364c((void *)((void *)0x8c3088d4), 0x28);
    call_8c380516();
}
