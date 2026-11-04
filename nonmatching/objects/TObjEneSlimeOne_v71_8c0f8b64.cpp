/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8b64
 * function: TObjEneSlimeOne_v71_8c0f8b64
 * language: c++
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 12 of 36 reference instruction lines
 * differing bytes: 46
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneSlimeOne.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x36816 S_x36816;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
struct Frame {
    Vector3 f00;
};
struct S_x36816 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void call_8c18e6fc(Frame *);
extern "C" void TObjEneSlimeOne_v71_8c0f8b64(Object *o)
{
    Frame frame;
    if (o->f3a0 != 0xd) {
        o->f3a0 = 0xd;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x36816 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
