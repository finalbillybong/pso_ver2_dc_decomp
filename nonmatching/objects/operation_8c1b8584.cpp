/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b8584
 * function: operation_8c1b8584
 * language: c++
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 26 of 140 reference instruction lines
 * differing bytes: 76
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
typedef struct S_L8c327758 S_L8c327758;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x45808 S_x45808;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x14];
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
    char unknown3b8[0x8];
    unsigned short f3c0;
    unsigned short f3c2;
    char unknown3c4[0x28];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
};
struct S_L8c327758 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x45808 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c327758 g_8c327758;
extern "C" void operation_8c1b841c(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b8584(Object *o, int a1)
{
    Frame frame;
    int v49;
    int v5;
    int t1;
    o->f3ac = a1 >> 1 >> 1 >> 1 >> 1 >> 1 & 0x1f;
    o->f3a8 = a1 >> 0xa & 0x1f;
    o->f3b4 = a1 >> 0xf & 0xf;
    o->f3b0 = (short)((unsigned int)a1 >> 0x10) >> 1 >> 1 >> 1 & 0xf;
    o->f3c0 = a1 >> 0x17 & 0xf;
    if (o->f3c0 == 0xf) {
        o->f3c0 = 0xffff;
    }
    o->f3c2 = (char)((unsigned int)(unsigned int)a1 >> 8 >> 0x10) >> 1 >> 1 >> 1 & 0xf;
    if (o->f3c2 == 0xf) {
        o->f3c2 = 0xffff;
    }
    v49 = (int)(a1 & 0x1f);
    if (v49 < 0 || v49 >= 0x11) {
        return;
    }
    operation_8c1b841c((int)o);
    o->f390 = (int)v49;
    v5 = (int)*(int *)((char *)&g_8c327758.f04 + (o->f390 * 0x2c));
    if (v5 != -1) {
        o->f3ec = (int)v5;
        o->f3f0 = 0.0f;
        o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v5 * 0x14)));
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x45808 *)((char *)&g_8c327758.f08 + o->f390 * 0x2c))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
