typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba0 S_g8c4e2ba0;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
extern S_g8c4e2ba0 *g_8c4e2ba0;
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern void restore_child_blend(void);
extern void backup_render_state(void);
extern void call_8c391c94(void);
extern void visit_hierarchy_10(void *);
extern void call_8c391cc4(void);
extern void restore_render_state(void);
void operation_8c1beda4(void)
{
    restore_child_blend();
    backup_render_state();
    call_8c391c94();
    visit_hierarchy_10(g_8c4e2ba0);
    visit_hierarchy_10(g_8c4e2ba4);
    call_8c391cc4();
    restore_render_state();
}
