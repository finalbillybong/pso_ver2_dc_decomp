/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa5d0
 * function: operation_8c0fa5d0
 * language: c++
 * reference size: 208 bytes
 * compiled size: 204 bytes (-1.9%)
 * differing lines: 26 of 86 reference instruction lines
 * differing bytes: 131
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
typedef struct S_x19696 S_x19696;
typedef struct S_x98624 S_x98624;
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
struct S_x98624 {
    Vector3 f00;
};
struct S_x19696 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" void call_8c18e6fc(void *);
extern "C" void operation_8c0fa5d0(Object *o)
{
    Frame frame;
    int v1;
    int v7;
    v1 = (int)((int)o->f3b0 + 1);
    o->f3b0 = (int)v1;
    if (((v1 & 3)) == 0) {
        create_effect_777c((void *)(((char *)o + 0x324)), 0xe0);
    }
    if (((o->fe8 & 0x10)) != 0) {
        v7 = (int)(((o->f34 & 0x10)) != 0);
        if (v7 != 0) {
            o->f3a0 = 7;
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x98624 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            call_8c18e6fc((void *)(&(&frame)->f0c));
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f3a0 = 6;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x19696 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
