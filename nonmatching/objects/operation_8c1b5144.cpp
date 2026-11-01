/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b5144
 * function: operation_8c1b5144
 * language: c++
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 24 of 177 reference instruction lines
 * differing bytes: 46
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
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
typedef struct S_x60992 S_x60992;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    int f390;
    char unknown394[0xc];
    int f3a0;
    float f3a4;
    char unknown3a8[0x30];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Vector3 f18;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_L8c3268ec {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x60992 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c326e80;
extern Vector3 g_8c326e8c;
extern S_L8c3268ec g_8c3268ec;
extern "C" float njCos_8c38c154(int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b5144(Object *o)
{
    Frame frame;
    int v2;
    int v9;
    int v1;
    S_vv3 *v3;
    int v11;
    float t1;
    int t2;
    t1 = njCos_8c38c154((int)((int)((1.0f - (float)o->f3a0 / 75.0f) * 32768.0f)));
    o->f3a4 = (1.0f - t1) * 0.5f;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c326e80;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326e8c;
        *(Vector3 *)&(&frame)->f0c = *p_;
    }
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(&(&frame)->f18));
    (&frame)->f0c.f00 *= o->f3a4;
    (&frame)->f0c.f04 *= o->f3a4;
    (&frame)->f0c.f08 *= o->f3a4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f18;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&(&frame)->f0c));
    if (!(--o->f3a0 >= 0)) {
        o->f390 = 1;
        v1 = (int)0x3f8;
        v9 = (int)8;
        goto L_8c1b522c;
        v2 = (int)8;
L_8c1b5210:;
        v3 = (S_vv3 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v2 << 2))) + v1);
        if (v3->f00 != 0) {
            mark_effect_for_release((void *)(v3->f00));
            v3->f00 = (S_vv3_0 *)0;
        }
        v9 = (int)(v2 + 1);
L_8c1b522c:;
        v2 = (int)v9;
        if (0xd > v9) {
            goto L_8c1b5210;
        }
        o->f3d8 = 5;
        v11 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
        if (v11 != -1) {
            o->f3e4 = (int)v11;
            o->f3e8 = 0.0f;
            o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v11 << 5)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x60992 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
        t2 = call_8c18e6fc((Frame *)((&frame)));
        if (t2 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
