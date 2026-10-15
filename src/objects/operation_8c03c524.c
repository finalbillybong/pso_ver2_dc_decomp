typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int operation_8c03d338(void);
extern void operation_8c03c920(Object *);
extern void call_8c03c6b8(Object *);
void operation_8c03c524(Object *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c03c920(o);
        return;
    }
    switch (o->f30a) {
    case 0:
        call_8c03c6b8(o);
    }
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    o->f324.f04 += o->f184->f10 * 0.5f;
}
