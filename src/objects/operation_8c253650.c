typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    short f00;
    short f02;
};
struct S_vv1 {
    int f00;
    int f04;
};
void operation_8c253650(int a0, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    v1 = (S_vv1 *)a0;
    v2 = (S_vv2 *)(a1 + 4);
    v3 = (int)0;
    while (5 > v3) {
        v2->f00 = v1->f00;
        v2->f02 = v1->f04;
        v3 = (int)(v3 + 1);
        v1 = (S_vv1 *)((char *)v1 + 8);
        v2 = (S_vv2 *)((char *)v2 + 4);
    }
}
