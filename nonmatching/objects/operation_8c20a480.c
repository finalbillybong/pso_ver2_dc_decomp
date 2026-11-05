/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a480
 * function: operation_8c20a480
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 8 of 24 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char unknown0[0xb1];
    char fb1;
};
extern int g_8c504a20;
extern int g_8c504a24;
void operation_8c20a480(void)
{
    int v2;
    S_vv3 *v3;
    int v1;
    v2 = 0;
    v1 = (int)-2;
    *(short *)0x8c46fe24 &= v1;
    g_8c504a20 = v2;
    g_8c504a24 = v2;
    v3 = (S_vv3 *)(void *)0x8c504a28;
    while (8 > v2) {
        v3->fb1 &= v1;
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 180);
    }
}
