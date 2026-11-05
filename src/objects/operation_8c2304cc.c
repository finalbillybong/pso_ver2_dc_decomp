typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void clear_hierarchy_groups(void *);
extern void call_8c01364c(void *, int);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_30_exit_8c2304cc(void)
{
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c01364c((void *)((void *)0x8c338648), 0x28);
    wait_vsync_and_flip_8c380516();
}
