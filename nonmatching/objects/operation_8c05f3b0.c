/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f3b0
 * function: operation_8c05f3b0
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 4 of 116 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4679fc S_g8c4679fc;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    int f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    int f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    int f5c;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_g8c4679fc {
    char unknown0[0x8];
    int f08;
};
extern int g_8c3fc180;
extern S_g8c4679fc *g_8c4679fc;
extern void call_8c380ab8(int, int, float, float);
extern void state_set_4c_8c3809a4(int);
extern void state_set_54_8c380924(int);
extern int call_8c18e768(int, int);
extern void call_8c38d9a0(Frame *, int, int, int);
void operation_8c05f3b0(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f00 = 20.0f;
    (&frame)->f04 = 20.0f;
    (&frame)->f08 = 0.3f;
    (&frame)->f0c = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = -1;
    (&frame)->f18 = 20.0f;
    (&frame)->f1c = 460.0f;
    (&frame)->f20 = 0.3f;
    (&frame)->f24 = 0.0f;
    (&frame)->f28 = 1.0f;
    (&frame)->f2c = -1;
    (&frame)->f30 = 620.0f;
    (&frame)->f34 = 20.0f;
    (&frame)->f38 = 0.3f;
    (&frame)->f3c = 1.0f;
    (&frame)->f40 = 0.0f;
    (&frame)->f44 = -1;
    (&frame)->f48 = 620.0f;
    (&frame)->f4c = 460.0f;
    (&frame)->f50 = 0.3f;
    (&frame)->f54 = 1.0f;
    (&frame)->f58 = 1.0f;
    (&frame)->f5c = -1;
    if (o->f20 == 0) {
        call_8c380ab8(0, 5, 0.3f, 20.0f);
        ((void (*)(int, int))call_8c380ab8)(1, 6);
        state_set_4c_8c3809a4(0);
        state_set_54_8c380924(0);
        t1 = call_8c18e768((int)(g_8c4679fc->f08 - g_8c3fc180), 0x44);
        call_8c38d9a0((Frame *)((&frame)), 4, t1, 1);
    }
}
