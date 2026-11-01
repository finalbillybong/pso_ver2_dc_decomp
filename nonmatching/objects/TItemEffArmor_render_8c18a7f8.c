/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18a7f8
 * function: TItemEffArmor_render_8c18a7f8
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 16 of 79 reference instruction lines
 * differing bytes: 40
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c46f564_c S_L8c46f564_c;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct Block_L8c46f564_0 {
    char unknown0[0xc];
    S_L8c46f564_c *f0c;
} Block_L8c46f564_0;
struct Object {
    char unknown0[0x28];
    float f28;
    float f2c;
    char unknown30[0x3c];
    Arg0_6c *f6c;
    char unknown70[0x4];
    Arg0_74 *f74;
    Arg0_78 *f78;
    Arg0_7c *f7c;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
extern int g_8c46f560;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern S_L8c46f564 g_8c46f564;
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c38c0f0(void *);
extern void apply_resource_3827d8(void *);
extern void call_8c3addea(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
void TItemEffArmor_render_8c18a7f8(Object *o)
{
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x30)));
    njRotateY_8c37df90(0, (void *)(o->f6c));
    njScale_8c37e2e4(0, o->f2c, 1.0f, o->f2c);
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&g_8c5755ac;
    call_8c38c0f0((void *)(((char *)o + 0x3c)));
    apply_resource_3827d8((void *)(o->f7c));
    call_8c3addea((void *)(o->f74), (void *)(o->f78), o->f28);
    *(Block16 *)&g_8c5755ac = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (int)(g_8c46f560);
    njPopMatrixEx_8c38ad10();
}
