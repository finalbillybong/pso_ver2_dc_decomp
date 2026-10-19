typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2e44 S_g8c4e2e44;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4e2e44 *g_8c4e2e44;
extern void clear_global_render_resources(void);
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void forward_reviewed_8c104e8c(void);
extern void call_8c380516(void);
void operation_8c1cbf08(void)
{
    S_vv1 *v1;
    clear_global_render_resources();
    if (g_8c4e2e44 != 0) {
        v1 = (S_vv1 *)g_8c4e2e44;
        v1->f04 |= 1;
        g_8c4e2e44 = (S_g8c4e2e44 *)0;
    }
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c01364c((void *)((void *)0x8c32915c), 0x118);
    forward_reviewed_8c104e8c();
    call_8c380516();
}
