typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3e0 Arg0_3e0;
typedef struct Arg0_s3cc Arg0_s3cc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
struct Arg0_s3cc {
    char unknown0[0x14];
    Arg0_3e0 *f14;
};
struct Arg0_3e0 {
    char unknown0[0x1c];
    int f1c;
};
extern void call_8c01c5f0(Object *);
extern void call_8c108570(void *);
extern void operation_8c1147cc(void *);
void operation_8c0cfc38(Object *o)
{
    int t1;
    switch (o->f398) {
    case 0:
        o->f3a4 |= 4;
        o->f34 |= 0x4000000;
        o->ff0 = 5;
        call_8c01c5f0(o);
        call_8c108570((void *)(((char *)o + 0x324)));
        operation_8c1147cc((void *)(((char *)o + 0x3cc)));
        o->f398 = 1;
    case 1:
        t1 = ((int (*)(void *))(((Arg0_s3cc *)((char *)o + 0x3cc))->f14->f1c))((void *)(((char *)o + 0x3cc)));
        if (t1 != 1) {
            return;
        }
        o->f398 = -1;
        return;
    case -1:
        *(int *)((char *)o + 0x3a4) &= -6;
        o->f34 &= -0x4000001;
        if (((o->f3a4 & 1)) == 0) {
            if (o->f30a != 0) {
                o->f39c = o->f30a;
                o->f390 = 0;
            }
        }
    }
}
