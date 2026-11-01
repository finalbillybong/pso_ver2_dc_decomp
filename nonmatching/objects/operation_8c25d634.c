/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25d634
 * function: operation_8c25d634
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 88 of 102 reference instruction lines
 * differing bytes: 68
 * provenance: generator draft (mode switch2ext)
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
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    int f60;
    int f64;
};
struct Arg2 {
    int f00;
    int f04;
    int f08;
    int f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
};
extern int g_8c3404dc;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c18e768(int, int);
Object *operation_8c25d634(Object *o, int a1, Arg2 *a2)
{
    char *v4;
    int t1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c18;
    o->tag = (int)(g_8c3404dc);
    o->size = 0x68;
    o->f20 = (int)(a2->f00);
    o->f24 = (int)(a2->f04);
    o->f30 = (int)(a2->f08);
    o->f34 = (int)(a2->f0c);
    o->f28 = 0;
    v4 = (char *)o->f24;
    if (v4 != 0) {
        t1 = call_8c18e768(0xff, (int)(v4));
        o->f2c = (int)(t1);
        if (o->f2c == 0) {
            o->f2c = 1;
        }
    }
    o->f38 = -1;
    o->f3c = a2->f10;
    o->f40 = a2->f14;
    o->f44 = a2->f10 + a2->f18;
    o->f48 = a2->f14 + a2->f1c;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = a2->f20;
    o->f58 = a2->f24;
    o->f5c = a2->f28;
    o->f64 = 0;
    o->f60 = 0;
    return o;
}
