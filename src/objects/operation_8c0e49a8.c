typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x5a];
    int f368;
};
extern void operation_8c05428c(void *, int, int);
extern float object_random_fraction(void *);
void operation_8c0e49a8(Object *o)
{
    float t1;
    switch (o->f30a) {
    case 0:
    case 2:
        break;
    case 1:
        o->f30c = 0;
        if (o->f368 == 0) {
            o->f30a = 3;
            o->ff0 = 7;
        } else {
            o->f30a = 2;
            o->ff0 = 0xa;
        }
        o->f34 &= -0x4040001;
        operation_8c05428c((void *)o, 0, 0x14000000);
        return;
    default:
        o->f30a = 5;
        o->f30c = 1;
        t1 = object_random_fraction((void *)o);
        if (t1 > 0.5f) {
            o->ff0 = 3;
        } else {
            o->ff0 = 4;
        }
        o->f34 |= 0x200000;
        o->f34 &= -0x4040001;
        operation_8c05428c((void *)o, 0, 0x14000000);
        return;
    }
}
