/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c6288
 * function: operation_8c1c6288
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 22 of 78 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
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
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    Arg0_38 *f38;
    char unknown3c[0x10];
    Arg0_4c *f4c;
    Arg0_50 *f50;
};
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern void call_8c38c0f0(void *);
extern void apply_resource_3827d8(void *);
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c1c6288(Object *o)
{
    if (o->f4c != 0) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x20;
        *(Block16 *)&g_8c46f564 = *(Block16 *)&g_8c5755ac;
        call_8c38c0f0((void *)(((char *)o + 0x20)));
        apply_resource_3827d8((void *)(o->f50));
        reset_state_8c391c94();
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x40)));
        njRotateY_8c37df90(0, (void *)(o->f38));
        njRotateX_8c37dd28(0, (void *)(o->f34));
        call_8c3aa716((void *)(o->f4c));
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
        g_8c575570 = (int)(g_8c46f560);
        *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
    }
}
