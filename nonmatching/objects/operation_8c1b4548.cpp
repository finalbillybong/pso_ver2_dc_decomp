/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b4548
 * function: operation_8c1b4548
 * language: c++
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 20 of 164 reference instruction lines
 * differing bytes: 206
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
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_x24528 S_x24528;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x14];
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
    int f3b8;
    int f3bc;
    char unknown3c0[0x18];
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
struct S_x24528 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3268ec g_8c3268ec;
extern "C" void grid_position_8c1b474c(void *);
extern "C" void mark_effect_for_release(void *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b4548(Object *o, int a1)
{
    Frame frame;
    int v2;
    int v1;
    S_vv3 *v3;
    int v6;
    int t1;
    o->f3ac = a1 >> 4 & 3;
    o->f3a8 = a1 >> 6 & 3;
    o->f3b4 = a1 >> 8 & 3;
    o->f3b0 = a1 >> 0xa & 3;
    if (o->f3b4 > 2 || o->f3b0 > 2) {
        return;
    }
    o->f3b8 = a1 >> 0xc & 0xf;
    o->f3bc = (short)((unsigned int)a1 >> 0x10) & 0xf;
    grid_position_8c1b474c((void *)o);
    if ((a1 & 0xf) < 0 || (a1 & 0xf) >= 0xb) {
        return;
    }
    o->f390 = a1 & 0xf;
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
    v6 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
    if (v6 != -1) {
        o->f3e4 = (int)v6;
        o->f3e8 = 0.0f;
        o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v6 << 5)));
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x24528 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
