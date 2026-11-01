/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9a84
 * function: operation_8c0f9a84
 * language: c++
 * reference size: 540 bytes
 * compiled size: 536 bytes (-0.7%)
 * differing lines: 48 of 216 reference instruction lines
 * differing bytes: 240
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_39c_430 Arg0_39c_430;
typedef struct Arg0_39c_430_54 Arg0_39c_430_54;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_3e8 Arg0_3e8;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x81120 S_x81120;
typedef struct S_x82240 S_x82240;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x334];
    Arg0_39c *f39c;
    int f3a0;
    Arg0_3a4 *f3a4;
    char unknown3a8[0x4];
    int f3ac;
    char unknown3b0[0x8];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x24];
    int f3e0;
    char unknown3e4[0x4];
    Arg0_3e8 *f3e8;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18;
    char unknown1c[0x4];
    float f20;
    float f24;
    char unknown28[0x4];
    float f2c;
};
struct Arg0_39c {
    char unknown0[0x430];
    Arg0_39c_430 *f430;
};
struct Arg0_39c_430 {
    char unknown0[0x54];
    Arg0_39c_430_54 *f54;
};
struct Arg0_39c_430_54 {
    char unknown0[0x4];
    int f04;
};
struct S_x81120 {
    Vector3 f00;
};
struct S_x82240 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void operation_8c0f9a84(Object *o)
{
    Frame frame;
    float v1;
    float v13;
    int v57;
    int v14;
    float t1;
    int t2;
    float t3;
    int t4;
    float t5;
    int t6;
    t1 = ((float (*)(void *))0x8c37eb0c)(o->f3b8);
    v1 = (float)t1;
    if (0.0f > t1) {
        v1 = (float)0.0f;
    }
    o->f64 = (Arg0_64 *)(int)(v1 * (float)o->f3e0 + (float)(int)o->f64);
    if ((int)(o->f3e8) == 0xffff) {
        t2 = ((int (*)(Object *, void *, float))0x8c04a52c)(o, &(&frame)->f24, 162.5f);
        if ((unsigned short)t2 != 0xffff) {
            t3 = ((float (*)(float, float))0x8c130334)((&frame)->f24, (&frame)->f2c);
            t4 = ((int (*)(void *, int))0x8c0c52f4)(o->f64, (int)(t3 * 65536.0f / 6.28318405f));
            if (0x1c71 > t4) {
                o->f3b8 = (Arg0_3b8 *)0;
                o->f3e8 = (Arg0_3e8 *)(unsigned short)t2;
            }
        }
    }
    o->f3b8 = (Arg0_3b8 *)((int)o->f3b8 + -0x600);
    if (!((int)(o->f3b8) > 0)) {
        v13 = (float)(float)(unsigned int)o->f39c->f430->f54->f04;
        v14 = (int)(int)(v13 / 0.5f);
        o->f3b8 = (Arg0_3b8 *)0;
        if ((int)(o->f3e8) != 0xffff) {
            ((void (*)(Object *, void *, void *))0x8c043e3c)(o, o->f3e8, &(&frame)->f18);
            t5 = ((float (*)(float, float))0x8c130334)((&frame)->f18, (&frame)->f20);
            t6 = ((int (*)(void *, int, int))0x8c0c4f90)(o->f64, (int)(t5 * 65536.0f / 6.28318405f), 0x280);
            o->f64 = (Arg0_64 *)(int)t6;
        }
        v57 = (int)o->f3ac;
        if (v57 > v14) {
            ((void (*)(void *, int))0x8c0ffdf0)(o->f3a4, 0);
            o->f3ac = (int)v14;
            return;
        }
        if (!((o->f3ac = v57 + -1) > 0)) {
            if ((int)(o->f3e8) == 0xffff) {
                o->f3a0 = 5;
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x81120 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
                ((void (*)(void *))0x8c18e6fc)(&(&frame)->f0c);
                (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
                return;
            }
            o->f3a0 = 8;
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x82240 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
            ((void (*)(Frame *))0x8c18e6fc)((&frame));
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
