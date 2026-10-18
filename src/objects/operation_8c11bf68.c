typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2b2];
    int f3a4;
    int f3a8;
    Arg0_3ac *f3ac;
    char unknown3b0[0x68];
    int f418;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
void operation_8c11bf68(Object *o)
{
    int v1;
    float t1;
    switch (o->f3a8) {
    case 0:
        o->f3a8 = 1;
        v1 = (int)2;
        break;
    case 1:
        o->f3a8 = 0;
        v1 = (int)1;
        break;
    default:
        return;
    }
    o->f418 += 1;
    o->f3ac->f18 &= -0x10000001;
    o->f3ac->f18 |= 1;
    t1 = object_random_fraction((void *)o);
    o->f3a4 = (int)((float)((int)(t1 * 1.99f) + 1) * 49.9999962f);
    o->ff0 = v1;
}
