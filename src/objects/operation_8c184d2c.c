typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct EF_48_int {
    char pad[0x48];
    int f;
} EF_48_int;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
    char unknown3e[0x2];
    float f40;
    char unknown44[0x4c];
    int f90;
    int f94;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    unsigned short f04;
    short f06;
};
extern void call_8c185134(Object *);
extern void operation_8c0ddb2c(short, int);
extern void operation_8c0368a8(void *);
void operation_8c184d2c(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    float v1;
    int v37;
    ((EF_48_int *)((char *)o + (o->f3c << 2)))->f |= 0x10;
    v1 = (float)o->f40;
    if (100.0f > v1) {
        o->f40 = v1 - 10.0f;
        if (!(0.0f > o->f40)) {
            goto L_8c184dce;
        }
        o->f40 = 0.0f;
    } else {
        o->f40 = v1 - 10.0f;
        if (100.0f > o->f40) {
            call_8c185134(o);
            ((EF_48_int *)((char *)o + (o->f3c << 2)))->f |= -0x80000000;
        } else {
            if (400.0f > o->f40) {
                ((EF_48_int *)((char *)o + (o->f3c << 2)))->f &= -3;
            }
        }
    }
L_8c184dce:;
    o->f90 = 8;
    o->f94 += 1;
    operation_8c0ddb2c(a1->f20, a2);
    if (a1 != 0) {
        v37 = (int)(a1->f308 == 2);
        if (v37 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0xffff;
    (&frame)->f06 = 0;
    (&frame)->f00 = 0x38;
    (&frame)->f01 = 2;
    (&frame)->f02 = a1->f20;
    (&frame)->f04 = a2;
    operation_8c0368a8((void *)(&frame));
}
