typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x8e];
    float f180;
    char unknown184[0x186];
    short f30a;
};
void set_fields_8c12992c(Object *o)
{
    o->f30a = 0;
    o->ff0 = o->f30a;
    o->f180 = -1.0f;
}
