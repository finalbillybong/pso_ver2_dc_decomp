typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int play_se_8c05fbf8(int, int, int, int);
extern void emit_control_60320(int, int, int);
void TObjCityDoor_Warp_v20_8c1c1fc0(int a0)
{
    int t1;
    t1 = play_se_8c05fbf8(0x40005, (int)(a0 + 0x3c), 0, 0);
    emit_control_60320(t1, -0x500, 0);
}
