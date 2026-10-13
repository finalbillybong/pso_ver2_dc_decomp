typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x160];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
};
void operation_8c013478(Object *o)
{
    o->f34 &= -0x801;
    o->f330 = o->f198;
    o->f332 = o->f19a;
}
