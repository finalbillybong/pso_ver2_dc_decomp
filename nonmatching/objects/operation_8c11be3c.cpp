/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11be3c
 * function: operation_8c11be3c
 * language: c++
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 14 of 119 reference instruction lines
 * differing bytes: 22
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
typedef struct S_x76560 S_x76560;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x2e0];
    Vector3 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    float f398;
    char unknown39c[0x4];
    float f3a0;
    int f3a4;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_x76560 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11be3c(Object *o)
{
    Frame frame;
    int t1;
    o->f398 += -0.5f;
    call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x394)));
    if (!(o->f398 > 0.0f) && !(o->f3a0 < o->f40)) {
        o->f40 = o->f3a0;
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
        o->f390 = 3;
        if (!(o->f390 >= 0)) {
            return;
        }
        if (o->f390 >= 0xe) {
            return;
        }
        operation_8c11afa0((int)o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x76560 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
        t1 = call_8c18e6fc((Frame *)((&frame)));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        return;
    }
    *(int *)((char *)o + 0x3a4) += 1;
    if (((o->f3a4 & 7)) == 0 && o->f398 > 0.0f) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f324;
        (&frame)->f0c.f04 = o->f3a0 + 5.0f;
        create_effect_777c((void *)(&(&frame)->f0c), 0xf0);
    }
}
