typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_game_mode_8c01c25c(void);
int get_game_mode_wrapper_6_8c25aa74(void)
{
    int t1;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0x10) {
        return *(int *)0x8c41bd10;
    }
    return 0;
}
