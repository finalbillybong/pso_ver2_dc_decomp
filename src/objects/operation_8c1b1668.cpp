typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3262f8 S_L8c3262f8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_x82992 S_x82992;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x3c];
    int f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x8];
    int f3e4;
    int f3e8;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_L8c3262f8 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x82992 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3262f8 g_8c3262f8;
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b1668(Object *o, int a1)
{
    Frame frame;
    int v2;
    int v1;
    S_vv3 *v3;
    int v11;
    int t1;
    o->f390 = a1;
    v2 = (int)2;
    v1 = (int)0x42c;
    while (8 > v2) {
        v3 = (S_vv3 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v2 << 2))) + v1);
        if (v3->f00 != 0) {
            mark_effect_for_release((void *)(v3->f00));
            v3->f00 = (S_vv3_0 *)0;
        }
        v2 = (int)(v2 + 1);
    }
    if (o->f390 != 4) {
        o->f3e8 = 0;
    }
    v11 = (int)*(int *)((char *)&g_8c3262f8.f04 + (o->f390 * 0x2c));
    if (v11 != -1) {
        o->f3d0 = (int)v11;
        o->f3d8 = 0.0f;
        o->f3e4 = (int)(*(int *)((char *)0x8c326594 + (v11 << 4)));
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x82992 *)((char *)&g_8c3262f8.f08 + o->f390 * 0x2c))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
