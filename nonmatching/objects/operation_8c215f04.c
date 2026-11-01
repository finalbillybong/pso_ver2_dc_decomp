/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c215f04
 * function: operation_8c215f04
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 12 of 43 reference instruction lines
 * differing bytes: 23
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
typedef struct S_L8c336040 S_L8c336040;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    int f70;
    int f74;
    int f78;
    char unknown7c[0x4];
    int f80;
    char unknown84[0x8];
    float f8c;
    float f90;
    int f94;
};
struct S_L8c336040 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c336040 g_8c336040;
extern void operation_8c215f7c(void *);
extern void call_8c0e196c(void *, void *);
extern void call_8c215de0(Object *);
void operation_8c215f04(Object *o, int a1)
{
    operation_8c215f7c((void *)o);
    o->f78 = a1;
    (&g_8c336040)->f04 = (int)(o->f80);
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)&g_8c336040));
    call_8c215de0(o);
    o->f8c = o->f90 = 0.0f;
    o->f70 = 0;
    o->f74 = 0;
    o->f94 = 1;
    o->f94 = 1;
}
