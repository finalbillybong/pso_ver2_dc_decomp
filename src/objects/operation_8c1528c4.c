typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x2c6];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0xe0];
    int f488;
    int f48c;
};
extern void call_8c15564c(Object *);
extern float call_8c37eb0c(int);
void operation_8c1528c4(Object *o)
{
    float t1;
    switch (o->f398) {
    case 0:
        o->f488 = 6;
        call_8c15564c(o);
        o->f398 = 1;
    case 1:
        t1 = call_8c37eb0c((int)(o->f488 * 0x3000));
        o->f40 = t1 * 0.75f;
        if (--o->f488 > 0) {
            return;
        }
        o->f34 &= -0x201;
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        o->f30a = o->f390 = (int)(o->f39c);
        o->f398 = (int)(o->f48c);
        return;
    case -1:
        o->f40 = 0.0f;
    }
}
