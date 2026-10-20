typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
typedef struct S_vv2 S_vv2;
typedef struct S_vv25 S_vv25;
typedef struct S_vv25_0 S_vv25_0;
typedef struct S_x9504 S_x9504;
typedef struct Block_frame_10 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x6];
    Vector3 f10;
    char unknown1c[0x24];
} Block_frame_10;
struct Object {
    char unknown0[0x390];
    int f390;
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
    char unknown3b4[0x18];
    int f3cc;
    int f3d0;
    char unknown3d4[0x4];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct Frame {
    Vector3 f00;
    int f0c;
    Block_frame_10 f10;
};
struct S_vv2 {
    Vector3 f00;
};
struct S_vv25 {
    S_vv25_0 *f00;
};
struct S_L8c3268ec {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x9504 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Block64 g_8c4e2290;
extern S_L8c3268ec g_8c3268ec;
extern "C" int operation_8c1ae1ec(void *, void *, void *);
extern "C" int create_context_actor_8c1bbe54(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void call_8c05fbf8(int, S_vv2 *, int, int);
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b58ec(Object *o)
{
    Frame frame;
    S_vv2 *p;
    int v1;
    int v24;
    int v23;
    S_vv25 *v25;
    int v30;
    p = (S_vv2 *)((char *)o + o->f3b0 * 0x18 + 0x444);
    v1 = o->f3a0;
    if (0x106 > v1 && (v1 & 0x1f) == 0 && o->f3d0 < o->f3cc) {
        *(Block64 *)&(&frame)->f10 = *(Block64 *)&g_8c4e2290;
        if (operation_8c1ae1ec((void *)(o->f394), (void *)(&(&frame)->f10), (void *)(((char *)(&frame) + 0x16))) != 0) {
            (&frame)->f0c = (int)(o->f394);
            (&frame)->f10.f08 = 1;
            *(Vector3 *)&(&frame)->f10.f10 = *(Vector3 *)&p->f00;
            if (create_context_actor_8c1bbe54((void *)(&(&frame)->f0c)) != 0) {
                create_effect_777c((void *)p, 0x7d);
                call_8c05fbf8(0x30010, p, 0, 1);
                o->f3d0 += 1;
            }
        }
    }
    if (o->f3a0 == 0x106) {
        call_8c05fbf8(0x3000f, p, 0, 1);
    }
    if (!(--o->f3a0 >= 0)) {
        o->f3d8 = 5;
        o->f390 = 7;
        v24 = (int)8;
        v23 = (int)0x3f8;
        while (0xd > v24) {
            v25 = (S_vv25 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v24 << 2))) + v23);
            if (v25->f00 != 0) {
                mark_effect_for_release((void *)(v25->f00));
                v25->f00 = (S_vv25_0 *)0;
            }
            v24 = (int)(v24 + 1);
        }
        o->f3d8 = 5;
        v30 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
        if (v30 != -1) {
            o->f3e4 = (int)v30;
            o->f3e8 = 0.0f;
            o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v30 << 5)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x9504 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
        if (call_8c18e6fc((Frame *)((&frame))) != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
