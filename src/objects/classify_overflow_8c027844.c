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
int classify_overflow_8c027844(Object *o)
{
    if (o->f330 < o->f198) {
        return 1;
    }
    if (o->f332 < o->f19a) {
        return 2;
    }
    return (((o->f34 & 0x3f)) != 0) ? 3 : 0;
}
