typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
struct S_vv1 {
    int f00;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xa6];
    int f3b0;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
    char f0c;
    char f0d;
    short f0e;
    short f10;
    short f12;
    int f14;
    Block_frame_18 f18;
};
struct Arg2 {
    Vector3 f00;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
extern int operation_8c02c1ac(void *);
extern int operation_8c02c0c4(Object *);
extern void operation_8c0368a8(void *);
extern S_c8c03b55c *call_8c03b55c(void *, int);
extern int call_8c074560(S_c8c03b55c *, Object *, int);
void operation_8c023738(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    S_vv1 *v1;
    int v3;
    int v9;
    int v11;
    int t1;
    int t2;
    S_c8c03b55c *t3;
    int t4;
    unsigned int lim;
    v1 = (S_vv1 *)(void *)0x8c004000;
    lim = 0x1000;
    for (v3 = 0; lim > (unsigned int)(short)v3; v3++) {
        if ((v1++)->f00 != 0) {
            o->f3b0 |= 1;
            break;
        }
    }
    t1 = operation_8c02c1ac((void *)o);
    if (t1 == 0) {
        if (o != 0) {
            v9 = (int)(o->f308 == 2);
            if (v9 != 0) {
                return;
            }
        }
        (&frame)->f0c = 0x1a;
        (&frame)->f0d = 1;
        (&frame)->f10 = 0;
        (&frame)->f12 = 0;
        (&frame)->f14 = -1;
        (&frame)->f18.f08 = 0.0f;
        (&frame)->f18.f04 = 0.0f;
        (&frame)->f18.f00 = 0.0f;
        (&frame)->f0c = 0x2a;
        (&frame)->f0d = 6;
        (&frame)->f0e = o->f20;
        (&frame)->f14 = a1;
        (&frame)->f10 = a3;
        t2 = operation_8c02c0c4(o);
        (&frame)->f12 = t2;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&a2->f00;
        operation_8c0368a8((void *)(&(&frame)->f0c));
        t3 = call_8c03b55c((void *)(((char *)o + 0xbcc)), 6);
        if (t3 != 0) {
            t4 = call_8c074560(t3, o, 0);
            if (t4 == 0) {
                if (o != 0) {
                    v11 = (int)(o->f308 == 2);
                    if (v11 != 0) {
                        return;
                    }
                }
                (&frame)->f00 = 0x1a;
                (&frame)->f01 = 1;
                (&frame)->f04 = -1;
                (&frame)->f08 = 0;
                (&frame)->f00 = 0x26;
                (&frame)->f01 = 3;
                (&frame)->f02 = o->f20;
                (&frame)->f04 = (int)(t3->fe8);
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
