typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x10];
    int f10;
};
void operation_8c20978c(int a0, int a1)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c4db9e4 **)0x8c4db9e4;
    if (v1 != 0) {
        v1->f10 &= a1;
        v1->f10 |= a0;
    }
}
