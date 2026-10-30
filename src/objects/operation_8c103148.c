typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_g8c4d53a0_0 S_g8c4d53a0_0;
typedef struct S_vv2 S_vv2;
struct S_g8c4d53a0 {
    S_g8c4d53a0_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv2 {
    char unknown0[0x2];
    short f02;
};
extern S_g8c4d53a0 *g_8c4d53a0;
void operation_8c103148(int a0)
{
    S_vv2 *v2;
    int v1;
    if (g_8c4d53a0 != 0 && g_8c4d53a0->f00 != 0) {
        v1 = (int)0;
        v2 = (S_vv2 *)g_8c4d53a0->f00;
        while (g_8c4d53a0->f08 > v1) {
            v2->f02 |= a0;
            v1 = (int)(v1 + 1);
            v2 = (S_vv2 *)((char *)v2 + 40);
        }
    }
}
