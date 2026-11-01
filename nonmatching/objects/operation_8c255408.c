/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c255408
 * function: operation_8c255408
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 4 of 74 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_118 S_vv1_118;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0xb0];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0xa4];
    int f1e4;
};
struct S_vv1 {
    char unknown0[0x118];
    S_vv1_118 *f118;
};
extern int g_8c575570;
extern void njPushMatrix_8c38ade4(void *);
extern void set_fields_8c0751cc(void);
extern float operation_8c074dbc(void *);
extern void operation_8c075274(float);
extern void reset_state_8c391c94(void);
extern void apply_resource_3827d8(void *);
extern void call_8c3aa716(void *);
extern void reset_state_8c391cc4(void);
extern void operation_8c075300(void);
extern void set_fields_8c075220(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c255408(Object *o, int a1)
{
    S_vv1 *v1;
    float t1;
    if (o->f38 != 0) {
        v1 = (S_vv1 *)o->f13c;
        if (v1 != 0 && ((o->f34 & 0x8000000)) == 0 && ((o->fec & 0x40)) == 0) {
            njPushMatrix_8c38ade4((void *)(&*(int *)((char *)((char *)v1->f118 + 0x0) + (a1 << 6))));
            set_fields_8c0751cc();
            g_8c575570 &= -0x11;
            t1 = operation_8c074dbc((void *)o);
            operation_8c075274(t1);
            if (o->f1e4 == 1) {
                reset_state_8c391c94();
            }
            apply_resource_3827d8((void *)(o->f28));
            call_8c3aa716((void *)(o->f38));
            if (o->f1e4 == 1) {
                reset_state_8c391cc4();
            }
            operation_8c075300();
            set_fields_8c075220();
            njPopMatrixEx_8c38ad10();
        }
    }
}
