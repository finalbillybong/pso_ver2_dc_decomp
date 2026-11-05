/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238fd4
 * function: operation_8c238fd4
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 82 of 96 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf];
    char f0f;
    char unknown10[0x2];
    char f12;
};
extern void store_bounded_8c2390e0(void *, unsigned char);
extern void store_bounded3_8c2390f0(void *, unsigned char);
extern void store_bounded_8c239100(void *, unsigned char);
extern void store_bounded_8c239110(void *, unsigned char);
extern void store_bounded_8c239120(void *, unsigned char);
extern void operation_8c239130(void *, int);
extern void operation_8c239140(void *, int);
extern void operation_8c239150(void *, int);
extern void operation_8c239160(void *, int);
extern void operation_8c239170(void *, int);
extern void operation_8c239180(void *, int);
extern void operation_8c239190(void *, int);
extern void operation_8c2391a0(void *, int);
extern void operation_8c2391b0(void *, int);
extern void operation_8c2391c0(void *, int);
extern void operation_239370(void *, unsigned char);
extern void operation_239340(void *, signed char);
extern void operation_239310(void *, short);
extern void operation_2392fc(void *, int);
static inline void helper(Object *p)
{
    store_bounded_8c239110((void *)p, (unsigned char)0);
    store_bounded_8c239120((void *)p, (unsigned char)0);
    operation_8c239130((void *)p, 0);
    operation_8c239140((void *)p, 0);
    operation_8c239150((void *)p, 0);
    operation_8c239160((void *)p, 0);
    operation_8c239170((void *)p, 0);
    operation_8c239180((void *)p, 0);
    operation_8c239190((void *)p, 0);
    operation_8c2391a0((void *)p, 0);
    operation_8c2391b0((void *)p, 0);
    operation_8c2391c0((void *)p, 0);
    operation_239370((void *)p, (unsigned char)0);
    operation_239340((void *)p, (signed char)-1);
    operation_239310((void *)p, (short)0);
    operation_2392fc((void *)p, 0xa);
}
void operation_8c238fd4(Object *o)
{
    int v1;
    store_bounded_8c2390e0((void *)o, (unsigned char)0);
    store_bounded3_8c2390f0((void *)o, (unsigned char)0);
    store_bounded_8c239100((void *)o, (unsigned char)0);
    helper(o);
    o->f12 = 0;
    v1 = (int)0;
    while (4 > v1) {
        *(char *)((char *)((char *)o + 0x20) + (v1)) = 0x14;
        v1 = (int)(v1 + 1);
    }
    o->f0f = 0;
}
