typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void clear_hierarchy_groups(void *);
extern void operation_8c0347f0(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_09_exit_8c0ed80c(void)
{
    clear_global_render_resources();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    operation_8c0347f0();
    wait_vsync_and_flip_8c380516();
}
