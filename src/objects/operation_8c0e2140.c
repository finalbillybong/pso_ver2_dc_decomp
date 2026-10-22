typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    char unknown10[0x8];
    float dispatch;
    float f1c;
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg0_20 {
    char f00;
};
struct Frame {
    float f00;
    float f04;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
    float f34;
    char unknown38[0x8];
    float f40;
};
extern void operation_8c19a370(int, int, int, float, float);
extern int call_8c19a56c(Frame *, Arg0_20 *, void *, float);
extern int call_8c19a3a0(Frame *, Arg0_20 *, void *, float);
void operation_8c0e2140(Object *o, Arg1 *a1)
{
    Frame frame;
    int v7;
    float v48;
    float v5;
    int v1;
    float v2;
    float v4;
    float v6;
    int v8;
    int t1;
    int t2;
    v6 = (float)/* ? fr15 */ 0;
    if (o->f20 != 0) {
        v6 = (float)/* ? fr15 */ 0;
        if (o->f20->f00 != 0) {
            (&frame)->f00 = a1->f10 + o->f08;
            (&frame)->f04 = a1->f14 + o->f0c;
            v2 = (float)(-1.0f / (a1->f34 + o->dispatch * 0.299f));
            v1 = (int)o->tag;
            if (((v1 & 0x40)) != 0) {
                v4 = (float)10000000.0f;
            } else {
                v4 = (float)a1->f40;
            }
            v48 = (float)(((float)a1->f30 - (o->f08 / a1->f18 + o->f0c / 21.0f) * 7.5f) * 17.0f);
            v5 = (float)o->f1c;
            v6 = (float)v48;
            if (v48 > v5) {
                v6 = (float)v5;
            }
            v7 = !(v1 & 0x100);
            operation_8c19a370((int)a1, v7, (int)(v1 & 0x80), v2, v4);
            if (((o->tag & 4)) != 0) {
                t1 = call_8c19a56c((Frame *)((&frame)), (Arg0_20 *)(o->f20), (void *)(o->f24), v6);
                v8 = (int)t1;
            } else {
                t2 = call_8c19a3a0((Frame *)((&frame)), (Arg0_20 *)(o->f20), (void *)(o->f24), v6);
                v8 = (int)t2;
            }
            if (v8 != 0) {
                o->tag |= 0x10;
                return;
            }
            o->tag &= -0x11;
        }
    }
}
