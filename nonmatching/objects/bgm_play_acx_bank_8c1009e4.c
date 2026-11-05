/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1009e4
 * function: bgm_play_acx_bank_8c1009e4
 * language: c
 * reference size: 184 bytes
 * compiled size: 180 bytes (-2.2%)
 * differing lines: 6 of 67 reference instruction lines
 * differing bytes: 83
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_L8c4d51d4_4 S_L8c4d51d4_4;
typedef struct S_g8c30aec8 S_g8c30aec8;
typedef struct S_g8c467a50 S_g8c467a50;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
typedef struct S_g8c4d51dc S_g8c4d51dc;
struct S_L8c4d51d4 {
    S_g8c4d51d4 *f00;
    S_L8c4d51d4_4 *f04;
    S_g8c4d51dc *f08;
};

extern int g_8c4d52d4;
extern S_L8c4d51d4 g_8c4d51d4;
extern void clear_global_render_resources(void);
extern void call_8c35049c(void *);
extern void call_8c350152(void *);
extern void operation_8c104d5c(int, int);
extern void ADXT_StartMemIdx_8c350fda(void *, int, int);
extern void call_8c3507fe(void *, void *);
extern void call_8c350abc(void *, int);
void bgm_play_acx_bank_8c1009e4(int a0)
{
    int v1;
    int v2;
    if (a0 < 0 || a0 >= 4) {
        return;
    }
    if (g_8c4d52d4 == 0) {
        clear_global_render_resources();
        v1 = (int)0;
        while (1 > v1) {
            call_8c35049c((void *)(*(S_g8c4d51dc **)((char *)&g_8c4d51d4.f08 + (v1 << 2))));
            v1 = (int)(v1 + 1);
        }
        g_8c4d52d4 = 1;
        call_8c350152((void *)((&g_8c4d51d4)->f00));
        v2 = (int)(void *)0x8c470780;
        operation_8c104d5c((int)(*(S_g8c30aec8 **)((char *)0x8c30aec8 + (a0 << 2))), v2);
        ADXT_StartMemIdx_8c350fda((void *)((&g_8c4d51d4)->f04), v2, 0);
        call_8c3507fe((void *)((&g_8c4d51d4)->f04), *(S_g8c467a50 **)0x8c467a50);
        call_8c350abc((void *)((&g_8c4d51d4)->f04), 0);
    }
}
