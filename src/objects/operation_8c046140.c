typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_x75424 S_x75424;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    int fdc;
    char unknowne0[0xce];
    short f1ae;
    char unknown1b0[0x8];
    int f1b8;
};
struct Arg1 {
    char unknown0[0x1b2];
    short f1b2;
};
struct S_x75424 {
    int f00;
};
extern float object_random_fraction(void *, float);
int operation_8c046140(Object *o, Arg1 *a1, int a2, float f0)
{
    float v13;
    float v1;
    float t1;
    if (a1 == 0) {
        return 0;
    }
    if (((o->f34 & 0x4000800)) == 0) {
        v13 = (float)(f0 * (float)a1->f1b2 - (float)o->f1ae * 0.2f);
        v1 = (float)v13;
        v1 = (float)(v1 * 0.01f);
        if (v1 > 0.0f) {
            t1 = object_random_fraction((void *)o, v13);
            if (!(t1 > v1)) {
                ((S_x75424 *)((int)o->fdc + 0x18 + a2 * 0x2c))->f00 |= 0x8000000;
                o->f1b8 |= 1;
                return 1;
            }
        }
        o->f34 |= 0x100;
    }
    return 0;
}
