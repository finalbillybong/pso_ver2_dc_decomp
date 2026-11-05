typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode6_8c1cc528(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_13_init_8c1cbbe8(void)
{
    call_8c1cbdd4();
    select_mode6_8c1cc528();
    wait_vsync_and_flip_8c380516();
}
