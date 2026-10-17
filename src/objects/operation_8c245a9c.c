typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
};
extern void initialize_hierarchy_node(void *, void *);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
extern float call_8c37f6c0(void *, float);
Object *operation_8c245a9c(Object *o, Arg1 *a1, Arg2 *a2, int a3, float f0, float f1)
{
    Frame frame;
    Object **home = &o;
    float v5;
    float v6;
    float v1;
    float t1;
    float t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c27cf00;
    o->tag = (int)(*(int *)0x8c33aea4);
    o->size = 0x34;
    v1 = (float)f1;
    if (!(f1 > 0.0f)) {
        v1 = (float)1.0f;
    }
    (&frame)->f04 = a2->f00 - a1->f00;
    (&frame)->f08 = a2->f04 - a1->f04;
    (&frame)->f0c = 0.0f;
    t1 = call_8c37e480((void *)(&(&frame)->f04));
    if (t1 != 0.0f) {
        call_8c37b630((void *)(&(&frame)->f04));
    } else {
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
        (&frame)->f0c = 0.0f;
    }
    o->f24 = (&frame)->f08 * f0 + a2->f00;
    o->f28 = (&frame)->f04 * f0 + a2->f04;
    o->f2c = -(&frame)->f08 * f0 + a2->f00;
    o->f30 = -(&frame)->f04 * f0 + a2->f04;
    v5 = (float)o->f28;
    v6 = (float)o->f30;
    if (!(v5 > v6)) {
        o->f30 = v5;
        o->f28 = v6;
    }
    t2 = call_8c37f6c0((void *)(&o->f24), (o->f24 - o->f2c) * (o->f24 - o->f2c) + (o->f28 - o->f30) * (o->f28 - o->f30));
    o->f20 = t2 * 0.5f / v1;
    return o;
}
