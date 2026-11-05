/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c027a38
 * function: operation_8c027a38
 * language: c
 * reference size: 128 bytes
 * compiled size: 132 bytes (+3.1%)
 * differing lines: 10 of 44 reference instruction lines
 * differing bytes: 79
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct S_g8c2e39e8 S_g8c2e39e8;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
struct Object {
    char tag;
    char unknown1[0x2];
    char f03;
    char unknown4[0x39d];
    char f3a1;
    char unknown3a2[0x2];
    Arg0_3a4 *f3a4;
};
extern int g_8c467188;
extern void operation_8c027b20(int, int, int);
extern void operation_8c027b4c(void *);
extern void operation_8c027c80(void *, void *);
extern void init_bytes(unsigned int, void *);
int operation_8c027a38(Object *o)
{
    char v1;
    if (o == 0) {
        return 0;
    }
    v1 = o->f3a1;
    o->tag = 5;
    operation_8c027b20(5, (int)(*(S_g8c2e39e8 **)((char *)0x8c2e39e8 + (v1 << 2))), (int)(((char *)o + 0x4)));
    operation_8c027b4c((void *)o);
    operation_8c027c80((void *)(o->f3a4), (void *)(((char *)o + 0x3c0)));
    init_bytes((unsigned int)(o->f3a4), (void *)(((char *)o + 0x408)));
    o->f03 = g_8c467188;
    return 1;
}
