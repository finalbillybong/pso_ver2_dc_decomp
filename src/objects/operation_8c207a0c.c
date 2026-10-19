typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv1 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void call_8c0a7608(void *, void *);
void operation_8c207a0c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c46ee80;
    if (v1 == 0) {
        if (o->f20 != 0) {
            call_8c0a7608((void *)(o->f20), (void *)(&o->f2c));
        }
        if (o->f24 != 0) {
            call_8c0a7608((void *)(o->f24), (void *)(&o->f2c));
        }
        if (o->f28 == 0) {
            return;
        }
        call_8c0a7608((void *)(o->f28), (void *)(&o->f38));
        return;
    }
    (&frame)->f0c = v1->f90 + o->f2c;
    (&frame)->f10 = v1->f94 + o->f30;
    (&frame)->f14 = v1->f98 + o->f34;
    (&frame)->f00 = v1->f90 + o->f38;
    (&frame)->f04 = v1->f94 + o->f3c;
    (&frame)->f08 = v1->f98 + o->f40;
    if (o->f20 != 0) {
        call_8c0a7608((void *)(o->f20), (void *)(&(&frame)->f0c));
    }
    if (o->f24 != 0) {
        call_8c0a7608((void *)(o->f24), (void *)(&(&frame)->f0c));
    }
    if (o->f28 != 0) {
        call_8c0a7608((void *)(o->f28), (void *)(&frame));
    }
}
