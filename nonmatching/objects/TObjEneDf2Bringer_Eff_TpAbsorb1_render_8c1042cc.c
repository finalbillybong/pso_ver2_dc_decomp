/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1042cc
 * function: TObjEneDf2Bringer_Eff_TpAbsorb1_render_8c1042cc
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 20 of 43 reference instruction lines
 * differing bytes: 30
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
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x30];
    float f30;
    char unknown34[0x4];
    Arg0_38 *f38;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c38efbc(void *, int, int);
extern void njPopMatrixEx_8c38ad10(void);
void TObjEneDf2Bringer_Eff_TpAbsorb1_render_8c1042cc(Object *o)
{
    int v1;
    int v2;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x24)));
    njRotateY_8c37df90(0, (void *)(o->f38));
    call_8c38efbc((void *)(((char *)o + 0x44)), 6, 1.0f > o->f30);
    call_8c38efbc((void *)(((char *)o + 0xa4)), 6, 1.0f > o->f30);
    njPopMatrixEx_8c38ad10();
}
