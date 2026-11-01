/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e6e80
 * function: TItemProArmor_v42_8c0e6e80
 * language: c
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 28 of 188 reference instruction lines
 * differing bytes: 14
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
void TItemProArmor_v42_8c0e6e80(Object *o)
{
    S_c8c122700 *t;
    if (o->f1bc == 0) {
        return;
    }
    switch ((unsigned char)o->f138) {
    case 27:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0x96);
        t->f18 = (void *)0x8c278a3c;
        break;
    case 28:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0x12c);
        t->f18 = (void *)0x8c278a18;
        break;
    case 32:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0x12c);
        t->f18 = (void *)0x8c278a84;
        break;
    case 33:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0xf0);
        t->f18 = (void *)0x8c278a84;
        break;
    case 34:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0xd2);
        t->f18 = (void *)0x8c278a84;
        break;
    case 43:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0x96);
        t->f18 = (void *)0x8c278a84;
        break;
    case 49:
        t = heap_alloc_8c122700(g_8c4d97e0, 0x30);
        if (t == 0) {
            return;
        }
        TItemTimerEvent_ctor_8c2236d0(t, o->f1bc, o->fe6, 0x96);
        t->f18 = (void *)0x8c278a60;
        break;
    }
}
