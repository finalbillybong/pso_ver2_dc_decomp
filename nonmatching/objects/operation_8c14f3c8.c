/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14f3c8
 * function: operation_8c14f3c8
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 6 of 89 reference instruction lines
 * differing bytes: 6
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
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_a0 Arg0_a0;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x10];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2c];
    int f94;
    int f98;
    Arg0_9c *f9c;
    Arg0_a0 *fa0;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    char unknown94[0x4];
    float f98;
};
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern int call_8c18e768(void *, int);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c14f3c8(Object *o)
{
    int t1;
    if (*(int *)0x8c46ee80 != 0) {
        o->f3c = (*(S_g8c46ee80 **)0x8c46ee80)->f90;
        o->f44 = (*(S_g8c46ee80 **)0x8c46ee80)->f98;
    }
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    o->f28 = (Arg0_28 *)o->f94;
    translate_current_matrix_v_8c382a40((void *)(&o->f3c));
    t1 = call_8c18e768((void *)(o->f64), 2);
    njRotateY_8c37df90(0, t1);
    call_8c3827d8((void *)(o->f28));
    call_8c3aa716((void *)(o->f9c));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    o->f28 = (Arg0_28 *)o->f98;
    translate_current_matrix_v_8c382a40((void *)(&o->f3c));
    njRotateY_8c37df90(0, (int)(0x10000 - (int)o->f64));
    call_8c3827d8((void *)(o->f28));
    call_8c3aa716((void *)(o->fa0));
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
}
