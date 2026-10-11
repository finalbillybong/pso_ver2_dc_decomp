typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    float f74;
    char unknown78[0x18];
    float f90;
};
void set_fields_8c0e1170(Object *o)
{
    o->f70 = o->f90;
    o->f74 = o->f90;
}
