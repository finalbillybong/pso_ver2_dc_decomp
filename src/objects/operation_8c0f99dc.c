typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x3a4];
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    int f3ac;
    char unknown3b0[0x8];
    int f3b8;
    char unknown3bc[0x24];
    int f3e0;
    char unknown3e4[0x4];
    int f3e8;
    char unknown3ec[0x1c];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
extern void call_8c0ffdf0(void *, int);
void operation_8c0f99dc(Object *o)
{
    float t1;
    void *pm3;
    int pm4;
    float pm5;
    void *pm6;
    int pm7;
    int pm2;
    o->f3e8 = 0xffff;
    t1 = object_random_fraction((void *)o);
    pm2 = (int)(4.0f * t1);
    o->f3b8 = 4 + pm2 << 0x10;
    o->f3ac = 0x7fffffff;
    o->f3e0 = 0x400;
    pm6 = (void *)o;
    pm5 = object_random_fraction(pm6);
    t1 = pm5;
    if (t1 > 0.5f) {
        o->f3e0 = o->f3e0 * -1;
    }
    pm6 = (void *)(o->f3a4);
    pm3 = pm6;
    pm7 = 1;
    call_8c0ffdf0(pm3, pm7);
    pm7 = -0x14001ad1 & o->f3a8->f18;
    pm4 = pm7;
    o->f3a8->f18 = pm4;
    o->f408 = 1;
}
