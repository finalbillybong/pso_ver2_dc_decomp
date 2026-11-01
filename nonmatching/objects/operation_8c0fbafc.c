/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fbafc
 * function: operation_8c0fbafc
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 14 of 119 reference instruction lines
 * differing bytes: 50
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
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x38];
    Arg0_64 *f64;
    char unknown68[0x2bc];
    Vector3 f324;
    char unknown330[0x64];
    int f394;
    char unknown398[0x10];
    float f3a8;
    Vector3 f3ac;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void clear_global_8c0fbef4(void);
extern void set_transform_node_callback(void *);
extern void operation_8c01cc90(void *);
extern void operation_8c0fbf60(void *);
extern void operation_8c0f7adc(float, float, float, float);
extern void njScaleV_8c37e3d0(int, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0fbf00();
void operation_8c0fbafc(Object *o)
{
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3827d8((void *)(o->f28));
    if (o->f394 != 0) {
        clear_global_8c0fbef4();
        set_transform_node_callback(operation_8c0fbf00);
        operation_8c01cc90((void *)o);
        set_transform_node_callback((void *)0);
        operation_8c0fbf60((void *)(&o->f3ac));
        o->f324 = o->f3ac;
    } else {
        operation_8c0f7adc(o->f3a8, 0.0f, 0.0f, 0.0f);
        njScaleV_8c37e3d0(0, (void *)(((char *)o + 0x39c)));
        clear_global_8c0fbef4();
        set_transform_node_callback(operation_8c0fbf00);
        operation_8c01cc90((void *)o);
        set_transform_node_callback((void *)0);
        operation_8c0fbf60((void *)(&o->f3ac));
        o->f324 = o->f3ac;
        *(int *)0x8c5755a4 = (int)(*(int *)0x8c46f574);
        *(int *)0x8c5755a8 = (int)(*(int *)0x8c46f578);
        *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
    }
    njPopMatrixEx_8c38ad10();
}
