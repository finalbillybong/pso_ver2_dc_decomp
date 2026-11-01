/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17b528
 * function: TItemProUnit_v42_8c17b528
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 58 of 117 reference instruction lines
 * differing bytes: 38
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0xd4];
    int f1bc;
    char unknown1c0[0x18];
    short f1d8;
    short f1da;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimerEvent_ctor_8c2236d0(void *, int, int, int);
void TItemProUnit_v42_8c17b528(Object *o)
{
    S_c8c122700 *t1;
    switch (o->f1d8) {
    case 15:
        if (o->f1bc == 0) {
            return;
        }
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t1 == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), (int)((int)((float)o->f1da * 30.0f)));
        t1->f18 = (void *)0x8c278a3c;
        return;
    case 16:
        if (o->f1bc == 0) {
            return;
        }
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t1 == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), (int)((int)((float)o->f1da * 30.0f)));
        t1->f18 = (void *)0x8c278a18;
        return;
    case 17:
        if (o->f1bc != 0) {
            t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
            if (t1 != 0) {
                TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), (int)((int)((float)o->f1da * 30.0f)));
                t1->f18 = (void *)0x8c2789f4;
            }
        }
    }
}
