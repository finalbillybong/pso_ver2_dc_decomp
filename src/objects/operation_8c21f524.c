typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
    char f01;
    char f02;
    char f03;
};
void operation_8c21f524(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)(&*(int *)((char *)((char *)a0 + 0x0) + (a1 << 2))) + 0x28);
    v1->f00 = a2;
    v1->f01 = a3;
    v1->f02 = a4;
    v1->f03 = a5;
    v1->f03 |= a6 << 1;
}
