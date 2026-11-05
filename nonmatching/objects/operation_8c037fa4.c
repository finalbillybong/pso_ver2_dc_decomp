/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c037fa4
 * function: operation_8c037fa4
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 32 of 54 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memcpy_8c12b77c(int, int, int);
extern int call_8c18e808(int, int);
void operation_8c037fa4(int a0, int a1, int a2, int a3)
{
    int j;
    memcpy_8c12b77c(a2, a1, a3);
    a3 = call_8c18e808(a3, 0x100);
    for (a0 = 0; (unsigned int)a0 < (unsigned int)a3; a0++) {
        for (j = 0; j < 0x100; j++) {
            *(char *)((char *)(a2 + *(unsigned char *)((char *)j + (int)(void *)0x8c462800)) + (a0 << 8)) = *(unsigned char *)((char *)(a1 + j) + (a0 << 8));
        }
    }
}
