/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2213ec
 * function: operation_8c2213ec
 * language: c
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 6 of 162 reference instruction lines
 * differing bytes: 6
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
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    int f94;
    float f98;
    float f9c;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c01c434(float, float);
Object *operation_8c2213ec(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2788f0;
    o->f24 = 0;
    o->f20 = 0;
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    o->f28 = 0;
    o->f34 = 228.0f;
    o->f38 = 0.0f;
    o->f3c = 640.0f;
    o->f40 = 480.0f;
    o->f44 = 0.1953125f;
    o->f48 = 0.0f;
    o->f4c = 1.0f;
    o->f50 = 0.9375f;
    o->f54 = 0.0f;
    o->f58 = 0.0f;
    o->f5c = 100.0f;
    o->f60 = 480.0f;
    o->f64 = 0.0f;
    o->f68 = 0.0f;
    o->f6c = 0.1953125f;
    o->f70 = 0.9375f;
    o->f74 = 10.0f;
    o->f78 = 0.0f;
    o->f7c = 340.0f;
    o->f80 = 480.0f;
    o->f84 = 0.0f;
    o->f88 = 0.0f;
    o->f8c = 1.0f;
    o->f90 = 1.0f;
    t1 = operation_8c01c434(480.0f, 0.0f);
    if (t1 != 0) {
        if (t1 == 1) {
            goto L_8c2214f0;
        }
    } else {
        o->f94 = 0x1e;
        goto L_8c2214f8;
L_8c2214f0:;
        o->f94 = 0x19;
    }
L_8c2214f8:;
    o->f98 = (float)o->f94 * 2.0f;
    o->f9c = (float)o->f94 * 2.0f;
    return o;
}
