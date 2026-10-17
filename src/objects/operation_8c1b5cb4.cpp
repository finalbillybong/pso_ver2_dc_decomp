typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_0 S_vv8_0;
typedef struct S_x62048 S_x62048;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
    char unknown3b4[0x24];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct S_vv8 {
    S_vv8_0 *f00;
};
struct S_L8c3268ec {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x62048 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3268ec g_8c3268ec;
extern "C" void call_8c05fbf8(int, int, int, int);
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b5cb4(Object *o)
{
    Frame frame;
    int v7;
    int v6;
    S_vv8 *v8;
    int v13;
    int t1;
    if (o->f3a0 == 0x2d) {
        call_8c05fbf8(0x30011, (int)((int)o + o->f3b0 * 0x18 + 0x444), 0, 1);
    }
    if (!(--o->f3a0 >= 0)) {
        o->f390 = 1;
        v7 = (int)8;
        v6 = (int)0x3f8;
        while (0xd > v7) {
            v8 = (S_vv8 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v7 << 2))) + v6);
            if (v8->f00 != 0) {
                mark_effect_for_release((void *)(v8->f00));
                v8->f00 = (S_vv8_0 *)0;
            }
            v7 = (int)(v7 + 1);
        }
        o->f3d8 = 5;
        v13 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
        if (v13 != -1) {
            o->f3e4 = (int)v13;
            o->f3e8 = 0.0f;
            o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v13 << 5)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x62048 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
