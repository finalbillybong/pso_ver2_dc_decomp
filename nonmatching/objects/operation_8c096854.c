/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c096854
 * function: operation_8c096854
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 22 of 58 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x20];
    int f3c;
    char unknown40[0xc];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x18];
    float f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    char unknown84[0x8];
    float f8c;
    float f90;
};
extern int g_8c469e48;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void initialize_follow_base(void *);
S_c8c122700 *operation_8c096854(void)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x94);
    if (t1 != 0) {
        initialize_follow_base((void *)t1);
        t1->f18 = (void *)0x8c2657d8;
        t1->f3c = 0;
        t1->f4c = 0.0f;
        t1->f50 = 10.5f;
        t1->f54 = 0.0f;
        t1->f70 = 30.0f;
        t1->f78 = 0;
        t1->f74 = 0;
        t1->f7c = 2;
        t1->f80 = 0;
        t1->f8c = 0.0f;
        t1->f90 = 0.0f;
        g_8c469e48 = 0;
    }
    return t1;
}
