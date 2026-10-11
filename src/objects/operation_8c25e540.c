typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    int f00;
};
int operation_8c25e540(void)
{
    int v1;
    if (*(int *)0x8c4db9e4 != 0) {
        v1 = (*(S_g8c4db9e4 **)0x8c4db9e4)->f00 & 2;
    } else {
        v1 = 0;
    }
    if (v1 != 0) {
        return 1;
    }
    return 0;
}
