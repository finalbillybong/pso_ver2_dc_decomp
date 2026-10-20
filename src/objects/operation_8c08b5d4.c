typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_9c Arg0_9c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    char unknown28[0x60];
    Arg0_88 *f88;
    int f8c;
    int f90;
    int f94;
    float f98;
    Arg0_9c *f9c;
    int fa0;
};
struct S_vv1 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2a8];
    int f310;
};
struct Arg0_24 {
    int f00;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct Arg0_9c {
    char unknown0[0x64];
    int f64;
};
extern void call_8c08b454(Object *, void *, void *, int);
void operation_8c08b5d4(Object *o)
{
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)o->f9c;
    v2 = (int)(v1->f310 & 0xdf7ff);
    if (((v2 & 0x99003)) != 0) {
        o->f98 += -0.0166666675f;
    } else {
        if (((v2 & 0x1e0)) != 0 || o->fa0 != v1->f64) {
            o->f98 += 0.13333334f;
            goto L_8c08b654;
        }
        if (((v2 & 0x4661c)) != 0) {
            o->f98 += 0.0166666675f;
        } else {
            o->f98 += -0.0166666675f;
        }
    }
L_8c08b654:;
    if (0.0f > o->f98) {
        o->f98 = 0.0f;
    } else {
        if (o->f98 > 1.0f) {
            o->f98 = 1.0f;
        }
    }
    v2 = (int)o->f88;
    o->f8c = 0;
    o->f90 = (int)(o->f24->f10);
    o->f94 = (int)(((char *)o + 0x28));
    call_8c08b454(o, (void *)(o->f20), (void *)v2, (int)((int)((float)o->f24->f00 * o->f98)));
    if (o->f98 > 0.0f) {
        o->f88 = (Arg0_88 *)((int)o->f88 + o->f24->f04);
    }
    o->fa0 = (int)(o->f9c->f64);
}
