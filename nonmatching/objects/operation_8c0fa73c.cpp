/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa73c
 * function: operation_8c0fa73c
 * language: c++
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 12 of 36 reference instruction lines
 * differing bytes: 48
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x53072 S_x53072;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x2b4];
    int f3a0;
};
struct Frame {
    Vector3 f00;
};
struct S_x53072 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0fa73c(Object *o)
{
    Frame frame;
    if (((o->fe8 & 0x10)) != 0) {
        o->f3a0 = 5;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x53072 *)(o->f3a0 * 0x18 + 0x8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
