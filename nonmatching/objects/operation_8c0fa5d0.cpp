/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa5d0
 * function: operation_8c0fa5d0
 * language: c++
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 26 of 86 reference instruction lines
 * differing bytes: 128
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
typedef struct S_x42128 S_x42128;
typedef struct S_x74224 S_x74224;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x2b4];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x42128 {
    Vector3 f00;
};
struct S_x74224 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" void hs_8c18e6fc(void *);
extern "C" void hs_8c18e6fc_1(Frame *);
extern "C" void operation_8c0fa5d0(Object *o)
{
    Frame frame;
    int v1;
    int v7;
    v1 = (int)((int)o->f3b0 + 1);
    o->f3b0 = (int)v1;
    if (((v1 & 3)) == 0) {
        create_effect_777c(((char *)o + 0x324), 0xe0);
    }
    if (((o->fe8 & 0x10)) != 0) {
        v7 = (int)(((o->f34 & 0x10)) != 0);
        if (v7 != 0) {
            o->f3a0 = 7;
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x42128 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            hs_8c18e6fc(&(&frame)->f0c);
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f3a0 = 6;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x74224 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        hs_8c18e6fc_1((&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
