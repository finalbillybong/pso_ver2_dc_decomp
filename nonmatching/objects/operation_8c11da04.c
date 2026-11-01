/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11da04
 * function: operation_8c11da04
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 34 of 69 reference instruction lines
 * differing bytes: 38
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
typedef struct S_g8c4d8384 S_g8c4d8384;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_fc Arg0_fc;
typedef struct S_x17856_0 S_x17856_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    float fe8;
    char unknownec[0x4];
    unsigned short ff0;
    char unknownf2[0x2];
    Arg0_f4 *ff4;
    Arg0_f8 *ff8;
    Arg0_fc *ffc;
};
extern S_g8c4d8384 *g_8c4d8384;
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
void operation_8c11da04(Object *o)
{
    int v1;
    int v2;
    int v11;
    v1 = (int)0x100;
    v11 = (int)0;
    goto L_8c11da2a;
    v2 = (int)0;
L_8c11da14:;
    call_8c0345cc((void *)(*(S_x17856_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2))), (int)(o->ff0));
    v11 = (int)(v2 + 1);
L_8c11da2a:;
    v2 = (int)v11;
    if (0xc > v11) {
        goto L_8c11da14;
    }
    call_8c3827d8(g_8c4d8384);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3a944a((void *)(o->ff8));
    reset_state_8c391c94();
    call_8c3ac53a((void *)(o->ff4), (void *)(o->ffc), o->fe8);
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
