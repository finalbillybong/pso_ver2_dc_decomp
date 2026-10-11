typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    char unknown0[0x11fa];
    short f11fa;
};
int operation_8c247de0(void)
{
    return (*(int *)0x8c4db9e4 == 0) ? 0x3e7 : (*(S_g8c4db9e4 **)0x8c4db9e4)->f11fa;
}
