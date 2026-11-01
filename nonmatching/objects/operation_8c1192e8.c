/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1192e8
 * function: operation_8c1192e8
 * language: c
 * reference size: 124 bytes
 * compiled size: 132 bytes (+6.5%)
 * differing lines: 74 of 60 reference instruction lines
 * differing bytes: 118
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x8];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x18];
    float f48;
    float f4c;
    char unknown50[0x18];
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
    float f7c;
};
extern Object *operation_8c0dc63c(void *);
void operation_8c1192e8(Object *o)
{
    Object *t1;
    t1 = operation_8c0dc63c((void *)o);
    t1->f10 -= o->f78;
    t1->f14 -= o->f7c;
    t1->f20 = o->f48 + o->f68;
    t1->f24 = o->f4c + o->f6c;
    t1->f28 *= o->f70;
    t1->f2c *= o->f74;
}
