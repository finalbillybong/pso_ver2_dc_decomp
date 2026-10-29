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
extern S_g8c4db404 *g_8c4db404;
extern int g_8c4db408;
extern int g_8c4db420;
void operation_8c16ce30(int a0, int a1, int a2)
{
    int v3;
    int v5;
    int v1;
    S_vv2 *v2;
    v3 = (int)a1;
    v1 = (int)g_8c4db408;
    v5 = 1;
    v2 = (S_vv2 *)a2;
    while (!((unsigned char)v3 == 0)) {
        v5 = (int)((int)(*(int *)((0x0 + (char *)v1) + (v2->f00 << 2)) != 0) & v5);
        v2 = (S_vv2 *)((char *)v2 + 1);
        v3 = (int)(v3 + -1);
    }
    if (v5 != 0) {
        g_8c4db420 = (int)(*(int *)((char *)((char *)g_8c4db404 + 0x0) + ((unsigned short)a0 << 2)));
    }
}
