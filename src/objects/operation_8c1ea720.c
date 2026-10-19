typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1aa840 S_c8c1aa840;
typedef struct S_c8c1aa840_s4 S_c8c1aa840_s4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
    char unknown68[0x2a0];
    short f308;
    char unknown30a[0xae];
    Arg0_3b8 *f3b8;
};
struct S_c8c1aa840 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c1aa840_s4 {
    short f00;
    short f02;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    char unknownc[0x8];
};
extern int object_ready(void *);
extern S_c8c1aa840 *operation_8c1aa840(void *, void *);
extern void set_link_state_8c0d9cdc(void *, short, short);
extern int call_8c1aa8e8(void *, void *);
extern int angle_between_xz(void *, void *);
extern int operation_8c029b3c(int, int);
extern int call_8c1aaabc(void *);
extern void operation_8c036840(int);
void operation_8c1ea720(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    S_c8c1aa840 *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = object_ready((void *)o);
    if (t1 != 0) {
        t2 = operation_8c1aa840((void *)(((char *)o + 0x754)), (void *)o);
        if (t2 != 0) {
            {
                S_c8c1aa840_s4 *p = (S_c8c1aa840_s4 *)((char *)t2 + 0x4);
                set_link_state_8c0d9cdc((void *)(o->f3b8), p->f00, p->f02);
            }
            t3 = call_8c1aa8e8((void *)(((char *)o + 0x754)), (void *)(&(&frame)->f08));
            if (t3 != 0) {
                t6 = angle_between_xz((void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f08));
                v1 = (int)t6;
            } else {
                v1 = (int)o->f64;
            }
            t4 = operation_8c029b3c((int)o, v1);
            if (o != 0) {
                v3 = (int)(o->f308 == 2);
                if (v3 != 0) {
                    return;
                }
            }
            (&frame)->f00 = 0x1a;
            (&frame)->f01 = 1;
            (&frame)->f00 = 0x3d;
            (&frame)->f01 = 1;
            (&frame)->f04 = 0;
            (&frame)->f06 = 0;
            (&frame)->f00 = 0x43;
            (&frame)->f01 = 2;
            (&frame)->f02 = o->f20;
            (&frame)->f04 = t4;
            t5 = call_8c1aaabc((void *)(((char *)o + 0x754)));
            (&frame)->f06 = t5;
            operation_8c036840((int)(&frame));
        }
    }
}
