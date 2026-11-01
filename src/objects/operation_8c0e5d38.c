typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void play_se_8c05fbf8(int, int, int, int);
extern void update_last_effect(int);
void TObjEneBeast_v94_8c0e5d38(int a0)
{
    play_se_8c05fbf8(0x3002f, (int)(a0 + 0x3c), 0, 0);
    update_last_effect(-0x100);
}
