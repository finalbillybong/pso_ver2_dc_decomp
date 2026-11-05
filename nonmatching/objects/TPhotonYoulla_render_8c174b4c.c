/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c174b4c
 * function: TPhotonYoulla_render_8c174b4c
 * language: c
 * reference size: 344 bytes
 * compiled size: 340 bytes (-1.2%)
 * differing lines: 106 of 118 reference instruction lines
 * differing bytes: 292
 * provenance: hand pass on a generator draft (behaviour reviewed; address casts converted to
 *   prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
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
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct S_g8c4db660 S_g8c4db660;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct Block_L8c46f564_0 {
    Vector3 f00;
    int f0c;
} Block_L8c46f564_0;
typedef struct Block_L8c5755ac_0 {
    Vector3 f00;
    int f0c;
} Block_L8c5755ac_0;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x11c];
    short f184;
    char unknown186[0x52];
    int f1d8;
};
struct S_L8c5755ac {
    Block_L8c5755ac_0 f00;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern S_g8c4db660 *g_8c4db660;
extern int g_8c575570;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern void hs_8c0cd63c(void *, short, int);
extern void reset_state_8c391c94(void);
extern void hs_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void hs_8c38c0e6(int, int);
extern void hs_8c38c0f0(void *);
extern void operation_8c13ef08(Object *);
extern void operation_8c01cc90(Object *);
extern void set_transform_node_callback_wrapper_8c13ef3c(Object *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void TPhotonYoulla_render_8c174b4c(Object *o)
{
    char *v5;
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    int v4;
    if (o->f1d8 != 0) {
        hs_8c0cd63c(g_8c4db660, o->f184, 0);
        reset_state_8c391c94();
        hs_8c3827d8(o->f28);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(((char *)o + 0x3c));
        njRotateY_8c37df90(0, o->f64);
        g_8c46f560 = (int)(g_8c575570);
        v1 = (S_vv1 *)(void *)0x8c5755a4;
        v2 = (S_vv2 *)(void *)0x8c5755a8;
        *(Vector3 *)&(&g_8c46f564)->f00.f00 = *(Vector3 *)&(&g_8c5755ac)->f00.f00;
        v5 = (char *)(&g_8c5755ac)->f00.f0c;
        (&g_8c46f564)->f00.f0c = (int)(v5);
        g_8c46f574 = (int)(v1->f00);
        g_8c46f578 = (int)(v2->f00);
        g_8c575570 |= 0x820;
        v3 = (int)-1;
        v4 = (int)0x800;
        hs_8c38c0e6(v3, v4);
        hs_8c38c0f0(((char *)o + 0x1bc));
        operation_8c13ef08(o);
        operation_8c01cc90(o);
        set_transform_node_callback_wrapper_8c13ef3c(o);
        v1->f00 = (int)(g_8c46f574);
        v2->f00 = (int)(g_8c46f578);
        *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
