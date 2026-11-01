/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c088ce0
 * function: operation_8c088ce0
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 24 of 103 reference instruction lines
 * differing bytes: 75
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
typedef struct S_g8c469d60 S_g8c469d60;
typedef struct S_g8c469d60_42c S_g8c469d60_42c;
typedef struct S_g8c469d60_430 S_g8c469d60_430;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x44];
    Arg0_64 *f64;
    char unknown68[0xb8];
    float f120;
    int f124;
    int f128;
    int f12c;
    int f130;
};
struct S_g8c469d60 {
    char unknown0[0x42c];
    S_g8c469d60_42c *f42c;
    S_g8c469d60_430 *f430;
};
struct S_g8c469d60_42c {
    char unknown0[0x48];
    int f48;
    char unknown4c[0xc];
    int f58;
};
struct S_g8c469d60_430 {
    char unknown0[0x14];
    int f14;
};
extern int g_8c2fff80;
extern int g_8c2fff90;
extern S_g8c469d60 *g_8c469d60;
extern int g_8c469d64;
extern char g_8c2fff44[];
extern void TObjWarpBase_ctor_8c08860c(Object *, int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
Object *operation_8c088ce0(Object *o, int a1, int a2)
{
    int v1;
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        TObjWarpBase_ctor_8c08860c(o, a1, a2);
        v1 = (int)0;
        self->dispatch = (void *)0x8c265168;
        self->tag = (int)(g_8c2fff80);
        self->size = 0x120;
        while (4 > v1) {
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            translate_current_matrix_v_8c382a40((void *)(((char *)self + 0x6c)));
            njRotateY_8c37df90(0, (void *)(self->f64));
            call_8c3be280(0, (int)(v1 * 0xc + g_8c2fff44), (int)((int)self + v1 * 0xc + 0xf0));
            njPopMatrixEx_8c38ad10();
            v1 = (int)(v1 + 1);
        }
    }
    o->dispatch = (void *)0x8c265114;
    o->tag = (int)(g_8c2fff90);
    o->size = 0x134;
    o->f124 = (int)(g_8c469d60->f42c->f48);
    o->f128 = (int)(g_8c469d60->f42c->f58);
    o->f12c = (int)(g_8c469d60->f430->f14);
    o->f130 = (int)(g_8c469d64);
    o->f120 = 0.0f;
    return o;
}
