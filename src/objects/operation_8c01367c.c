typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void request_game_mode_8c01c1a4(int);
void request_game_mode_wrapper_8c01367c(void)
{
    request_game_mode_8c01c1a4(2);
}
