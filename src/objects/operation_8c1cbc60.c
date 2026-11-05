typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1cbdd4(void);
extern void select_mode23_8c1cc678(void);
extern void wait_vsync_and_flip_8c380516(void);
void game_mode_08_init_8c1cbc60(void)
{
    call_8c1cbdd4();
    select_mode23_8c1cc678();
    wait_vsync_and_flip_8c380516();
}
