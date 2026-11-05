/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02ae70
 * function: operation_8c02ae70
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 4 of 31 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0xb0];
    int f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslateV_8c382a58(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void prepare_transform_8c01d020(void *, void *, int, float);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c02ae70(Object *o)
{
    njPushMatrixEx_8c38ae68();
    njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    prepare_transform_8c01d020((void *)o, (void *)(o->f130), (int)(o->f118), 0.0f);
    njPopMatrixEx_8c38ad10();
}
