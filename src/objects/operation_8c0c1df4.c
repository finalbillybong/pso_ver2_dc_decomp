typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_418 Arg0_418;
typedef struct Arg0_s404 Arg0_s404;
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
struct Arg0_s404 {
    char unknown0[0x14];
    Arg0_418 *f14;
};
struct Arg0_418 {
    char unknown0[0x1c];
    int f1c;
};
extern void call_8c1084fc(void *);
extern void operation_8c1147cc(void *);
extern void call_8c01c5f0(Object *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0c1df4(Object *o)
{
    int t1;
    switch (o->f398) {
    case 0:
        o->f3a4 |= 4;
        o->f34 |= 0x4000000;
        o->ff0 = 0;
        call_8c1084fc((void *)(((char *)o + 0x324)));
        operation_8c1147cc((void *)(((char *)o + 0x404)));
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        t1 = ((int (*)(void *))(((Arg0_s404 *)((char *)o + 0x404))->f14->f1c))((void *)(((char *)o + 0x404)));
        if (t1 == 1) {
            o->f398 = -1;
        }
        refresh_follow_effect_8c052180((void *)o);
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
