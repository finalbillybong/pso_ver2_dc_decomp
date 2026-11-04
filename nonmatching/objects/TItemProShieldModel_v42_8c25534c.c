/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25534c
 * function: TItemProShieldModel_v42_8c25534c
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 8 of 69 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemProShieldModel.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Arg0_1bc Arg0_1bc;
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x4];
    int fec;
    char unknownf0[0x48];
    unsigned char f138;
    char unknown139[0x3];
    int f13c;
    char unknown140[0x7c];
    Arg0_1bc *f1bc;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void play_se_8c05fbf8(int, int, int, int);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimerEvent_ctor_8c2236d0(void *, int, int, int);
void TItemProShieldModel_v42_8c25534c(Object *o)
{
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    if (((o->fec & 0x40)) == 0) {
        play_se_8c05fbf8(0xa, (int)((int)o->f13c + 0x3c), 0, 0);
    }
    if (o->f138 == 0x27 && o->f1bc != 0) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t1 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t1, (int)(o->f1bc), (int)(o->fe6), 0x1c2);
            t1->f18 = (void *)0x8c278a3c;
        }
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x30);
        if (t2 != 0) {
            TItemTimerEvent_ctor_8c2236d0((void *)t2, (int)(o->f1bc), (int)(o->fe6), 0x1c2);
            t2->f18 = (void *)0x8c278a18;
        }
    }
}
