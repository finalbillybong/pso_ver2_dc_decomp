typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv33 S_vv33;
typedef struct S_vv35 S_vv35;
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
};
struct S_vv35 {
    char unknown0[0x4];
    short f04;
};
struct S_vv33 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c46ed0c;
extern void operation_8c0368a8(void *);
typedef struct Pair16 {
    short a;
    short b;
} Pair16;
void operation_8c24cadc(Object *o, int a1)
{
    Frame frame;
    S_vv35 *v35;
    int v34;
    S_vv33 *v33;
    (&frame)->f00 = o->f30a;
    v35 = (S_vv35 *)o->f84;
    if (v35 != 0) {
        v34 = v35->f04;
        if (v34 >= 0 && !(v34 > 0xb9f)) {
            *(Pair16 *)((char *)g_8c46ed0c + (v34 << 2)) = *(Pair16 *)&frame;
        }
    }
    v33 = (S_vv33 *)o->f84;
    if (v33 != 0) {
        (&frame)->f04 = 0xb;
        (&frame)->f05 = 3;
        (&frame)->f10 = 0;
        (&frame)->f12 = 0;
        (&frame)->f04 = 0x86;
        (&frame)->f05 = 4;
        (&frame)->f06 = o->f20;
        (&frame)->f08 = (&frame)->f00;
        (&frame)->f0c = v33->f04;
        (&frame)->f10 = a1;
        (&frame)->f12 = o->f358;
        operation_8c0368a8((void *)(&(&frame)->f04));
    }
}
