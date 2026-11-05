/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1196d4
 * function: operation_8c1196d4
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 2 of 52 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c31064c S_L8c31064c;
typedef struct S_L8c310670 S_L8c310670;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    float f04;
};
struct S_L8c310670 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x10];
    float f20;
    float f24;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_L8c31064c {
    char unknown0[0x4];
    int f04;
};
extern S_L8c31064c g_8c31064c;
extern S_L8c310670 g_8c310670;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowMessage_ctor_8c119470(void *, unsigned int);
int operation_8c1196d4(Object *o, Arg1 *a1, int a2)
{
    int t1;
    (&g_8c310670)->f00 = o->tag;
    (&g_8c310670)->f04 = o->f04;
    (&g_8c310670)->f08 = a1->f00;
    (&g_8c310670)->f0c = a1->f04;
    (&g_8c310670)->f20 = a1->f00 * 0.5f;
    (&g_8c310670)->f24 = a1->f04 * 0.5f;
    (&g_8c31064c)->f04 = a2;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa0);
    if (t1 != 0) {
        TWindowMessage_ctor_8c119470((void *)t1, (unsigned int)a2);
    }
    return (int)(t1);
}
