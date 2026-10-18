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
};
struct Arg0_334 {
    char unknown0[0x34];
    int f34;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int operation_8c03d338(void);
extern void operation_8c04f84c(Object *);
extern void call_8c04d448(Object *);
extern void call_8c04da50(Object *);
extern void call_8c04db94(Object *);
extern void call_8c04e094(Object *);
extern void call_8c04e4a8(Object *);
extern void call_8c04ed80(Object *);
extern void call_8c04f1b4(Object *);
extern void call_8c04f2cc(Object *);
extern void call_8c04f5a0(Object *);
extern void call_8c027090(Object *);
void operation_8c04cd5c(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c04f84c(o);
        return;
    }
    switch (o->f30a) {
    case 0:
        call_8c04d448(o);
        break;
    case 1:
        call_8c04da50(o);
        break;
    case 2:
        call_8c04db94(o);
        break;
    case 3:
        call_8c04e094(o);
        break;
    case 4:
        call_8c04e4a8(o);
        break;
    case 5:
        call_8c04ed80(o);
        break;
    case 6:
        call_8c04f1b4(o);
        break;
    case 7:
        call_8c04f2cc(o);
        break;
    case 8:
        call_8c04f5a0(o);
    case 9:
        break;
    }
    if (o->f334 != 0 && ((o->f334->f34 & 0x2000800)) != 0) {
        o->f358 = 0;
        o->f34 &= -0x200001;
        o->f334 = (Arg0_334 *)0;
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    call_8c027090(o);
    o->f180 += 1.0f;
}
