typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x14];
    void *f14;
    float dispatch;
};
extern void initialize_base_blend(Object *);
Object *initialize_object_8c0fbf7c(Object *o)
{
    initialize_base_blend(o);
    o->f14 = (void *)0x8c269000;
    o->dispatch = 0.0f;
    return o;
}
