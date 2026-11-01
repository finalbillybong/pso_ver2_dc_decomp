/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c142e90
 * function: operation_8c142e90
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 10 of 130 reference instruction lines
 * differing bytes: 12
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
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_g8c4da280 S_g8c4da280;
typedef struct S_g8c4da280_42c S_g8c4da280_42c;
typedef struct S_g8c4da284 S_g8c4da284;
typedef struct S_g8c575570 S_g8c575570;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x6c];
    int f6c;
};
struct S_g8c4da280 {
    char unknown0[0x42c];
    S_g8c4da280_42c *f42c;
};
extern char g_8c314adc[];
extern int g_8c575570;
extern int g_8c44be14;
extern int g_8c46f560;
extern int g_8c44be24;
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern int operation_8c05bbf8(void);
extern void load_scene_control_resource(void *, void *);
extern void reset_state_8c391cc4(void *);
extern void call_8c3827d8(void *);
extern int call_8c3c1460(int);
extern int current_mode_property(void);
extern void debug_error_stub_8c03ef80(void *, ...);
extern void call_8c3c10f6(int, int);
void operation_8c142e90(void)
{
    int t4;
    int v;
    char *v10;
    int v9;
    int v6;
    int v7;
    int v11;
    int v8;
    int v12;
    int v5;
    int t2;
    int t3;
    S_c8c011ecc *t1;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c314ab0), 0, 0, 0);
    }
    *(S_c8c011ecc **)0x8c4da280 = t1;
    *(int *)0x8c4da284 = (int)(t1->f42c->f6c);
    t2 = operation_8c05bbf8();
    if (t2 != 0) {
        load_scene_control_resource((void *)((g_8c314adc + 0x1a7)), (void *)(*(S_g8c4da284 **)0x8c4da284));
    } else {
        load_scene_control_resource((void *)((g_8c314adc + 0x1be)), (void *)(*(S_g8c4da284 **)0x8c4da284));
    }
    v = g_8c575570;
    v6 = g_8c44be14;
    g_8c46f560 = v;
    v |= 0x400;
    v5 = g_8c44be24;
    g_8c575570 = v;
    reset_state_8c391cc4((void *)v);
    call_8c3827d8((void *)(*(S_g8c4da284 **)0x8c4da284));
    v7 = v6;
    for (v8 = 0; v8 < 7; v8++) {
        v9 = (int)(v8 << 2);
        v10 = (char *)*(int *)((char *)((char *)(*(S_g8c4da280 **)0x8c4da280)->f42c + 0x8) + (*(int *)((char *)((char *)v9 + 0x0) + ((int)((void *)0x8c314ac0))) << 4));
        v12 = (int)(v5 + v7);
        t4 = call_8c3c1460((int)(v10));
        v7 += t4;
        if ((unsigned int)v7 > (unsigned int)current_mode_property()) {
            debug_error_stub_8c03ef80((void *)((g_8c314adc + 0x1d3)), t4);
            break;
        }
        call_8c3c10f6((int)(v10), v12);
        *(int *)((char *)((char *)v9 + 0x0) + ((int)((void *)0x8c4da288))) = (int)(v12);
    }
    g_8c575570 = g_8c46f560;
}
