/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f7ea4
 * function: TObjEneSlime_render_8c0f7ea4
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 12 of 68 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   constant loading; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470640 S_g8c470640;
typedef struct S_g8c470640_42c S_g8c470640_42c;
typedef struct S_g8c470640_42c_8 S_g8c470640_42c_8;
typedef struct S_g8c470640_42c_c S_g8c470640_42c_c;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
struct Object {
    char unknown0[0x388];
    int f388;
};
struct S_g8c470640 {
    char unknown0[0x42c];
    S_g8c470640_42c *f42c;
};
extern S_g8c470640 *g_8c470640;
extern char g_8c30a63c[];
extern int operation_8c03d338(void);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void operation_8c1086fc(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void TObjEneSlime_render_8c0f7ea4(Object *o)
{
    int v5;
    char *pm5;
    int v1;
    int t1;
    int v2;
    int pm6;

    t1 = operation_8c03d338();
    if (!(0 == t1)) {
        char *pm2;
        char *v3;
        char *pm3;
        char *pm4;
        v1 = (o->f388 & 1);
        v2 = (v1 << 2);
        pm6 = (int)((void *)0x8c30a26c);
        debug_print_at_8c38cf80(0x130020, (void *)((g_8c30a63c + 0x1ee)), *(S_vv2_0 **)((pm6) + (0x0 + (char *)v2)));
        operation_8c1086fc();
        pm3 = (char *)v2;
        pm2 = (pm3 + 0x0);
        njPushMatrixEx_8c38ae68();
        pm5 = (char *)*(int *)((pm2) + ((int)((void *)0x8c30a274)));
        translate_current_matrix_v_8c382a40((void *)((0x3c + (char *)o)));
        v3 = pm5;
        pm4 = (char *)g_8c470640->f42c;

        v2 = (int)(v3) << 4;
        pm5 = (char *)(0xc + pm4);
        v1 = (int)(v2);
        v5 = v1;
        call_8c3827d8((void *)(*(S_g8c470640_42c_c **)(pm5 + (v5))));
        pm2 = 0x8 + (char *)g_8c470640->f42c;
        call_8c3aa716((void *)(*(S_g8c470640_42c_8 **)((v5) + (pm2))));
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
