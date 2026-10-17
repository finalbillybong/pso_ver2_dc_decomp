typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x54];
    float f54;
    char unknown58[0x24];
    float f7c;
    char unknown80[0x14];
    float f94;
};
extern void interpolate_view_parameters(void *);
extern void operation_8c225c2c(void *);
void operation_8c225b70(Object *o)
{
    float v1;
    float v2;
    v1 = (float)o->f54;
    interpolate_view_parameters((void *)o);
    v2 = (float)(o->f54 - v1);
    if (v2 != 0.0f) {
        o->f94 -= v2;
        o->f7c -= v2;
        operation_8c225c2c((void *)o);
    }
}
