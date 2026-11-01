/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9d2c
 * function: operation_8c0f9d2c
 * language: c++
 * reference size: 268 bytes
 * compiled size: 264 bytes (-1.5%)
 * differing lines: 12 of 101 reference instruction lines
 * differing bytes: 115
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
typedef struct Arg0_64 Arg0_64;
typedef struct S_x10736 S_x10736;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x338];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
    char unknown3b0[0x30];
    int f3e0;
};
struct Frame {
    Vector3 f00;
    float f0c;
    char unknown10[0x4];
    float f14;
};
struct S_x10736 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" int operation_8c04a638(Object *, void *, float);
extern "C" float call_8c130334(int, float, float);
extern "C" int angle_difference(int, int);
extern "C" void call_8c18e6fc(Frame *);
extern "C" void operation_8c0f9d2c(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int t2;
    float t3;
    v1 = (int)0;
    o->f64 = (Arg0_64 *)((int)o->f64 + o->f3e0);
    o->f34 |= 0x2000000;
    t1 = operation_8c04a638(o, (void *)(&(&frame)->f0c), 500.0f);
    o->f34 &= -0x2000001;
    if ((unsigned short)t1 != 0xffff) {
        t3 = call_8c130334((int)((unsigned short)t1), (&frame)->f0c, (&frame)->f14);
        v2 = (int)(int)(t3 * 65536.0f / 6.28318405f);
        t2 = angle_difference((int)(o->f64), v2);
        if (0x444 > t2) {
            o->f64 = (Arg0_64 *)(int)v2;
            v1 = (int)1;
        }
    }
    *(int *)((char *)o + 0x3ac) -= 1;
    if (v1 == 0 && o->f3ac >= 0) {
        return;
    }
    o->f3a0 = 9;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x10736 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
    call_8c18e6fc((Frame *)((&frame)));
    (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
}
