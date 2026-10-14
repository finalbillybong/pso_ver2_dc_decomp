typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x320c];
    int f320c;
};
void operation_8c1712bc(int a0)
{
    int v4;
    v4 = (int)a0;
    if (*(int *)0x8c4db9e8 != 0) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = (int)((*(S_g8c4db9e8 **)0x8c4db9e8)->f320c);
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)v4 << 2)) = 0;
}
