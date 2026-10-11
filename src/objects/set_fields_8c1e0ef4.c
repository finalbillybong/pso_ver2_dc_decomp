typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x4];
    int f70;
};
void set_fields_8c1e0ef4(Object *o)
{
    o->f70 = 0;
    o->f68 |= 0x100;
}
