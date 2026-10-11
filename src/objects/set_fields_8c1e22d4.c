typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xbc];
    int fbc;
};
void set_fields_8c1e22d4(Object *o)
{
    o->fbc = 0x12;
    o->fbc |= 0x80;
}
