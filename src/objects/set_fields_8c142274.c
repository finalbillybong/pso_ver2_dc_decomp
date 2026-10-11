typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x11c];
    float f11c;
    char unknown120[0x8];
    int f128;
};
void set_fields_8c142274(Object *o)
{
    o->f11c = 1.6f;
    o->f128 = 0xbde;
}
