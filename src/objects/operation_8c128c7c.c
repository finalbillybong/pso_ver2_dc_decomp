typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c0 Arg0_3c0;
typedef struct Arg0_s3ac Arg0_s3ac;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
struct Arg0_s3ac {
    char unknown0[0x14];
    Arg0_3c0 *f14;
};
struct Arg0_3c0 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x4];
    int f1c;
};
void operation_8c128c7c(Object *o)
{
    int t1;
    switch (o->f398) {
    case 0:
        ((void (*)(void *))(((Arg0_s3ac *)((char *)o + 0x3ac))->f14->f14))((void *)(((char *)o + 0x3ac)));
        o->f3a4 |= 5;
        o->f398 = 1;
    case 1:
        t1 = ((int (*)(void *))(((Arg0_s3ac *)((char *)o + 0x3ac))->f14->f1c))((void *)(((char *)o + 0x3ac)));
        if (t1 != 1) {
            return;
        }
        *(int *)((char *)o + 0x3a4) &= -6;
        if (((o->f3a4 & 1)) != 0) {
            return;
        }
        if (o->f30a == 0) {
            return;
        }
        o->f39c = o->f30a;
        o->f390 = 0;
        return;
    case -1:
        o->f3a4 &= -5;
    }
}
