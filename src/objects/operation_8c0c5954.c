typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void wait_vsync_and_flip_8c380516(void);
extern void clear_hierarchy_groups(void *);
extern void run_sequence_c6010(void);
extern void forward_reviewed_8c104e8c(void);
void game_mode_24_exit_8c0c5954(void)
{
    wait_vsync_and_flip_8c380516();
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    run_sequence_c6010();
    forward_reviewed_8c104e8c();
}
