typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void wait_vsync_and_flip_8c380516(void);
void mode_sega_logo_exit_8c1e679c(void)
{
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c01364c((void *)((void *)0x8c32c0a8), 0x20);
    wait_vsync_and_flip_8c380516();
}
