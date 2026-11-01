/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9950
 * function: operation_8c0f9950
 * language: c++
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 12 of 50 reference instruction lines
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct S_x86880 S_x86880;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    Arg0_3a4 *f3a4;
    char unknown3a8[0x8];
    int f3b0;
};
struct Frame {
    Vector3 f00;
};
struct S_x86880 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" int operation_8c0fffd8(void *);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0f9950(Object *o)
{
    Frame frame;
    int t1;
    if (--o->f3b0 == 0) {
        create_effect_777c((void *)(((char *)o + 0x324)), 0xcd);
    }
    t1 = operation_8c0fffd8((void *)(o->f3a4));
    if (t1 == 1) {
        o->f3a0 = 3;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x86880 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
