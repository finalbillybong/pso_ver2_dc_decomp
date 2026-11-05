typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_game_mode_8c01c25c(void);
void get_game_mode_wrapper_8c01217c(void)
{
    int t1;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        *(int *)0x8c418000 = 0;
    }
}
