/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9810
 * function: operation_8c0f9810
 * language: c++
 * reference size: 212 bytes
 * compiled size: 208 bytes (-1.9%)
 * differing lines: 26 of 86 reference instruction lines
 * differing bytes: 137
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct S_x78288 S_x78288;
typedef struct S_x88240 S_x88240;
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
struct S_x88240 {
    Vector3 f00;
};
struct S_x78288 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" int operation_8c0fffd8(void *);
extern "C" void call_8c18e6fc(void *);
extern "C" void operation_8c0f9810(Object *o)
{
    Frame frame;
    int v6;
    int t1;
    if (--o->f3b0 == 0) {
        create_effect_777c((void *)(((char *)o + 0x324)), 0xcd);
    }
    t1 = operation_8c0fffd8((void *)(o->f3a4));
    if (t1 == 1) {
        v6 = (int)(((o->f34 & 0x10)) != 0);
        if (v6 != 0) {
            o->f3a0 = 7;
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x88240 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            call_8c18e6fc((void *)(&(&frame)->f0c));
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f3a0 = 6;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x78288 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
