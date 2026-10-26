typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    S_vv1 *f00;
};
void operation_8c1a198c(int a0, int a1)
{
    S_vv2 *v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)a1;
    v2 = (S_vv2 *)(a0 + 0x20);
    while (v1->f00 != 0) {
        v2->f00 = v1;
        v2 = (S_vv2 *)((char *)v2 + 4);
        v1 = (S_vv1 *)((char *)v1 + 24);
    }
    v2->f00 = (S_vv1 *)0;
}
