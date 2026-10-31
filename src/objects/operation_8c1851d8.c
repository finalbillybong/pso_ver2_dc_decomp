typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct EF_2_short {
    char pad[0x2];
    short f;
} EF_2_short;
typedef struct EF_48_int {
    char pad[0x48];
    int f;
} EF_48_int;
typedef struct EF_78_unsigned_short {
    char pad[0x78];
    unsigned short f;
} EF_78_unsigned_short;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_s8 S_vv6_s8;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
    char unknown3e[0x2];
    float f40;
    char unknown44[0x4c];
    int f90;
    int f94;
};
struct S_vv6 {
    char unknown0[0x8];
    short f08;
};
struct S_vv6_s8 {
    char unknown0[0x2];
    short f02;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0368a8(void *);
typedef struct Pair4 {
    unsigned short id;
    short v;
} Pair4;
void operation_8c1851d8(Object *o)
{
    int v4;
    int v5;
    Pair4 *v6;
    Frame frame;
    int v1;
    int v3;
    S_c8c021ef8 *t1;
    int v2;
    v1 = 0;
    o->f40 = 0.0f;
    for (; v1 < 0xc; v1++) {
        ((EF_48_int *)((char *)o + (v1 << 2)))->f = 0;
    }
    v1 = 0xffff;
    for (v2 = 0; v2 < 4; v2++) {
        v6 = (Pair4 *)(((v2 << 2)) + (char *)o + 0x78);
        v6->id = v1;
        v6->v = -1;
    }
    o->f90 = 0;
    o->f94 = 0;
    v5 = 0;
    v4 = (int)&o->f90;
    v3 = 0xffff;
    for (; v5 < 4; v5++) {
        v6 = (Pair4 *)(v4 + (v5 << 2) + 8);
        v6->id = v3;
        v6->v = 0;
    }
    t1 = lookup_low_id(o->f3c);
    if (t1 != 0) {
        v3 = t1->f308 == 2;
        if (v3 != 0) {
            return;
        }
    }
    frame.f00 = 0x1a;
    frame.f01 = 1;
    frame.f00 = 0x3b;
    frame.f01 = 1;
    frame.f02 = (short)o->f3c;
    operation_8c0368a8((void *)&frame);
}
