/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23e5a8
 * function: TItemWpnMuramasa_v54_8c23e5a8
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 8 of 54 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnMuramasa.h (shared layout for modders; this draft keeps its own local types)
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
    short fe6;
    char unknowne8[0xd4];
    int f1bc;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x14];
    float f30;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimerEvent_ctor_8c2236d0(void *, int, int, int);
void TItemWpnMuramasa_v54_8c23e5a8(Object *o)
{
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    if (o->f1bc != 0) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x34);
        if (t1 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (unsigned short)o->fe6, 0xe10);
            t1->f18 = (void *)0x8c278964;
            t1->f30 = 0.25f;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t2 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t2, (int)(o->f1bc), (unsigned short)o->fe6, 0x5a);
            t2->f18 = (void *)0x8c278a84;
        }
    }
}
