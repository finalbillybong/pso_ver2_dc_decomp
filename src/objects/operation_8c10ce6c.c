typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_78_94 Arg0_78_94;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct Block_p0_e0 {
    float f00;
    float f04;
    float f08;
} Block_p0_e0;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x1c];
    float f58;
    char unknown5c[0x1c];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    char unknown80[0x8];
    int f88;
    float f8c;
    char unknown90[0x50];
    Block_p0_e0 fe0;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2e0];
    float f328;
};
struct Arg0_78 {
    char unknown0[0x94];
    Arg0_78_94 *f94;
};
struct Arg0_78_94 {
    char unknown0[0x324];
    Block_p0_e0 f324;
};
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
int operation_8c10ce6c(Object *o)
{
    Frame frame;
    float t1;
    if (o->f88 != 0) {
        if (((o->f38 & 0x80)) != 0) {
            if (!(o->f8c > (o->f58 * o->f58))) {
                (&frame)->f00 = o->fe0.f00 - o->f7c->f94->f3c;
                (&frame)->f08 = o->fe0.f08 - o->f7c->f94->f44;
                (&frame)->f04 = 0.0f;
                t1 = call_8c37e480((&frame));
                if (t1 != 0.0f) {
                    call_8c37b630((&frame));
                }
                o->fe0.f00 -= o->f58 * (&frame)->f00;
                o->fe0.f08 -= o->f58 * (&frame)->f08;
                o->fe0.f04 = o->f7c->f94->f328;
                goto L_8c10cf84;
            }
            o->fe0 = o->f78->f94->f324;
            goto L_8c10cf84;
        }
        o->fe0 = o->f78->f94->f324;
    } else {
        o->fe0 = o->f78->f94->f324;
    }
L_8c10cf84:;
    return 1;
}
