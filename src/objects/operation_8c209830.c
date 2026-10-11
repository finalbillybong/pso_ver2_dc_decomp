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
int operation_8c209830(void)
{
    int v2;
    if (*(int *)0x8c4db9e4 == 0) {
        v2 = (int)0;
    } else {
        v2 = (int)((unsigned int)(unsigned int)((*(S_g8c4db9e4 **)0x8c4db9e4)->f10 & 0x1c00) >> 8 >> 2);
    }
    return *(int *)((char *)0x8c2e1518 + (v2 << 2));
}
