/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21ee0c
 * function: operation_8c21ee0c
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 10 of 98 reference instruction lines
 * differing bytes: 12
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
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x1c];
    int f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
    char unknown134[0xa90];
    int fbc4;
};
extern void call_8c013c58(Object *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslateV_8c382a58(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void operation_8c03bdcc(void *);
extern void operation_8c026e24(void *);
extern void call_8c3827d8(void *);
extern void operation_8c01ce18(void *);
extern void operation_8c03be04(void *);
extern void operation_8c021b50(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void notify_children_8c021c4c(void *);
extern void operation_8c013e74(void);
extern void prepare_transform_8c01d020(void *, void *, int, float);
void operation_8c21ee0c(Object *o)
{
    if (((o->f34 & 0x2000000)) == 0 && o->fbc4 == 0) {
        call_8c013c58(o);
        njPushMatrixEx_8c38ae68();
        njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        operation_8c03bdcc((void *)(((char *)o + 0x58c)));
        operation_8c026e24((void *)o);
        call_8c3827d8((void *)(((char *)o + 0xbbc)));
        operation_8c01ce18((void *)o);
        operation_8c03be04((void *)(((char *)o + 0x58c)));
        operation_8c021b50((void *)o);
        njPopMatrixEx_8c38ad10();
        notify_children_8c021c4c((void *)o);
        operation_8c013e74();
        return;
    }
    njPushMatrixEx_8c38ae68();
    njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    prepare_transform_8c01d020((void *)o, (void *)(o->f130), (int)(o->f118), o->ff8);
    njPopMatrixEx_8c38ad10();
}
