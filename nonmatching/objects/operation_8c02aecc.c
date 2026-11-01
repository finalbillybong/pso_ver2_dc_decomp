/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02aecc
 * function: operation_8c02aecc
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 6 of 34 reference instruction lines
 * differing bytes: 16
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
typedef struct Arg0_118 Arg0_118;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0xb0];
    Arg0_118 *f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslateV_8c382a58(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern int prepare_transform_8c01d020(char *, void *, int, float);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c02aecc(Object *o, float f0)
{
    njPushMatrixEx_8c38ae68();
    njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    prepare_transform_8c01d020((char *)o, (void *)(o->f130), (int)(o->f118), f0);
    njPopMatrixEx_8c38ad10();
}
