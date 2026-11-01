/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c113cc0
 * function: operation_8c113cc0
 * language: c
 * reference size: 312 bytes
 * compiled size: 308 bytes (-1.3%)
 * differing lines: 66 of 119 reference instruction lines
 * differing bytes: 175
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d8204 S_L8c4d8204;
typedef struct S_L8c4d8204_4 S_L8c4d8204_4;
typedef struct S_L8c4d820c S_L8c4d820c;
typedef struct S_L8c4d820c_4 S_L8c4d820c_4;
typedef struct S_g8c4d8204 S_g8c4d8204;
typedef struct S_g8c4d820c S_g8c4d820c;
typedef struct S_g8c4d8214 S_g8c4d8214;
typedef struct S_g8c4d8218 S_g8c4d8218;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    float fe8;
    char unknownec[0x20];
    int f10c;
    char unknown110[0x10];
    float f120;
};
struct S_L8c4d8204 {
    S_g8c4d8204 *f00;
    S_L8c4d8204_4 *f04;
};
struct S_L8c4d820c {
    S_g8c4d820c *f00;
    S_L8c4d820c_4 *f04;
};
extern S_g8c4d8214 *g_8c4d8214;
extern S_L8c4d8204 g_8c4d8204;
extern S_L8c4d820c g_8c4d820c;
extern void call_8c0345cc(void *, int);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void reset_state_8c391c94(void);
extern void call_8c3ac53a(void *, void *, float);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c113cc0(Object *o)
{
    int v2;
    int v1;
    int v11;
    v1 = (int)0x11c;
    v11 = (int)0;
    goto L_8c113ce4;
    v2 = (int)0;
L_8c113cd0:;
    call_8c0345cc((void *)(*(S_g8c4d8218 **)((char *)0x8c4d8218 + (v2 << 2))), (int)(*(unsigned short *)((char *)((char *)o + 0x0) + (v1))));
    v11 = (int)(v2 + 1);
L_8c113ce4:;
    v2 = (int)v11;
    if (3 > v11) {
        goto L_8c113cd0;
    }
    call_8c3827d8(g_8c4d8214);
    if (o->f10c != 0) {
        if (o->f10c != 1) {
            return;
        }
    } else {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3a944a((void *)((&g_8c4d8204)->f04));
        reset_state_8c391c94();
        call_8c3ac53a((void *)((&g_8c4d8204)->f00), (void *)((&g_8c4d820c)->f00), o->fe8);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
        return;
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3ac53a((void *)((&g_8c4d8204)->f04), (void *)((&g_8c4d820c)->f04), o->f120);
    reset_state_8c391c94();
    call_8c3ac53a((void *)((&g_8c4d8204)->f00), (void *)((&g_8c4d820c)->f00), o->fe8);
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
