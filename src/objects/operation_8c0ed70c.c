typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c3806f6(int, int, int);
extern void reset_controller_state_8c01d9dc(void);
extern void call_8c01c250(int);
extern void call_8c01c244(int);
extern void load_chara_making_motions_8c034618(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_09_init_8c0ed70c(void)
{
    call_8c3806f6(0, 0, 0xff);
    reset_controller_state_8c01d9dc();
    call_8c01c250(2);
    call_8c01c244(0xb);
    load_chara_making_motions_8c034618();
    wait_vsync_and_flip_8c380516();
}
