typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode3_8c1cc4e0(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_10_init_8c1cbb70(void)
{
    call_8c1cbdd4();
    select_mode3_8c1cc4e0();
    wait_vsync_and_flip_8c380516();
}
