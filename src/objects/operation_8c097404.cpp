typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    int f2c;
    int f30;
    int f34;
    int f38;
};
struct Arg0_20 {
    char unknown0[0x30];
    char f30;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c300de0[];
extern "C" int operation_8c09b33c(void);
extern "C" int operation_8c09a640(int);
extern "C" void call_8c05fbf8(int, int, int, int);
extern "C" int call_8c09a72c(int);
extern "C" void operation_8c097404(Object *o)
{
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c09b33c();
    if (t1 != 0) {
        if (o->f20->f30 == -1) {
            t2 = operation_8c09a640(8);
            if (t2 != 0) {
                call_8c05fbf8(0x50004, 0, 0, 0);
                o->f38 = 7;
                o->f30 = 6;
                return;
            }
        }
        t3 = call_8c09a72c(0x20);
        if (t3 != 0) {
            v3 = (int)((int)o->f34 + 1);
            o->f34 = (int)v3;
            if (v3 >= o->f2c) {
                o->f34 = 0;
            }
            call_8c05fbf8(0x50000, 0, 0, 0);
        } else {
            t4 = call_8c09a72c(0x10);
            if (t4 != 0) {
                if (!(--o->f34 >= 0)) {
                    o->f34 = (int)o->f2c + -1;
                }
                call_8c05fbf8(0x50000, 0, 0, 0);
            }
        }
        t5 = operation_8c09a640(4);
        if (t5 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((int)(*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) * 0x14 + g_8c300de0) + 8)))();
        }
    }
}
