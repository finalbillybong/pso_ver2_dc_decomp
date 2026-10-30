typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_g8c4dc2d4 S_g8c4dc2d4;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
    short f0c;
    short f0e;
};
extern int g_8c4dc2c0;
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern int g_8c4dc2d0;
extern S_g8c4dc2d4 *g_8c4dc2d4;
extern void operation_1c7dd4(void *);
void operation_8c1922a0(void)
{
    int v2;
    int v4;
    S_vv3 *v3;
    int v5;
    int lim;
    v2 = (int)0;
    lim = 0x6c0;
    v5 = (int)-1;
    while (v2 != lim) {
        v3 = (S_vv3 *)(g_8c4dc2c0 + v2 * 0x24);
        v3->f01 = 0;
        v3->f00 = v5;
        v3->f02 = v5;
        v3->f04 = 0.0f;
        v3->f08 = 0.0f;
        v3->f0c = v5;
        v3->f0e = 0;
        operation_1c7dd4((void *)((int)v3 + 0x10));
        v2 = (int)(v2 + 1);
    }
    v4 = (int)0;
    while (v4 != 0x12) {
        *(short *)((char *)((char *)g_8c4dc2d4 + 0x0) + (v4 << 1)) = 0;
        v4 = (int)(v4 + 1);
    }
    v2 = (int)0xd80;
    v5 = (int)0;
    while (v5 != 0x12) {
        *(int *)((char *)((char *)g_8c4dc2c4 + 0x0) + (v5 << 2)) = v5 * v2 + g_8c4dc2c0;
        *(int *)((char *)((char *)g_8c4dc2c8 + 0x0) + (v5 << 2)) = 0;
        v5 = (int)(v5 + 1);
    }
    g_8c4dc2d0 = 0;
}
