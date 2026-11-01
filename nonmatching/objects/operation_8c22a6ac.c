/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22a6ac
 * function: operation_8c22a6ac
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 10 of 53 reference instruction lines
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
typedef struct Object Object;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_cc Arg0_cc;
typedef struct Arg0_d0 Arg0_d0;
typedef struct Arg0_d4 Arg0_d4;
typedef struct Arg0_e4 Arg0_e4;
struct Object {
    char unknown0[0xcc];
    Arg0_cc *fcc;
    Arg0_d0 *fd0;
    Arg0_d4 *fd4;
    char unknownd8[0xc];
    Arg0_e4 *fe4;
    int fe8;
    float fec;
    char unknownf0[0x1c];
    Arg0_10c *f10c;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void operation_8c161ce4(void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c22a6ac(Object *o)
{
    float v9;
    if (!(0xb4 > o->fe8)) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xd8)));
        njRotateY_8c37df90(0, (void *)(o->fe4));
        call_8c3827d8((void *)(o->fd0));
        operation_8c161c78((void *)(o->f10c));
        v9 = o->fec;
        draw_tree_a702((void *)(o->fcc), (void *)(o->fd4), v9);
        operation_8c161ce4((void *)(o->f10c));
        njPopMatrixEx_8c38ad10();
    }
}
