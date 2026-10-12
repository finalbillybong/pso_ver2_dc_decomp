typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    void *f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x2];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern void forward_initialize_fields_8c11a818(void *);
Object *operation_8c19e20c(Object *o)
{
    forward_initialize_fields_8c11a818((void *)o);
    o->f04 = (void *)0x8c272c58;
    o->tag = 0;
    o->f08 = 0.0f;
    o->f0c = 0.0f;
    o->f10 = 0.0f;
    o->f14 = 18.0f;
    o->f1c = 0x2d;
    o->f1d = 0x2d;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = -1;
    o->f2c = -1;
    o->f30 = -1;
    o->f34 = -1;
    o->dispatch = 0;
    return o;
}
