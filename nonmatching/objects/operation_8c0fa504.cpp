/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa504
 * function: operation_8c0fa504
 * language: c++
 * reference size: 96 bytes
 * compiled size: 92 bytes (-4.2%)
 * differing lines: 12 of 37 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x5808 S_x5808;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
};
struct Frame {
    Vector3 f00;
};
struct S_x5808 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0fa504(Object *o)
{
    Frame frame;
    if (!(--o->f3ac > 0)) {
        o->f3a0 = 5;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x5808 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
