typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    void *f04;
    char unknown8[0x18];
    int f20;
    float f24;
    float f28;
    float f2c;
};
extern void initialize_number_view_node(void *, void *);
Object *operation_8c0fcba4(Object *o, int a1)
{
    initialize_number_view_node((void *)o, (void *)a1);
    o->f04 = (void *)0x8c26908c;
    o->f28 = (float)o->f20;
    o->f24 = (float)o->f20;
    o->f2c = 0.0f;
    return o;
}
