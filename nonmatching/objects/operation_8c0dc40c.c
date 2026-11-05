/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dc40c
 * function: operation_8c0dc40c
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 4 of 103 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_14 Arg1_14;
struct Object {
    int tag;
    short f04;
    char unknown6[0x18];
    short size;
    float f20;
    int f24;
    int f28;
    char unknown2c[0x8];
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x8];
    int f64;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    Arg1_14 *f14;
    int f18;
    int f1c;
};
extern int g_8c3073c0;
extern void operation_8c0dc854(void *);
extern void operation_8c0e24f8(void *);
extern void call_8c0e196c(void *, void *);
extern void play_se_8c05fbf8(int, int, int, int);
extern float operation_8c2097e4(void);
void operation_8c0dc40c(Object *o, Arg1 *a1)
{
    int v3;
    float t1;
    o->tag = (int)(g_8c3073c0);
    o->size = 0x68;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    o->f40 = a1->f08;
    o->f44 = a1->f0c;
    operation_8c0dc854((void *)o);
    o->f20 = a1->f10;
    o->f34 = (int)(a1->f1c);
    operation_8c0e24f8((void *)o);
    o->f58 = 0;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)(a1->f14));
    o->f28 = (int)(a1->f18);
    o->f64 = 0;
    o->f24 = 0;
    if (((o->f34 & 1)) == 0 && ((o->f34 & 2)) == 0) {
        o->f04 |= 0x10;
    }
    v3 = (int)o->f34;
    if (((v3 & 1)) != 0 && ((v3 & 2)) != 0 && ((v3 & 0x20)) == 0) {
        play_se_8c05fbf8(0x50003, 0, 0, 0);
    }
    t1 = operation_8c2097e4();
    if (!(t1 > 0.0f)) {
        o->f64 = 0x1000000;
    }
}
