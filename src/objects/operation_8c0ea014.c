typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_global_render_resources(void);
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void wait_vsync_and_flip_8c380516(void);
void mode_ending_exit_8c0ea014(void)
{
    clear_global_render_resources();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c01364c((void *)((void *)0x8c3087b8), 0x60);
    wait_vsync_and_flip_8c380516();
}
