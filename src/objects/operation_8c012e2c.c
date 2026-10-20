typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
typedef struct Block_frame_c {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_c;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    Block_frame_c f0c;
};
struct Arg1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x31a];
    int f34c;
};
struct S_vv2 {
    Vector3 f00;
};
extern int g_8c46ed10;
extern int g_8c4703c0;
extern void operation_8c012f9c(void *, int);
extern void operation_8c036840(int);
void operation_8c012e2c(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv2 *v2;
    int v7;
    int v13;
    int v14;
    int w;
    if (a1 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a1->f00;
    } else {
        if (o->f30 < 0 || o->f30 > 0xb4f) {
            v7 = (int)0;
            goto L_8c012e80;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)(g_8c46ed10 + o->f30 * 0xc);
        v7 = (int)1;
L_8c012e80:;
        if (v7 == 0) {
            return;
        }
    }
    (&frame)->f00 = 0xa;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = o->f30;
    (&frame)->f06 = (&frame)->f0c.f06;
    if (g_8c4703c0 == 3) {
        w = (&frame)->f0c.f00;
        (&frame)->f08 = w & -0x40;
        v13 = (int)(w & 0x3f);
        v14 = (int)(~o->f34c & v13);
        if (v14 == 0) {
            goto L_8c012ed2;
        }
        operation_8c012f9c((void *)o, v14);
        o->f34c = (int)(v13);
    } else {
        (&frame)->f08 = (int)((&frame)->f0c.f00);
    }
L_8c012ed2:;
    operation_8c036840((int)(&frame));
}
