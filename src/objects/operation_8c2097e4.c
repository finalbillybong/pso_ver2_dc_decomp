typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    char unknown0[0x10];
    int f10;
};
float operation_8c2097e4(void)
{
    int v2;
    if (*(int *)0x8c4db9e4 == 0) {
        v2 = (int)1;
    } else {
        v2 = (int)((unsigned int)((*(S_g8c4db9e4 **)0x8c4db9e4)->f10 & 0x300) >> 8);
    }
    return *(float *)((char *)0x8c2e1508 + (v2 << 2));
}
