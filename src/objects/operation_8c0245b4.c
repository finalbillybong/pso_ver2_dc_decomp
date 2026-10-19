typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011308 S_c8c011308;
typedef struct S_c8c011308_4 S_c8c011308_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x140];
    Arg0_184 *f184;
    char unknown188[0x1c8];
    int f350;
    char unknown354[0x204];
    Vector3 f558;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_c8c011308 {
    int f00;
    S_c8c011308_4 *f04;
};
struct S_c8c011308_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x18];
    Vector3 f20;
    char unknown2c[0x34];
    Vector3 f60;
};
extern S_c8c011308 *operation_8c011308(int, void *, int);
S_c8c011308 *operation_8c0245b4(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    S_c8c011308 *t1;
    (&frame)->f00 = a1->f00;
    (&frame)->f04 = a1->f04 + o->f184->f10;
    (&frame)->f08 = a1->f08;
    t1 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x55);
    if (t1 == 0) {
        return 0;
    }
    *(int *)((char *)o + 0x350) &= -0x1801;
    v1 = (int)t1->f00;
    if (((v1 & 4)) != 0) {
        o->f350 |= 0x800;
        *(Vector3 *)&o->f558 = *(Vector3 *)&t1->f04->f20;
    } else {
        if (((v1 & 0x10)) != 0) {
            o->f350 |= 0x1000;
            *(Vector3 *)&o->f558 = *(Vector3 *)&t1->f04->f60;
        }
    }
    if (((v1 & 1)) == 0) {
        return 0;
    }
    o->f40 = t1->f04->f04;
    return t1;
}
