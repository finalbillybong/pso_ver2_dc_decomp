typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x36c];
    int f3a4;
};
void set_fields_8c0cfedc(Object *o)
{
    o->f3a4 |= 0x2000000;
    o->f34 |= 0x800;
}
