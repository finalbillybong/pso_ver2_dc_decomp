/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa108
 * function: operation_8c0fa108
 * language: c++
 * reference size: 272 bytes
 * compiled size: 268 bytes (-1.5%)
 * differing lines: 26 of 110 reference instruction lines
 * differing bytes: 152
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
typedef struct S_x80464 S_x80464;
typedef struct S_x98224 S_x98224;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x368];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
    int f3b0;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x80464 {
    Vector3 f00;
};
struct S_x98224 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void TObjEneSlimeWaterBomb_create_8c0fb130(int, int);
extern "C" void call_8c18e6fc(void *);
extern "C" void operation_8c0fa108(Object *o)
{
    Frame frame;
    int v10;
    *(int *)((char *)o + 0x3b0) -= 1;
    if (o->f3b0 > 0) {
        create_effect_777c((void *)(((char *)o + 0x324)), 0xff);
    } else {
        if (o->f3b0 == 0) {
            play_se_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 0);
            create_effect_777c((void *)(((char *)o + 0x324)), 0xe2);
            TObjEneSlimeWaterBomb_create_8c0fb130((int)o, (int)o);
        }
    }
    if (!(--o->f3ac > 0)) {
        v10 = (int)(((o->f34 & 0x10)) != 0);
        if (v10 != 0) {
            o->f3a0 = 7;
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x80464 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            call_8c18e6fc((void *)(&(&frame)->f0c));
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
        o->f3a0 = 5;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x98224 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
