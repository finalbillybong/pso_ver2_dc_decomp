typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
int operation_8c03c0c8(int a0, int a1, int a2)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(a0 + a2);
    v1->f00 -= a1;
    if (!(v1->f00 >= 0)) {
        v1->f00 = 0;
        return 0;
    }
    return 1;
}
