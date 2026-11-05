typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode4_8c1cc4f8(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_11_init_8c1cbb98(void)
{
    call_8c1cbdd4();
    select_mode4_8c1cc4f8();
    wait_vsync_and_flip_8c380516();
}
