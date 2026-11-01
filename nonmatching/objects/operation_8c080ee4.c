/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c080ee4
 * function: operation_8c080ee4
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 10 of 72 reference instruction lines
 * differing bytes: 21
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
typedef struct S_g8c469bc0 S_g8c469bc0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_fc Arg0_fc;
typedef struct S_x29328_0 S_x29328_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    char unknowne8[0x8];
    float ff0;
    Arg0_f4 *ff4;
    Arg0_f8 *ff8;
    Arg0_fc *ffc;
};
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
void operation_8c080ee4(Object *o)
{
    int v2;
    int v1;
    v2 = (int)0;
    v1 = (int)0x100;
    while (4 > v2) {
        call_8c0345cc((void *)(*(S_x29328_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2))), (int)(*(unsigned short *)((char *)0x8c284f70 + (o->fe4 << 1))));
        v2 = (int)(v2 + 1);
    }
    call_8c3827d8((void *)(*(S_g8c469bc0 **)0x8c469bc0));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3a944a((void *)(o->ff4));
    reset_state_8c391c94();
    call_8c3ac53a((void *)(o->ff8), (void *)(o->ffc), o->ff0);
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
