/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1860ac
 * function: operation_8c1860ac
 * language: c
 * reference size: 144 bytes
 * compiled size: 128 bytes (-11.1%)
 * differing lines: 24 of 54 reference instruction lines
 * differing bytes: 73
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -16 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e18c0 S_L8c4e18c0;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct S_g8c4e18c4 S_g8c4e18c4;
struct S_L8c4e18c0 {
    char unknown0[0x4];
    S_g8c4e18c4 *f04;
};
extern short g_8c41cb84;
extern int g_8c46ed14;
extern int g_8c4dbb88;
extern int g_8c4dbb90;
extern S_L8c4e18c0 g_8c4e18c0;
extern int call_8c1861cc(int, void *, void *);
extern void operation_8c186534(int);
extern void operation_8c18635c(void);
void operation_8c1860ac(void)
{
    int v1;
    int v6;
    int v2;
    int t1;
    v1 = (int)0;
    while (0x10 > v1) {
        v2 = (int)(v1 << 3);
        t1 = call_8c1861cc(v1, (void *)(*(S_g8c4e18c0 **)((char *)&g_8c4e18c0 + (v2))), (void *)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + (v2))));
        if (t1 != 0) {
            operation_8c186534(v1);
        }
        v1 = (int)(v1 + 1);
    }
    operation_8c18635c();
    g_8c41cb84 += g_8c4dbb90;
    g_8c46ed14 = (int)(g_8c4dbb88);
    v6 = (int)0;
    while (0x12 > v6) {
        v6 = (int)(v6 + 1);
    }
}
