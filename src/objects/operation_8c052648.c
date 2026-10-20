typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct Arg1 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct Frame {
    int f00;
    int f04;
    Vector3 f08;
    int f14;
    int f18;
    int f1c;
    Vector3 f20;
    int f2c;
    int f30;
    int f34;
    char unknown38[0x28];
};
struct S_vv5 {
    int f00;
    int f04;
};
struct S_vv8 {
    int f00;
    int f04;
};
extern float squared_distance_xz(void *, void *);
typedef struct Blk24 { int fdc; int fe0; Vector3 pos; int f64; } Blk24;
typedef struct Pair24 { Blk24 b; Blk24 a; } Pair24;
extern int call_8c052750(Blk24, Blk24);
extern void operation_8c053d34(int);
int operation_8c052648(Object *o, Arg1 *a1, float f0)
{
    Pair24 frame;
    int v1;
    int v2;
    float t1;
    int t2;
    if (a1 != (void *)o && a1 != 0 && ((o->f34 & 0x800)) == 0 && ((a1->f34 & -0x7ffff800)) == 0) {
        t1 = squared_distance_xz((void *)(&o->f3c), (void *)(&a1->f3c));
        if (t1 > f0) {
            return 0;
        }
        v1 = (int)o->fdc;
        if (v1 != 0) {
            v2 = (int)a1->fdc;
            if (v2 != 0) {
                frame.a.fdc = v1;
                frame.a.fe0 = (int)(o->fe0);
                frame.a.pos = *(Vector3 *)&o->f3c;
                frame.a.f64 = (int)(o->f64);
                frame.b.fdc = v2;
                frame.b.fe0 = (int)(a1->fe0);
                frame.b.pos = *(Vector3 *)&a1->f3c;
                frame.b.f64 = (int)(a1->f64);
                t2 = call_8c052750(frame.a, frame.b);
                if (t2 != 0) {
                    operation_8c053d34((int)a1);
                    return t2;
                }
            }
        }
    }
    return 0;
}
