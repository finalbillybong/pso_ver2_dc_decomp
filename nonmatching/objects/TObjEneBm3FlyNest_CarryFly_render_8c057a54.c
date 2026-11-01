/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c057a54
 * function: TObjEneBm3FlyNest_CarryFly_render_8c057a54
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 8 of 52 reference instruction lines
 * differing bytes: 14
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c467910 S_g8c467910;
typedef struct S_g8c467910_42c S_g8c467910_42c;
typedef struct S_g8c467910_42c_8 S_g8c467910_42c_8;
typedef struct S_g8c467910_42c_c S_g8c467910_42c_c;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_4c Arg0_4c;
struct S_g8c467910 {
    char unknown0[0x42c];
    S_g8c467910_42c *f42c;
};
struct S_g8c467910_42c {
    char unknown0[0x8];
    S_g8c467910_42c_8 *f08;
    S_g8c467910_42c_c *f0c;
};
struct Object {
    char unknown0[0x30];
    int f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    char unknown3c[0x8];
    Arg0_44 *f44;
    char unknown48[0x4];
    Arg0_4c *f4c;
    float f50;
};
extern S_g8c467910 *g_8c467910;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3addea(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
void TObjEneBm3FlyNest_CarryFly_render_8c057a54(Object *o)
{
    call_8c3827d8((void *)(g_8c467910->f42c->f0c));
    njPushMatrixEx_8c38ae68();
    if (o->f30 == 0) {
        translate_current_matrix_v_8c382a40((void *)(o->f34));
    } else {
        translate_current_matrix_v_8c382a40((void *)(o->f38));
    }
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
    njRotateY_8c37df90(0, (void *)(o->f44));
    call_8c3addea((void *)(g_8c467910->f42c->f08), (void *)(o->f4c), o->f50);
    njPopMatrixEx_8c38ad10();
}
