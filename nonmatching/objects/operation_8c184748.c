/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184748
 * function: operation_8c184748
 * language: c
 * reference size: 120 bytes
 * compiled size: 118 bytes (-1.7%)
 * differing lines: 30 of 59 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -2 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
struct S_vv2 {
    char f00;
};
struct S_vv4 {
    char f00;
};
void operation_8c184748(int a0, int a1)
{
    S_vv4 *v4;
    int v1;
    S_vv2 *v2;
    int v3;
    unsigned char v5;
    int v8;
    int v6;
    int v9;
    int v7;
    v1 = (int)0;
    while (0x20 > v1) {
        v2 = (S_vv2 *)(a1 + v1 * 6);
        v3 = (int)0;
        v4 = (S_vv4 *)(a0 + (v1 * 6 + 5));
        while (6 > v3) {
            v6 = (int)0;
            v7 = (int)0;
            v8 = (unsigned char)v2->f00;
            while (8 > v7) {
                v6 = v6 | v8 & 1;
                if (7 > v7) {
                    v8 = (int)((unsigned char)v8 >> 1);
                    v6 = (int)((unsigned char)v6 << 1);
                }
                v7 = (int)(v7 + 1);
            }
            v4->f00 = v6;
            v3 = (int)(v3 + 1);
            v2 = (S_vv2 *)((char *)v2 + 1);
            v4--;
        }
        v1 = (int)(v1 + 1);
    }
}
