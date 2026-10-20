typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c052750 S_c8c052750;
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
typedef struct Rec {
    int f00;
    int f04;
    Vector3 f08;
    int f14;
} Rec;
struct Frame {
    Rec a;
    Rec b;
};
struct S_vv5 {
    int f00;
    int f04;
};
struct S_vv8 {
    int f00;
    int f04;
};
struct S_c8c052750 {
    char unknown0[0x18];
    int f18;
};
extern float squared_distance_xz(void *, void *);
extern S_c8c052750 *call_8c052750(Rec, Rec);
extern void operation_8c053d34(int);
S_c8c052750 *operation_8c052434(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v2;
    S_c8c052750 *t2;
    if (a1 != (void *)o && a1 != 0 && ((o->f34 & 0x800)) == 0 && ((a1->f34 & -0x7ffff800)) == 0) {
        if (squared_distance_xz((void *)(&o->f3c), (void *)(&a1->f3c)) > 10000.0f) {
            return 0;
        }
        v1 = (int)o->fdc;
        if (v1 != 0) {
            v2 = (int)a1->fdc;
            if (v2 != 0) {
                (&frame)->b.f00 = v1;
                (&frame)->b.f04 = (int)(o->fe0);
                (&frame)->b.f08 = o->f3c;
                (&frame)->b.f14 = (int)(o->f64);
                (&frame)->a.f00 = v2;
                (&frame)->a.f04 = (int)(a1->fe0);
                (&frame)->a.f08 = a1->f3c;
                (&frame)->a.f14 = (int)(a1->f64);
                t2 = call_8c052750((&frame)->b, (&frame)->a);
                if (t2 != 0) {
                    operation_8c053d34((int)a1);
                    t2->f18 |= 0x8000000;
                    return t2;
                }
            }
        }
    }
    return 0;
}
