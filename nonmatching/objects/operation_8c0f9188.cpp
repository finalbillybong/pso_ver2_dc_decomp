/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9188
 * function: operation_8c0f9188
 * language: c++
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 54 of 155 reference instruction lines
 * differing bytes: 218
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
typedef struct S_L8c285bc8 S_L8c285bc8;
typedef struct S_L8c285bd4 S_L8c285bd4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x63632 S_x63632;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
    char unknown3b0[0x4];
    float f3b4;
    char unknown3b8[0x4];
    float f3bc;
    float f3c0;
    float f3c4;
    float f3c8;
    float f3cc;
};
struct S_L8c285bd4 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c285bc8 {
    float f00;
    float f04;
    float f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x63632 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c285bc8 g_8c285bc8;
extern S_L8c285bd4 g_8c285bd4;
extern "C" char g_8c30a484[];
extern "C" float njSin_8c37eb0c(int);
extern "C" void hs_8c18e6fc(Frame *);
extern "C" void operation_8c0f9188(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    float v29;
    float v30;
    float t1;
    v1 = (float)1.0f;
    o->f3c0 = (v1 - o->f3b4) * -2.5f;
    o->f3c4 = ((&g_8c285bd4)->f00 - (&g_8c285bc8)->f00) * o->f3b4 + (&g_8c285bc8)->f00;
    o->f3c8 = ((&g_8c285bd4)->f04 - (&g_8c285bc8)->f04) * o->f3b4 + (&g_8c285bc8)->f04;
    o->f3cc = ((&g_8c285bd4)->f08 - (&g_8c285bc8)->f08) * o->f3b4 + (&g_8c285bc8)->f08;
    v2 = (float)o->f3b4;
    if (v2 > 0.8f) {
        v1 = (float)(v1 - v2);
        v1 = (float)(v1 / 0.199999988f);
    }
    t1 = njSin_8c37eb0c(o->f3ac << 0xa);
    v29 = (float)(v1 * (t1 * 0.15f));
    o->f3c4 *= v29 + 1.0f;
    o->f3cc *= 1.0f - v29;
    o->f3ac += 1;
    if (!(0.5f > o->f3b4)) {
        o->f3bc = 1.0f;
    } else {
        o->f3bc = o->f3b4 * 2.0f;
    }
    v30 = (float)(o->f3b4 + -0.0111111114f);
    o->f3b4 = v30;
    if (0.0f > v30) {
        o->f3a0 = 0;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x63632 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        hs_8c18e6fc((&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
