typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x3204];
    short f3204;
    char f3206;
};
void operation_8c2274e8(int a0, int a1, int a2)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    if (v1 != 0) {
        v1->f3204 = a1;
        v1->f3206 = a2;
    }
}
