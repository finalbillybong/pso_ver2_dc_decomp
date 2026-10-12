typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    void *f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    float dispatch;
    float f1c;
    int f20;
    int f24;
    float f28;
};
struct Arg1 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    int f10;
    int f14;
    int f18;
};
extern void forward_initialize_fields_8c11a818(void *);
extern float call_8c2097e4(void);
Object *operation_8c0e2020(Object *o, Arg1 *a1)
{
    Object **home = &o;
    float t1;
    (void)home;
    forward_initialize_fields_8c11a818((void *)o);
    o->f04 = (void *)0x8c2677a8;
    o->f08 = a1->f04;
    o->f0c = a1->f08;
    o->dispatch = a1->f0c;
    o->tag = a1->f14;
    o->f1c = 0.0f;
    o->f24 = a1->f10;
    t1 = call_8c2097e4();
    o->f28 = t1;
    if (((o->tag & 4)) != 0) {
        o->f28 = o->f28 * 0.5f;
    }
    if (!(o->f28 > 0.0f)) {
        o->f1c = 100000.0f;
    }
    o->f20 = a1->f18;
    return o;
}
