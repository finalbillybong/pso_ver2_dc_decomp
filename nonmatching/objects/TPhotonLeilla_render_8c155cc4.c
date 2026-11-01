/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c155cc4
 * function: TPhotonLeilla_render_8c155cc4
 * language: c
 * reference size: 360 bytes
 * compiled size: 356 bytes (-1.1%)
 * differing lines: 98 of 126 reference instruction lines
 * differing bytes: 228
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
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
typedef struct S_g8c4daa40 S_g8c4daa40;
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
    char unknown2c[0x10];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x11c];
    short f184;
    char unknown186[0x4e];
    int f1d4;
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
extern S_g8c4daa40 *g_8c4daa40;
extern int g_8c575570;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern void call_8c0cd63c(void *, short, int);
extern void reset_state_8c391c94(void);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
extern void operation_8c13ef08(void *);
extern void operation_8c01cc90(void *);
extern void operation_8c13ef3c(Object *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void TPhotonLeilla_render_8c155cc4(Object *o)
{
    char *v5;
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    int v4;
    if (o->f1d4 != 0) {
        call_8c0cd63c(g_8c4daa40, o->f184, 0);
        reset_state_8c391c94();
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, o->f3c, o->f40, o->f44);
        njRotateY_8c37df90(0, (void *)(o->f64));
        g_8c46f560 = (int)(g_8c575570);
        v1 = (S_vv1 *)(void *)0x8c5755a4;
        v2 = (S_vv2 *)(void *)0x8c5755a8;
        *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&(&g_8c5755ac)->f00;
        g_8c46f574 = (int)(v1->f00);
        g_8c46f578 = (int)(v2->f00);
        g_8c575570 |= 0x820;
        v3 = (int)-1;
        v4 = (int)0x800;
        call_8c38c0e6(v3, v4);
        call_8c38c0f0((void *)(((char *)o + 0x1b8)));
        operation_8c13ef08((void *)o);
        operation_8c01cc90((void *)o);
        operation_8c13ef3c(o);
        v1->f00 = (int)(g_8c46f574);
        v2->f00 = (int)(g_8c46f578);
        *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
