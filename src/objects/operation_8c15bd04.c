typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct S_vv2 {
    char unknown0[0x14];
    short f14;
    short f16;
};
struct S_vv3 {
    char unknown0[0x244];
    int f244;
    int f248;
};
struct Object {
    char unknown0[0x24];
    int f24;
};
extern int g_8c4db120;
extern int g_8c4db124;
extern S_g8c4db9e4 *g_8c4db9e4;
extern char g_8c4dab80[];
extern void operation_8c1065dc(void *);
extern void operation_1c7dd4(void *);
extern void call_8c12b77c(void *, void *, int);
void operation_8c15bd04(Object *o)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    operation_8c1065dc((void *)o);
    v1 = (int)0;
    while (0x3c > v1) {
        v2 = (S_vv2 *)(v1 * 0x18 + g_8c4dab80);
        operation_1c7dd4((void *)v2);
        v2->f14 = 0;
        v2->f16 = 0;
        v1 = (int)(v1 + 1);
    }
    v3 = (S_vv3 *)g_8c4db9e4;
    g_8c4db120 = 0;
    g_8c4db124 = 0;
    if (v3 != 0) {
        g_8c4db124 = (int)(v3->f248);
        g_8c4db120 = (int)(v3->f244);
        call_8c12b77c((void *)((void *)g_8c4dab80), (void *)((int)v3 + 0x24c), 0x5a0);
    }
    o->f24 = 1;
}
