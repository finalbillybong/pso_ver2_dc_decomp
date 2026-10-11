typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    void *f04;
};
extern void initialize_fields_8c0e14ac(Object *);
Object *forward_initialize_fields_8c11a818(Object *o)
{
    initialize_fields_8c0e14ac(o);
    o->f04 = (void *)0x8c26a05c;
    return o;
}
