/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f5220
 * function: operation_8c0f5220
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 54 of 85 reference instruction lines
 * differing bytes: 43
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
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x332];
    short f332;
};
extern int g_8c467874;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int active_unflagged_8c05b2dc(void *);
extern void squared_distance_xz(void *, void *);
extern int operation_8c0113bc(int, int);
extern float floor_e(float);
extern void operation_8c04a860(void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c10433c(void *, int, void *, void *);
int operation_8c0f5220(int a0)
{
    int v6;
    S_vv4 *v4;
    int v1;
    int v3;
    int v5;
    int v7;
    int v2;
    int t1;
    int t2;
    int t3;
    float t4;
    v1 = (int)0;
    v2 = (int)g_8c467874;
    v3 = (int)0;
    while (v2 > v3) {
        v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
        t1 = active_unflagged_8c05b2dc((void *)v4);
        if (t1 != 0) {
            v5 = (int)(a0 + 0x324);
            squared_distance_xz((void *)v5, (void *)((int)v4 + 0x3c));
            v6 = (int)((int)v4 + 0x324);
            t2 = operation_8c0113bc(v5, v6);
            if (t2 == 0) {
                t4 = floor_e((float)v4->f332 * 0.25f);
                v7 = (int)(int)t4;
                operation_8c04a860((void *)v4, v7);
                v1 += v7;
                t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x58);
                if (t3 != 0) {
                    TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c10433c((void *)t3, a0, (void *)v6, (void *)(a0 + 0x43c));
                }
            }
        }
        v3 = (int)(v3 + 1);
    }
    return (int)(v1);
}
