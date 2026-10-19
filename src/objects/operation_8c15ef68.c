typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_398 Arg0_398;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29e];
    int f390;
    char unknown394[0x4];
    Arg0_398 *f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x28];
    int f3d0;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
void operation_8c15ef68(Object *o)
{
    float t1;
    t1 = object_random_fraction((void *)o);
    o->f3d0 = (int)(t1 * 60.0f + 15.0f);
    o->f398->f18 |= 1;
    o->f3a4 = 1;
    if (o->f390 == 1) {
        o->fe8 |= 1;
    } else {
        o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    }
    o->ff0 = 0;
}
