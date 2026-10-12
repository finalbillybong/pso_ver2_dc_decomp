typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_a0 Arg0_a0;
struct Frame {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x54];
    float f54;
    char unknown58[0x24];
    float f7c;
    char unknown80[0x14];
    float f94;
    char unknown98[0x8];
    Arg0_a0 *fa0;
};
extern int call_8c199e14(void *, void *, Frame *);
void operation_8c225c2c(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = o->f54 - 26.0f;
    t1 = call_8c199e14(o->fa0, ((char *)o + 0x78), (&frame));
    if (t1 != 0) {
        o->f94 = o->f7c;
    }
}
