/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9810
 * function: operation_8c0f9810
 * language: c++
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 26 of 86 reference instruction lines
 * differing bytes: 134
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct S_x51792 S_x51792;
typedef struct S_x82672 S_x82672;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x368];
    int f3a0;
    Arg0_3a4 *f3a4;
    char unknown3a8[0x8];
    int f3b0;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x82672 {
    Vector3 f00;
};
struct S_x51792 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" int operation_8c0fffd8(void *);
extern "C" void hs_8c18e6fc(void *);
extern "C" void hs_8c18e6fc_1(Frame *);
extern "C" void operation_8c0f9810(Object *o)
{
    Frame frame;
    int v6;
    int t1;
    if (--o->f3b0 == 0) {
        create_effect_777c(((char *)o + 0x324), 0xcd);
    }
    t1 = operation_8c0fffd8(o->f3a4);
    if (t1 == 1) {
        v6 = (int)(((o->f34 & 0x10)) != 0);
        if (v6 != 0) {
            o->f3a0 = 7;
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x82672 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            hs_8c18e6fc(&(&frame)->f0c);
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f3a0 = 6;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x51792 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        hs_8c18e6fc_1((&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
