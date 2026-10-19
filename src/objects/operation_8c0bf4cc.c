typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern float object_random_fraction(void *);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
void operation_8c0bf4cc(Object *o)
{
    float t1;
    if (o->f30a != 0xa) {
        o->f30a = 0xa;
        o->f30c = 0;
        t1 = object_random_fraction((void *)o);
        if (0.5f > t1) {
            o->ff0 = 9;
        } else {
            o->ff0 = 0xa;
        }
        o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
    }
}
