/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23b114
 * function: TItemWpnChaoCane_v52_8c23b114
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 42 of 132 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order; review found and fixed behaviour defects
 *   of the generator draft; not proven equivalent to the original
 * class header: src/include/classes/TItemWpnChaoCane.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv3 S_vv3;
typedef struct S_vv32 S_vv32;
typedef struct S_vv32_2c S_vv32_2c;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    int f234;
};
struct S_vv32 {
    char unknown0[0x2c];
    S_vv32_2c *f2c;
};
struct S_vv1 {
    int f00;
    char unknown4[0x28];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    int f00;
    char unknown4[0x14];
    int f18;
    char unknown1c[0x14];
    S_vv2_30 *f30;
};
struct S_vv3 {
    int f00;
    char unknown4[0x14];
    int f18;
};
struct Frame {
    char unknown0[0xc];
};
struct Arg0_13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern int g_8c575570;
extern void operation_8c075730(void *, void *, int);
extern void set_fields_8c0751cc(void);
extern float operation_8c074dbc(void *);
extern void operation_8c075274(float);
extern int operation_8c075894(void *, void *, int, int);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(Frame *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3aa716(S_vv1 *);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c075300(void);
extern void set_fields_8c075220(void);
void TItemWpnChaoCane_v52_8c23b114(Object *o)
{
    Frame frame;
    S_vv32 *v32;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    float t1;
    int t2;
    v32 = (S_vv32 *)o->f38;
    if (v32 != 0) {
        v1 = (S_vv1 *)v32->f2c;
        v1->f00 |= 8;
        v2 = (S_vv2 *)v1->f2c;
        v2->f00 |= 8;
        v3 = (S_vv3 *)v2->f30;
        v3->f00 |= 8;
        operation_8c075730((void *)o, (void *)(o->f13c), 0x30);
        v1->f00 &= -9;
        v2->f00 &= -9;
        v3->f00 &= -9;
        set_fields_8c0751cc();
        g_8c575570 &= -0x11;
        t1 = operation_8c074dbc((void *)o);
        operation_8c075274(t1);
        v1->f00 |= 1;
        v2->f00 &= -3;
        v2->f18 = o->f234 + v2->f18;
        v3->f00 &= -3;
        v3->f18 -= o->f234;
        t2 = operation_8c075894((void *)o, (void *)(o->f13c), 1, (int)(&frame));
        if (t2 != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((Frame *)((&frame)));
            njRotateY_8c37df90(0, (void *)(o->f13c->f64));
            call_8c3aa716(v1);
            njPopMatrixEx_8c38ad10();
        }
        v1->f00 = (unsigned int)v1->f00 >> 1 << 1;
        v2->f00 |= 2;
        v2->f18 -= o->f234;
        v3->f00 |= 2;
        v3->f18 += o->f234;
        operation_8c075300();
        set_fields_8c075220();
    }
}
