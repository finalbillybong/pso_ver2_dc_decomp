typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be80 S_g8c44be80;
extern S_g8c44be80 *g_8c44be80;
extern void clear_global_render_resources(void);
extern void call_8c05fbdc(void);
extern void operation_8c0e8148(void);
extern void clear_hierarchy_groups(void *);
extern void clear_group_flag_08(void *);
extern void release_hierarchy_children(void *);
extern void operation_8c0e7680(void *);
extern void call_8c01364c(void *, int);
extern void forward_reviewed_8c104e8c(void);
extern void operation_8c01c2b0(void);
extern void call_8c380516(void);
void operation_8c0e7be8(void)
{
    clear_global_render_resources();
    call_8c05fbdc();
    operation_8c0e8148();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    clear_group_flag_08((void *)((void *)0x8c44bec8));
    release_hierarchy_children(g_8c44be80);
    operation_8c0e7680((void *)((void *)0x8c46fec0));
    call_8c01364c((void *)((void *)0x8c308198), 0x118);
    forward_reviewed_8c104e8c();
    operation_8c01c2b0();
    call_8c380516();
}
