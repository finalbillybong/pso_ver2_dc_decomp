typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_x72400 S_x72400;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0xb4];
    float ff8;
    char unknownfc[0x294];
    int f390;
    int f394;
    char unknown398[0x38];
    int f3d0;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_vv5 {
    Vector3 f00;
};
struct S_x72400 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern float g_8c4db1c0;
extern char g_8c4db1c4;
extern "C" char g_8c3169b8[];
extern "C" char g_8c316c90[];
extern "C" void create_effect_777c(void *, int);
extern "C" void create_effect_at_8c108394(void *, int);
extern "C" void create_resource_effect_8c108170(void *, int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c15ff80(Object *o)
{
    Frame frame;
    float v4;
    int v23;
    int v21;
    S_vv5 *v5;
    int v20;
    int t1;
    *(int *)((char *)o + 0x3d0) -= 1;
    if (g_8c4db1c4 == 0) {
        g_8c4db1c0 = *(float *)(g_8c3169b8 + 0x68);
        g_8c4db1c4 = 1;
    }
    v4 = (float)o->ff8;
    if (!(24.0f > v4) && (g_8c4db1c0 + 24.0f) > v4) {
        v5 = (S_vv5 *)((char *)o + 0x3c0);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v5->f00;
        (&frame)->f0c.f04 += 5.0f;
        create_effect_777c((void *)(&(&frame)->f0c), 0xf3);
    }
    if (!(o->f3d0 > 0x78)) {
        if (o->f3d0 == 0x78) {
            create_effect_at_8c108394((void *)(((char *)o + 0x3c0)), 0x78);
            create_resource_effect_8c108170((void *)(((char *)o + 0x3c0)), 6);
        }
        o->f40 += -0.15625f;
        if (!(o->f3d0 >= 0)) {
            v21 = (int)o->f390;
            v20 = (int)o->f394;
            if (v21 != v20) {
                o->f390 = (int)v20;
            }
            o->f394 = 8;
            v23 = (int)o->f394;
            if (v23 >= 0 && !(v23 >= 0x11)) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x72400 *)(v23 * 0x18 + g_8c316c90))->f00;
                t1 = call_8c18e6fc((Frame *)((&frame)));
                if (t1 != 0) {
                    (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
                }
            }
        }
    }
}
