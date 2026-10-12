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
int operation_8c2097a8(int a0)
{
    if (*(int *)0x8c4db9e4 == 0) {
        return 0;
    }
    return (((*(S_g8c4db9e4 **)0x8c4db9e4)->f10 & a0)) != 0;
}
