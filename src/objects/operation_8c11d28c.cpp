typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct S_x31056 S_x31056;
typedef struct S_x57872 S_x57872;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x10];
    int f3a4;
    char unknown3a8[0x58];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_400 {
    char unknown0[0x394];
    int f394;
};
struct Arg0_404 {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x31056 {
    Vector3 f00;
};
struct S_x57872 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(void *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c11d28c(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int t1;
    int t2;
    v2 = (int)1;
    if (o->f400->f394 != 7 && o->f400->f394 != 8) {
        v2 = (int)0;
    }
    if (v2 == 0) {
        v4 = (int)1;
        if (o->f404->f394 != 7 && o->f404->f394 != 8) {
            v4 = (int)0;
        }
        if (v4 == 0) {
            goto L_8c11d310;
        }
    }
    o->f390 = 0xa;
    if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
        operation_8c11afa0((int)o);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x31056 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
L_8c11d310:;
            if (!(--*(int *)((char *)o + 0x3a4) > 0)) {
                o->f390 = 0xc;
                if (!(o->f390 >= 0)) {
                    return;
                }
                if (o->f390 >= 0xe) {
                    return;
                }
                operation_8c11afa0((int)o);
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x57872 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
                t2 = call_8c18e6fc((void *)(&frame));
                if (t2 == 0) {
                    return;
                }
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
                return;
            }
            if (o->f3a4 == 0x13) {
                call_8c05fbf8(0x30032, (void *)(((char *)o + 0x3c)), 0, 0);
            }
        }
    }
}
