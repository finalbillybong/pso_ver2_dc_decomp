/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b7dec
 * function: operation_8c1b7dec
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 12 of 58 reference instruction lines
 * differing bytes: 37
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x35a];
    unsigned short f3c2;
    char unknown3c4[0xc];
    float f3d0;
};
extern void operation_8c1086fc(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void operation_8c1b80dc(Object *);
extern void njPopMatrixEx_8c38ad10(void);
extern void hs_8c21aa68(int, float);
extern void reset_state_8c391cc4(void);
void operation_8c1b7dec(Object *o)
{
    operation_8c1086fc();
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40(((char *)o + 0x3c));
    njRotateY_8c37df90(0, o->f64);
    operation_8c1b80dc(o);
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40(((char *)o + 0x47c));
    njRotateY_8c37df90(0, o->f64);
    hs_8c21aa68(o->f3c2, o->f3d0);
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
}
