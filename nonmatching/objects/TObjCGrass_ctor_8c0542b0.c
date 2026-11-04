/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0542b0
 * function: TObjCGrass_ctor_8c0542b0
 * language: c
 * reference size: 580 bytes
 * compiled size: 576 bytes (-0.7%)
 * differing lines: 110 of 231 reference instruction lines
 * differing bytes: 523
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TObjCGrass.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011308 S_c8c011308;
typedef struct S_c8c011308_4 S_c8c011308_4;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4678c0 S_g8c4678c0;
typedef struct S_g8c4678c0_42c S_g8c4678c0_42c;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
typedef struct S_vv8 S_vv8;
typedef struct S_x24336 S_x24336;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0xb4];
    float ffc;
    char unknown100[0x10];
    void *f110;
    int f114;
    char unknown118[0x1c];
    Arg0_134 *f134;
    float f138;
    int f13c;
    int f140;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
};
struct S_c8c011308 {
    char unknown0[0x4];
    S_c8c011308_4 *f04;
};
struct S_c8c011308_4 {
    Vector3 f00;
};
struct S_g8c4678c0 {
    char unknown0[0x42c];
    S_g8c4678c0_42c *f42c;
    int f430;
};
struct S_g8c4678c0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_vv8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0xec];
    int f134;
};
struct S_x24336 {
    Vector3 f00;
};
extern int g_8c2f3140;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c4678c0 *g_8c4678c0;
extern void operation_8c01c488(void *, void *);
extern S_c8c011308 *operation_8c011308(int, void *, int);
extern void call_8c01c838(Object *, int);
extern int operator_new_8c18de4c(int);
extern int rand(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, int);
extern void njPopMatrix_8c38accc(int);
Object *TObjCGrass_ctor_8c0542b0(Object *o, int a1, int a2, Vector3 sp)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v7;
    int v9;
    S_vv8 *v8;
    int v12;
    int v13;
    S_c8c011308 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    operation_8c01c488((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c26220c;
    v1 = (int)0;
    while (0x10 > v1) {
        *(int *)((char *)((char *)o + 0x144) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->tag = (int)(g_8c2f3140);
    o->size = 0x184;
    t1 = operation_8c011308((int)(&sp), (void *)(((char *)o + 0x144)), 1);
    if (t1 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t1->f04->f00;
    } else {
        *(Vector3 *)&o->f3c = sp;
    }
    o->f38 = (int)(g_8c4678c0->f42c->f08);
    o->f28 = (int)(g_8c4678c0->f42c->f0c);
    o->f114 = (int)(g_8c4678c0->f430);
    o->f110 = (void *)0x8c2f3130;
    call_8c01c838(o, 0);
    o->f138 = o->ffc - 1.0f;
    o->f13c = a1;
    t2 = operator_new_8c18de4c((int)(o->f13c << 5));
    o->f134 = (Arg0_134 *)t2;
    v8 = (S_vv8 *)/* ? clobbered */ 0;
    v9 = (int)0;
    v7 = (int)0x13c;
    while (*(int *)((char *)&o->tag + (v7)) > v9) {
        v12 = (int)(v9 << 5);
        *(Vector3 *)&((S_x24336 *)(v8->f134 + v12))->f00 = *(Vector3 *)&v8->f3c;
        (&frame)->f04 = 0.0f;
        t3 = rand();
        (&frame)->f08 = (float)t3 / 32768.0f;
        t4 = rand();
        (&frame)->f0c = (float)t4 / 32768.0f + 1.0f;
        t5 = rand();
        v13 = (int)(int)((float)t5 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        *(int *)((char *)((char *)o->f134 + 0x18) + (v12)) = (int)(v13);
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v13);
        call_8c3be38c(0, (void *)(&(&frame)->f04), (int)((int)o->f134 + v12 + 0xc));
        njPopMatrix_8c38accc(1);
        *(int *)((char *)((char *)o->f134 + 0x1c) + (v12)) = 0;
        v8 = (S_vv8 *)/* ? clobbered */ 0;
        v9 = (int)(v9 + 1);
    }
    o->f140 = a2;
    return o;
}
