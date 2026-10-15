typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_130 Arg0_24_130;
typedef struct Arg0_24_130_0 Arg0_24_130_0;
typedef struct Arg0_24_130_0_4 Arg0_24_130_0_4;
typedef struct Arg0_24_64 Arg0_24_64;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    int f38;
    int f3c;
    int f40;
    char unknown44[0x88];
    float fcc;
};
struct Arg0_24 {
    char unknown0[0x64];
    Arg0_24_64 *f64;
    char unknown68[0xc8];
    Arg0_24_130 *f130;
    char unknown134[0x1d4];
    short f308;
};
struct Arg0_24_130 {
    Arg0_24_130_0 *f00;
};
struct Arg0_24_130_0 {
    char unknown0[0x4];
    Arg0_24_130_0_4 *f04;
};
struct Arg0_24_130_0_4 {
    char unknown0[0x8];
    int f08;
};
struct Arg0_34 {
    char unknown0[0x1c];
    int f1c;
    int f20;
    int f24;
};
extern void call_8c382a40(void *);
extern void call_8c37df90(int, int);
extern void call_8c37ddbc(int, int, int, int);
extern void call_8c37e2e4(int, float, float, float);
void operation_8c1f246c(Object *o)
{
    int v1;
    int v3;
    int v5;
    int v7;
    call_8c382a40((void *)(((char *)o + 0xa4)));
    v1 = (int)(o->f24->f308 == 7);
    if (v1 != 0) {
        v7 = (int)o->f24->f64;
        if (o->f24->f130 != 0) {
            v5 = (int)o->f24->f64;
            if (o->f24->f130->f00 != 0) {
                v3 = (int)o->f24->f64;
                if (o->f24->f130->f00->f04 != 0) {
                    v3 = (int)((int)o->f24->f64 + o->f24->f130->f00->f04->f08);
                }
                v5 = (int)v3;
            }
            v7 = (int)v5;
        }
        call_8c37df90(0, v7);
    } else {
        call_8c37df90(0, (int)(o->f24->f64));
    }
    call_8c382a40((void *)(((char *)o + 0xb0)));
    if (o->f34 != 0) {
        call_8c37ddbc(0, (int)(o->f34->f1c + (int)o->f38), (int)(o->f34->f20 + (int)o->f3c), (int)(o->f34->f24 + (int)o->f40));
    }
    call_8c37e2e4(0, o->fcc, o->fcc, o->fcc);
}
