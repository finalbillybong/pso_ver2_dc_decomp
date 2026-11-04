/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17b140
 * function: TItemWpnScythe_v54_8c17b140
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 8 of 57 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnScythe.h (shared layout for modders; this draft keeps its own local types)
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
    char unknowne8[0x50];
    unsigned char f138;
    char unknown139[0x83];
    int f1bc;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimerEvent_ctor_8c2236d0(void *, int, int, int);
void TItemWpnScythe_v54_8c17b140(Object *o)
{
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    if (o->f1bc != 0) {
        if ((o->f138) == 0) {
            t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
            if (t1 == 0) {
                return;
            }
            TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), 0x96);
            t1->f18 = (void *)0x8c278a84;
            return;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t2 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t2, (int)(o->f1bc), (int)(o->fe6), 0x5a);
            t2->f18 = (void *)0x8c278a84;
        }
    }
}
