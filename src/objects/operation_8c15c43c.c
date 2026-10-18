typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db124 S_g8c4db124;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_3c Arg0_3c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_74 S_vv1_74;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
    char unknown34[0x8];
    Arg0_3c *f3c;
};
struct S_vv1 {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0xa];
    S_vv1_74 *f74;
};
struct S_g8c4db9e4 {
    char unknown0[0x248];
    int f248;
};
struct Arg0_30 {
    char unknown0[0x68];
    unsigned short f68;
};
extern S_g8c4db124 *g_8c4db124;
extern S_g8c4db9e4 *g_8c4db9e4;
extern void operation_8c04a9c4(void *, int);
extern void operation_8c22f178(void *, int);
extern void call_8c220b80(int, int);
extern void request_resource_release(void *);
void operation_8c15c43c(Object *o)
{
    S_vv1 *v1;
    int d;
    v1 = (S_vv1 *)o->f30;
    if (v1 != 0 && ((v1->f68 & 2)) != 0) {
        d = (int)v1->f74;
        g_8c4db124 = (S_g8c4db124 *)((int)g_8c4db124 + d);
        g_8c4db9e4->f248 = (int)(g_8c4db124);
        operation_8c04a9c4((void *)(o->f28), d);
        if (o->f3c != 0) {
            operation_8c22f178((void *)(o->f3c), (int)g_8c4db124);
        }
        call_8c220b80(0x45, 1);
        o->f24 = 2;
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
    }
    if (o->f30 != 0 && ((o->f30->f68 & 4)) != 0) {
        call_8c220b80(0x45, 1);
        o->f24 = 3;
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
    }
}
