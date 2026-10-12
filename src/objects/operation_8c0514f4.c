typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x5e];
    short f390;
    char unknown392[0x4];
    short f396;
    char unknown398[0x14];
    int f3ac;
    short f3b0;
};
extern float object_random_fraction(void *);
void operation_8c0514f4(Object *o)
{
    float t1;
    if (((o->f390 & 2)) == 0) {
        o->f390 |= 2;
        o->f3b0 = 0;
        t1 = object_random_fraction((void *)o);
        o->f3ac = (int)(t1 * 360.0f * 65536.0f / 360.0f);
    }
    o->f30a = 1;
    o->f396 = 3;
    o->f330 = 1;
    o->f34 &= -0xa01;
}
