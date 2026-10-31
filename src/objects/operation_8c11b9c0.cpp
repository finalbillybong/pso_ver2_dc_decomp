typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct S_x20336 S_x20336;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x6c];
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
};
struct S_x20336 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c310bd8[];
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" int operation_8c11b9c0(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int t1;
    switch (o->f390) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 10:
    case 11:
        return 0;
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    }
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
            goto L_8c11ba8c;
        }
    }
    o->f390 = 0xa;
    if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
        operation_8c11afa0((int)o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x20336 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
    return 1;
L_8c11ba8c:;
    return 0;
}
