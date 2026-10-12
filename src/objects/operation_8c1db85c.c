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
    int f1c;
    int f20;
    int f24;
};
extern void forward_initialize_fields_8c11a818(void *);
Object *operation_8c1db85c(Object *o)
{
    forward_initialize_fields_8c11a818((void *)o);
    o->f04 = (void *)0x8c277304;
    o->tag = 0;
    o->f08 = 0.0f;
    o->f0c = 0.0f;
    o->f10 = 0.0f;
    o->f14 = 18.0f;
    o->f24 = -1;
    o->f1c = 0;
    o->f20 = 0;
    o->dispatch = 0;
    return o;
}
