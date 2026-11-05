/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04b428
 * function: operation_8c04b428
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 42 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2;
 *   offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B: RAM, trace and sampled
 *   call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c04b48c S_c8c04b48c;
typedef struct Arg1 Arg1;
struct S_c8c04b48c {
    char unknown0[0x2];
    char f02;
    char f03;
    unsigned short f04;
    unsigned short f06;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
};
extern unsigned char g_8c467134;
extern S_c8c04b48c *call_8c04b48c(int);
extern void sq_header3_8c38b02e(int);
char operation_8c04b428(int a0, Arg1 *a1, int a2)
{
    S_c8c04b48c *t1;
    t1 = call_8c04b48c(a0);
    t1->f03 = g_8c467134;
    sq_header3_8c38b02e(a2);
    a1->f10 = (float)t1->f04 / 512.0f;
    a1->f14 = (float)(int)t1->f06 / 512.0f;
    return t1->f02;
}
