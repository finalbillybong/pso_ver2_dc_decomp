typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_334 Arg0_334;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0xfc];
    float f180;
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x20];
    short f358;
    char unknown35a[0x46];
    int f3a0;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_334 {
    char unknown0[0x34];
    int f34;
};
extern int operation_8c03d338(void);
extern void operation_8c03b01c(Object *);
extern void call_8c038e8c(Object *);
extern void call_8c038f04(Object *);
extern void call_8c0392dc(Object *);
extern void call_8c0396e8(Object *);
extern void call_8c039be4(Object *);
extern void call_8c039f0c(Object *);
extern void call_8c03a630(Object *);
extern void call_8c03aadc(Object *);
extern void operation_8c03abf0(void *);
extern void call_8c03ad3c(Object *);
extern void call_8c027090(Object *);
extern void update_context_blend(void *);
extern void call_8c102cd0(void *, int, int, int);
void operation_8c03879c(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c03b01c(o);
        return;
    }
    switch (o->f30a) {
    case 0:
        call_8c038e8c(o);
        break;
    case 1:
        call_8c038f04(o);
        break;
    case 2:
        call_8c0392dc(o);
        break;
    case 3:
        call_8c0396e8(o);
        break;
    case 4:
        call_8c039be4(o);
        break;
    case 5:
        call_8c039f0c(o);
        break;
    case 6:
        call_8c03a630(o);
        break;
    case 7:
        call_8c03aadc(o);
        break;
    case 8:
        operation_8c03abf0((void *)o);
        break;
    case 9:
        call_8c03ad3c(o);
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    call_8c027090(o);
    if (o->f334 != 0 && ((o->f334->f34 & 0x2000800)) != 0) {
        o->f3a0 = -1;
        o->f358 = 0;
        o->f34 &= -0x200001;
        o->f334 = (Arg0_334 *)0;
    }
    o->f180 += 1.0f;
    update_context_blend((void *)(((char *)o + 0x3b8)));
    call_8c102cd0((void *)(&o->f3c), -0x5db4, 1, 0);
}
