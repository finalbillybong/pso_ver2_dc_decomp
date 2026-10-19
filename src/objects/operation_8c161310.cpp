typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x2272 S_x2272;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29e];
    int f390;
    int f394;
    char unknown398[0x38];
    int f3d0;
};
struct S_c8c1794c8 {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Vector3 f00;
};
struct S_x2272 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" void create_effect_b03c8_8c0b9444(void *, void *, void *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c161310(Object *o)
{
    Frame frame;
    int v14;
    int v12;
    int v5;
    int v11;
    S_c8c1794c8 *t1;
    int t2;
    if (--*(int *)((char *)o + 0x3d0) == 0) {
        o->ff0 = 4;
    }
    if ((float)o->f3d0 == -15.0f) {
        t1 = record30_8c1794c8(0x33);
        if (t1->f18 < 0 || t1->f18 > 0xe) {
            v5 = (int)0;
        } else {
            v5 = (int)t1->f18;
        }
        create_effect_b03c8_8c0b9444((void *)o, (void *)(((char *)o + 0x3c)), (void *)v5);
        call_8c05fbf8(0x30031, (void *)(((char *)o + 0x3c)), 0, 0);
    }
    if (((o->fe8 & 0x10)) != 0) {
        v12 = (int)o->f390;
        v11 = (int)o->f394;
        if (v12 != v11) {
            o->f390 = (int)v11;
        }
        o->f394 = 2;
        v14 = (int)o->f394;
        if (v14 >= 0 && !(v14 >= 0x11)) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x2272 *)(v14 * 0x18 + g_8c316c90))->f00;
            t2 = call_8c18e6fc((Frame *)((&frame)));
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
