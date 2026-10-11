typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    int f70;
    int f74;
    char unknown78[0x14];
    float f8c;
    float f90;
    int f94;
};
void set_fields_8c215ed4(Object *o)
{
    o->f90 = 0.0f;
    o->f8c = 0.0f;
    o->f70 = 0;
    o->f74 = 0;
    o->f94 = 1;
}
