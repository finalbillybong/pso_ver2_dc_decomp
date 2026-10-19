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
    char unknown3b0[0x30];
    int f3e0;
    char unknown3e4[0x24];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
extern void call_8c0ffdf0(void *, int);
void operation_8c0f9ca0(Object *o)
{
    float t1;
    float t2;
    t1 = object_random_fraction((void *)o);
    o->f3ac = (int)(t1 * 30.0f) + 0x1e;
    o->f3e0 = 0x888;
    t2 = object_random_fraction((void *)o);
    if (t2 > 0.5f) {
        o->f3e0 *= -1;
    }
    call_8c0ffdf0((void *)(o->f3a4), 1);
    o->f3a8->f18 &= -0x14001ad1;
    o->f408 = 1;
}
