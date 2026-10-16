typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db404 S_g8c4db404;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    unsigned char f00;
};
void operation_8c16ce78(int a0, int a1, int a2)
{
    int v3;
    S_vv2 *v2;
    int v4;
    int v1;
    int v5;
    v1 = (int)*(int *)0x8c4db408;
    v2 = (S_vv2 *)a2;
    v3 = (int)a1;
    v4 = (int)1;
    while ((unsigned char)v3 != 0) {
        v5 = (int)(*(int *)((char *)((char *)v1 + 0x0) + (v2->f00 << 2)) == 0);
        v3 = (int)(v3 + -1);
        v2 = (S_vv2 *)((char *)v2 + 1);
        v4 = (int)(v4 & v5);
    }
    if (v4 != 0) {
        *(int *)0x8c4db420 = (int)(*(int *)((char *)((char *)*(S_g8c4db404 **)0x8c4db404 + 0x0) + ((unsigned short)a0 << 2)));
    }
}
