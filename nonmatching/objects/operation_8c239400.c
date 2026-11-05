/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c239400
 * function: operation_8c239400
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 124 of 79 reference instruction lines
 * differing bytes: 140
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: unverified; replaces a draft that DIVERGED on offline start: new character to Pioneer
 *   2; not yet run
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Range {
    float lo;
    float lo2;
    float hi;
    float hi2;
} Range;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    Range r[5];
    char f58[0x4];
};
extern void operation_2395d0(void *);
extern void operation_2394dc(void *);
static inline void range_init(Range *p)
{
    p->lo = 0.0f;
    p->lo2 = 0.0f;
    p->hi = 1.0f;
    p->hi2 = 1.0f;
}
Object *operation_8c239400(Object *o)
{
    range_init(&o->r[0]);
    range_init(&o->r[1]);
    range_init(&o->r[2]);
    range_init(&o->r[3]);
    range_init(&o->r[4]);
    operation_2395d0(o->f58);
    o->f04 = 0;
    operation_2394dc(o);
    return o;
}
