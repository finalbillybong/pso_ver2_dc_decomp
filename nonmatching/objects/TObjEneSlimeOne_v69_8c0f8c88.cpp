/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8c88
 * function: TObjEneSlimeOne_v69_8c0f8c88
 * language: c++
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 12 of 40 reference instruction lines
 * differing bytes: 54
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
typedef struct S_x98256 S_x98256;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x368];
    int f3a0;
};
struct Frame {
    Vector3 f00;
};
struct S_x98256 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void call_8c18e6fc(Frame *);
extern "C" void TObjEneSlimeOne_v69_8c0f8c88(Object *o)
{
    Frame frame;
    if (o->f3a0 != 0xb) {
        o->f34 &= -0x101;
        o->f3a0 = 0xb;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x98256 *)(o->f3a0 * 0x18 + 0x8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
