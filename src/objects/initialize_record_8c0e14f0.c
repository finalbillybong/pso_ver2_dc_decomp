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
    float f10;
    float f14;
    int dispatch;
    float f1c;
    float f20;
    float f24;
};
struct Arg1 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
};
extern void initialize_fields_8c0e14ac(Object *);
Object *initialize_record_8c0e14f0(Object *o, Arg1 *a1)
{
    initialize_fields_8c0e14ac(o);
    o->f04 = (void *)0x8c26777c;
    o->f1c = 0.0f;
    o->f0c = a1->f04;
    o->f10 = a1->f08;
    o->f08 = a1->f0c;
    o->f14 = a1->f18;
    o->dispatch = a1->f10;
    o->tag = a1->f14;
    o->f20 = a1->f1c;
    o->f24 = a1->f20;
    return o;
}
