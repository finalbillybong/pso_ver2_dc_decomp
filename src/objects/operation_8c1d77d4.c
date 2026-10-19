typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8_s7e4 S_c8c021ef8_s7e4;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct S_vv1 S_vv1;
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    char unknown16[0x2];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x14];
    Arg0_30_14 *f14;
};
struct S_c8c021ef8_s7e4 {
    char unknown0[0x34];
    int f34;
};
struct S_vv1 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c029a48(void *, int);
void operation_8c1d77d4(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    (&frame)->f0a = 0;
    (&frame)->f08 = 0;
    (&frame)->f06 = 0;
    (&frame)->f04 = 0;
    (&frame)->f02 = 0;
    (&frame)->f00 = 0;
    (&frame)->f14 = 0;
    (&frame)->f12 = 0;
    (&frame)->f10 = 0;
    (&frame)->f0e = 0;
    (&frame)->f0c = 0;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0 && (t1 + 0x7e4) != 0) {
        v1 = (S_vv1 *)o->f30->f14;
        if (((((S_c8c021ef8_s7e4 *)((char *)t1 + 0x7e4))->f34 & 0x10)) == 0) {
            t2 = operation_8c029a48((void *)t1, (int)(&frame));
            if (t2 != 0) {
                v1->f20 = (&frame)->f04;
            }
        }
    }
}
