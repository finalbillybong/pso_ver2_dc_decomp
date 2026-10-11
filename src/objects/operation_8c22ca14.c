typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_50 Arg0_24_50;
typedef struct Arg0_24_50_4 Arg0_24_50_4;
typedef struct Arg1 Arg1;
typedef struct Block_p0_24_5c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_24_5c;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg0_20 {
    char unknown0[0x5c];
    Block_p0_24_5c f5c;
};
struct Arg1 {
    Block_p0_24_5c f00;
};
struct Arg0_24 {
    char unknown0[0x50];
    Arg0_24_50 *f50;
    char unknown54[0x8];
    Block_p0_24_5c f5c;
};
struct Arg0_24_50 {
    char unknown0[0x4];
    Arg0_24_50_4 *f04;
};
struct Arg0_24_50_4 {
    char unknown0[0x14];
    float f14;
};
void operation_8c22ca14(Object *o, Arg1 *a1)
{
    if (a1 != 0) {
        if (o->f20 != 0) {
            o->f20->f5c = a1->f00;
        }
        if (o->f24 != 0) {
            o->f24->f5c = a1->f00;
            o->f24->f5c.f04 -= o->f24->f50->f04->f14 * 2.0f;
        }
    }
}
