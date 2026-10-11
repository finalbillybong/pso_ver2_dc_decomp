typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    int f2c;
    int f30;
    char unknown34[0x34];
    int f68;
};
void set_fields_8c1f2a5c(Object *o)
{
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f68 |= 0x80;
}
