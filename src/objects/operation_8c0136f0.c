typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void wait_vsync_and_flip_8c380516(void);
extern void clear_hierarchy_groups(void *);
extern void forward_reviewed_8c104e8c(void);
void game_mode_03_exit_8c0136f0(void)
{
    clear_global_render_resources();
    wait_vsync_and_flip_8c380516();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    forward_reviewed_8c104e8c();
    wait_vsync_and_flip_8c380516();
}
