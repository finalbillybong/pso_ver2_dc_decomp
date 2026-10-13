typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    short f20;
    char unknown22[0x2];
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    int f4c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c0b367c(Object *o, int a1, int a2)
{
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c265f28;
    o->f20 = a1;
    o->f24 = 0.0f;
    o->f28 = 0.0f;
    o->f2c = 0.0f;
    o->f30 = 0.05f;
    o->f34 = 0.05f;
    o->f38 = 0.05f;
    o->f3c = 1.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f4c = 0;
    return o;
}
