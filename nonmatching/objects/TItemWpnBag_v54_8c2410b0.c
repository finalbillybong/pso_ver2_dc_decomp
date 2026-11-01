/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2410b0
 * function: TItemWpnBag_v54_8c2410b0
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 4 of 31 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2)
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0xd4];
    int f1bc;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimerEvent_ctor_8c2236d0(void *, int, int, int);
void TItemWpnBag_v54_8c2410b0(Object *o)
{
    S_c8c122700 *t1;
    if (o->f1bc != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t1 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), 0x5a);
            t1->f18 = (void *)0x8c278a3c;
        }
    }
}
