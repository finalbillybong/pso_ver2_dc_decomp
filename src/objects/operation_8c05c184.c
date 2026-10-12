typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3ac];
    int f3ac;
};
extern void set_fields_8c05c1a4(void *, void *);
void operation_8c05c184(Object *o)
{
    if (o->f3ac != 0) {
        set_fields_8c05c1a4((void *)o, (void *)(o->f3ac + 0x3c));
    }
}
