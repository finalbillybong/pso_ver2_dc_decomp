typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1575ac S_c8c1575ac;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc];
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x24];
    volatile unsigned short f80;
};
struct S_c8c1575ac {
    char unknown0[0x14];
    float f14;
};
extern S_c8c1575ac *operation_8c1575ac(void *);
void operation_8c156e58(Object *o)
{
    S_c8c1575ac *t1;
    if (((o->f80 & 0xffff & 0x20)) == 0) {
        o->f80 = (o->f80 & 0xffff) | 0x20;
        t1 = operation_8c1575ac((void *)o);
        o->f44 = t1->f14 + 26.0f;
        if (((o->f34 & 0x40)) != 0) {
            o->f44 += 2.0f;
        }
        o->f58 = 3;
    }
}
