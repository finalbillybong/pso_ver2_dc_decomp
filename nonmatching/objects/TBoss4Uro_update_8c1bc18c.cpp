/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bc18c
 * function: TBoss4Uro_update_8c1bc18c
 * language: c++
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 2 of 268 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327de4 S_L8c327de4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x85616 S_x85616;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x11c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    Arg0_394 *f394;
    char unknown398[0x38];
    Arg0_3d0 *f3d0;
    int f3d4;
    Arg0_3d8 *f3d8;
    int f3dc;
};
struct Arg0_394 {
    char unknown0[0x398];
    int f398;
    char unknown39c[0xc];
    int f3a8;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Vector3 f18;
};
struct S_L8c327de4 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
};
struct S_x85616 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c2875c0;
extern Vector3 g_8c327dc0;
extern Vector3 g_8c327dcc;
extern Vector3 g_8c327dd8;
extern char g_8c4e2b41;
extern S_L8c327de4 g_8c327de4;
extern "C" char gc_8c327de4[];
extern "C" int call_8c18e6fc(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void operation_8c1ad004(void *, int, int);
extern "C" void operation_8c1bbd80(Object *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c027090(Object *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void TBoss4Uro_update_8c1bc18c(Object *o)
{
    Frame frame;
    int v17;
    int v22;
    int v31;
    int t1;
    float t2;
    if (o->f390 != 3 && o->f394->f398 != 6) {
        o->f394->f3a8 += 1;
        o->f390 = 3;
        return;
    }
    if (g_8c4e2b41 == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c327de4 + 0x0) = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c327de4 + 0xc) = *(Vector3 *)&(&frame)->f00;
        *(Vector3 *)&*(Vector3 *)(gc_8c327de4 + 0x18) = *(Vector3 *)&g_8c327dc0;
        *(Vector3 *)&*(Vector3 *)(gc_8c327de4 + 0x24) = *(Vector3 *)&g_8c327dcc;
        *(Vector3 *)&*(Vector3 *)(gc_8c327de4 + 0x30) = *(Vector3 *)&g_8c327dd8;
        g_8c4e2b41 = 1;
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x85616 *)(o->f390 * 0xc + gc_8c327de4))->f00;
    t1 = call_8c18e6fc((void *)(&(&frame)->f18));
    if (t1 == 0) {
        return;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
    if (o->f390 == 2) {
        t2 = njSin_8c37eb0c((void *)(o->f3d8));
        o->f3c.f04 += t2 * 0.1f;
        o->f3d8 = (Arg0_3d8 *)((int)o->f3d8 + o->f3dc);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
    v17 = (int)(o->f390 != 3);
    if (v17 != 0) {
        (&frame)->f0c.f04 += 10.0f;
    } else {
        (&frame)->f0c.f04 += -250.0f;
    }
    call_8c0a7608((void *)(o->f3d0), (void *)(&(&frame)->f0c));
    v22 = (int)(o->f390 != 3);
    if (v22 != 0) {
        o->f64 = (Arg0_64 *)((int)o->f64 + 0x1111);
    }
    operation_8c1ad004((void *)(&o->f3c), (int)(o->f60), (int)(o->f64));
    operation_8c1bbd80(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    v31 = (int)(o->f390 != 3);
    if (v31 != 0) {
        refresh_follow_effect_8c052180((void *)o);
        operation_8c027090(o);
        minimap_add_marker_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
    }
    o->f3d4 += 1;
}
