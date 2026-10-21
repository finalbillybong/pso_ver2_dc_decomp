typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Rec {
    int f00;
    int f04;
    Vector3 f08;
    int f14;
} Rec;
typedef struct Frame {
    Rec v;
    Rec a;
} Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
struct Arg1 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct Arg2 {
    Vector3 f00;
};
struct S_vv3 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
extern int g_8c467870;
extern int call_8c052750(Rec, Rec);
int operation_8c052b5c(int a0, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int v1;
    int v2;
    S_vv3 *v3;
    int v4;
    if (a1 != 0) {
        v1 = a1->fdc;
        if (v1 != 0) {
            frame.a.f00 = v1;
            frame.a.f04 = a1->fe0;
            frame.a.f08 = a2->f00;
            frame.a.f14 = a1->f64;
            for (v2 = 0; v2 < g_8c467870; v2++) {
                v3 = *(S_vv3 **)((char *)0x8c467240 + (v2 << 2));
                if (v3 != 0 && v3 != (S_vv3 *)a1) {
                    v4 = v3->fdc;
                    if (v4 != 0) {
                        frame.v.f00 = v4;
                        frame.v.f04 = v3->fe0;
                        frame.v.f08 = v3->f3c;
                        frame.v.f14 = v3->f64;
                        if (call_8c052750(frame.a, frame.v) != 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
