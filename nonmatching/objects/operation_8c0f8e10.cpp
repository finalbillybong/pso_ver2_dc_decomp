/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8e10
 * function: operation_8c0f8e10
 * language: c++
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 12 of 82 reference instruction lines
 * differing bytes: 49
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
typedef struct S_x38496 S_x38496;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0xc];
    float f54;
    char unknown58[0x4];
    float f5c;
    char unknown60[0x340];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
    char unknown3b0[0x34];
    int f3e4;
};
struct Frame {
    Vector3 f00;
};
struct S_x38496 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" float object_random_fraction(void *);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0f8e10(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    if (!(--*(int *)((char *)o + 0x3ac) > 0)) {
        t1 = call_8c04a52c(o, 0, 200.0f);
        if ((unsigned short)t1 == 0xffff) {
            if (++*(int *)((char *)o + 0x3e4) >= 5) {
                o->f3c = o->f54;
                o->f44 = o->f5c;
                o->f3e4 = 5;
            }
            t2 = object_random_fraction((void *)o);
            o->f3ac = (int)(t2 * 15.0f) + 0xf;
            return;
        }
        o->f3a0 = 1;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x38496 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((Frame *)((&frame)));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
