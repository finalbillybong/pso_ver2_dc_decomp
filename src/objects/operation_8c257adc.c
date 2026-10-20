typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Pair {
    short a;
    short b;
} Pair;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv38 S_vv38;
typedef struct S_vv40 S_vv40;
struct Frame {
    short f00;
    short f02;
    unsigned char f04;
    char f05;
    short f06;
    int f08;
    int f0c;
    short f10;
    short f12;
    short f14;
    char f16;
    char f17;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x62];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
    char unknown30c[0x4c];
    int f358;
    char unknown35c[0x4];
    int f360;
    int f364;
};
struct S_vv40 {
    char unknown0[0x4];
    short f04;
};
struct S_vv38 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c44be04;
extern int g_8c46ed0c;
extern void operation_8c0368a8(void *);
void operation_8c257adc(Object *o, int a1)
{
    Frame frame;
    S_vv40 *v40;
    int v39;
    S_vv38 *v38;
    int k;
    (&frame)->f00 = o->f30a;
    v40 = (S_vv40 *)o->f84;
    if (v40 != 0 && (k = v40->f04) >= 0 && !(k > 0xb9f)) {
        *(Pair *)((char *)g_8c46ed0c + (k << 2)) = *(Pair *)&(&frame)->f00;
    }
    v38 = (S_vv38 *)o->f84;
    if (v38 != 0) {
        (&frame)->f04 = 0xb;
        (&frame)->f05 = 3;
        (&frame)->f10 = 0;
        (&frame)->f12 = 0;
        (&frame)->f04 = 0x91;
        (&frame)->f05 = 5;
        (&frame)->f06 = o->f20;
        (&frame)->f08 = (&frame)->f00;
        (&frame)->f0c = v38->f04;
        (&frame)->f10 = a1;
        (&frame)->f12 = o->f358;
        if (o->f360 == 0 && o->f364 >= 0 && (unsigned short)a1 == 1) {
            (&frame)->f16 = 1;
            (&frame)->f14 = o->f364;
        } else {
            (&frame)->f16 = 0;
            (&frame)->f14 = 0;
        }
        (&frame)->f17 = g_8c44be04;
        operation_8c0368a8((void *)(&(&frame)->f04));
    }
}
