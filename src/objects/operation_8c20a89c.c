typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    int f14;
};
void operation_8c20a89c(int a0, float f0)
{
    S_vv2 *v2;
    int v3;
    int v1;
    v2 = (S_vv2 *)a0;
    v3 = (int)0;
    v1 = (int)-1;
    while (8 > v3) {
        v2->f00 = 0.0f;
        v2->f04 = 0.0f;
        v2->f08 = f0;
        v2->f0c = 0.0f;
        v2->f10 = 0.0f;
        v2->f14 = (int)(v1);
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 24);
    }
}
