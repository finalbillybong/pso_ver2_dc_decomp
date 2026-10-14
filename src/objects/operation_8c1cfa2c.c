typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c139fac S_c8c139fac;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_c8c139fac_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_c8c139fac_0;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x1c];
    float f40;
    float f44;
    float f48;
    Block_c8c139fac_0 f4c;
    char unknown58[0x4];
    float f5c;
};
struct S_c8c139fac {
    Block_c8c139fac_0 f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_20 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern S_c8c139fac *call_8c139fac(void);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
void operation_8c1cfa2c(Object *o)
{
    Frame frame;
    S_c8c139fac *t1;
    float t2;
    o->f5c = 1.0f;
    if (o->f20 != 0) {
        t1 = call_8c139fac();
        if (t1 != 0) {
            o->f4c = t1->f00;
            (&frame)->f00 = o->f20->f3c - t1->f00.f00;
            (&frame)->f08 = o->f20->f44 - t1->f00.f08;
            (&frame)->f04 = 0.0f;
            t2 = call_8c37e480((Frame *)((&frame)));
            if (t2 != 0.0f) {
                call_8c37b630((Frame *)((&frame)));
                o->f40 = (&frame)->f00 * 30.0f + o->f20->f3c;
                o->f44 = o->f20->f40 + 10.0f;
                o->f48 = (&frame)->f08 * 30.0f + o->f20->f44;
            }
        }
    }
}
