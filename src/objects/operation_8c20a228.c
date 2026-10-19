typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg1 {
    short f00;
    short f02;
    short f04;
};
struct Object {
    char unknown0[0x144];
    short f144;
    short f146;
    short f148;
    short f14a;
    short f14c;
    short f14e;
    short f150;
    char unknown152[0x16];
    short f168;
    short f16a;
    short f16c;
    char unknown16e[0x2a];
    short f198;
    short f19a;
    short f19c;
    short f19e;
    short f1a0;
    short f1a2;
    char unknown1a4[0x10];
    int f1b4;
};
struct Arg2 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x10];
    int f1c;
};
struct Arg3 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
void operation_8c20a228(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    if (a1 != 0) {
        a1->f00 -= o->f168;
        a1->f02 -= o->f16a;
        a1->f04 -= o->f16c;
    }
    if (a2 != 0) {
        a2->f00 -= o->f198;
        a2->f1c -= o->f1b4;
        a2->f02 -= o->f19a;
        a2->f04 -= o->f19c;
        a2->f06 -= o->f19e;
        a2->f08 -= o->f1a0;
        a2->f0a -= o->f1a2;
    }
    if (a3 != 0) {
        a3->f00 -= o->f144;
        a3->f02 -= o->f146;
        a3->f04 -= o->f148;
        a3->f06 -= o->f14a;
        a3->f08 -= o->f14c;
        a3->f0a -= o->f14e;
        a3->f0c -= o->f150;
    }
}
