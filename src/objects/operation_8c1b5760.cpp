typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_x5520 S_x5520;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x34];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_L8c3268ec {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x5520 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3268ec g_8c3268ec;
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b5760(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    S_vv3 *v3;
    int v9;
    int t1;
    if (!(--o->f3a0 >= 0)) {
        o->f390 = 4;
        v2 = (int)8;
        v1 = (int)0x3f8;
        while (0xd > v2) {
            v3 = (S_vv3 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v2 << 2))) + v1);
            if (v3->f00 != 0) {
                mark_effect_for_release((void *)(v3->f00));
                v3->f00 = (S_vv3_0 *)0;
            }
            v2 = (int)(v2 + 1);
        }
        o->f3d8 = 5;
        v9 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
        if (v9 != -1) {
            o->f3e4 = (int)v9;
            o->f3e8 = 0.0f;
            o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v9 << 5)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x5520 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
