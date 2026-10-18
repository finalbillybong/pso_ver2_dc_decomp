typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c5049ec S_g8c5049ec;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c5049ec *g_8c5049ec;
extern S_L8c41cba0 g_8c41cba0;
extern void request_resource_release(void *);
void operation_8c2083f8(void)
{
    S_g8c5049ec *v1;
    v1 = g_8c5049ec;
    if (v1 != 0) {
        if ((((&g_8c41cba0)->f28 & 4)) == 0 && (((&g_8c41cba0)->f28 & 2)) == 0) {
            return;
        }
        request_resource_release(v1);
        g_8c5049ec = (S_g8c5049ec *)0;
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 = (unsigned int)g_8c46fe20->f20 >> 1 << 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 &= -0x11;
            }
        }
    }
}
