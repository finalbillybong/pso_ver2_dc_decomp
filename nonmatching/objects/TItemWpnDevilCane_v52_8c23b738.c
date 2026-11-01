/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23b738
 * function: TItemWpnDevilCane_v52_8c23b738
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 14 of 91 reference instruction lines
 * differing bytes: 14
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv42 S_vv42;
typedef struct S_vv42_2c S_vv42_2c;
typedef struct S_vv42_2c_30 S_vv42_2c_30;
typedef struct S_vv42_2c_30_30 S_vv42_2c_30_30;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
};
struct S_vv42 {
    char unknown0[0x2c];
    S_vv42_2c *f2c;
};
struct S_vv42_2c {
    char unknown0[0x30];
    S_vv42_2c_30 *f30;
};
struct S_vv42_2c_30 {
    char unknown0[0x30];
    S_vv42_2c_30_30 *f30;
};
struct S_vv1 {
    int f00;
    char unknown4[0x28];
    S_vv1_2c *f2c;
};
struct Frame {
    char unknown0[0xc];
};
struct Arg0_13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern int g_8c575570;
extern void operation_8c075730(Object *, Arg0_13c *, int);
extern int operation_8c075894(void *, void *, int, int);
extern void njPushMatrixEx_8c38ae68(void);
extern void set_fields_8c0751cc(void);
extern float operation_8c074dbc(void *);
extern void operation_8c075274(float);
extern void translate_current_matrix_v_8c382a40(Frame *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3aa716(S_vv1 *);
extern void reset_state_8c391c94(void);
extern void reset_state_8c391cc4(void);
extern void operation_8c075300(void);
extern void njPopMatrixEx_8c38ad10(void);
void TItemWpnDevilCane_v52_8c23b738(Object *o)
{
    Frame frame;
    S_vv42 *v42;
    S_vv1 *v1;
    int t1;
    float t2;
    v42 = (S_vv42 *)o->f38;
    if (v42 != 0) {
        v1 = (S_vv1 *)v42->f2c->f30->f30;
        v1->f00 |= 0x18;
        operation_8c075730(o, (Arg0_13c *)(o->f13c), 0x30);
        v1->f00 &= -0x19;
        t1 = operation_8c075894((void *)o, (void *)(o->f13c), 5, (int)(&frame));
        if (t1 != 0) {
            njPushMatrixEx_8c38ae68();
            set_fields_8c0751cc();
            g_8c575570 &= -0x11;
            t2 = operation_8c074dbc((void *)o);
            operation_8c075274(t2);
            translate_current_matrix_v_8c382a40((Frame *)((&frame)));
            njRotateY_8c37df90(0, (void *)(o->f13c->f64));
            v1->f00 |= 0x11;
            call_8c3aa716(v1);
            reset_state_8c391c94();
            call_8c3aa716((S_vv1 *)(v1->f2c));
            reset_state_8c391cc4();
            v1->f00 &= -0x12;
            operation_8c075300();
            njPopMatrixEx_8c38ad10();
            njPopMatrixEx_8c38ad10();
        }
    }
}
