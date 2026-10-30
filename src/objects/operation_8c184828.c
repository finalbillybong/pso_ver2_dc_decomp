typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
struct S_vv1 {
    unsigned char f00;
};
void operation_8c184828(int a0, int a1)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v3;
    int mask;
    v1 = (S_vv1 *)a1;
    v2 = (S_vv2 *)a0;
    mask = 0xffff;
    v3 = (int)0;
    while (0xc0 > v3) {
        v2->f00 = v1->f00 ^ mask;
        v3 = (int)(v3 + 1);
        v1 = (S_vv1 *)((char *)v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 1);
    }
}
