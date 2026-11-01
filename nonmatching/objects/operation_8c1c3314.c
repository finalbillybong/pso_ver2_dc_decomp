/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c3314
 * function: operation_8c1c3314
 * language: c
 * reference size: 316 bytes
 * compiled size: 312 bytes (-1.3%)
 * differing lines: 16 of 115 reference instruction lines
 * differing bytes: 215
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0xb0];
    int f118;
    char unknown11c[0x68];
    Arg0_184 *f184;
};
struct Arg0_184 {
    char unknown0[0x3d4];
    int f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void operation_8c1c3450(void *, int);
extern void njPushMatrix_8c38ade4(int);
extern void operation_8c02a998(int);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c1c34d4(int, int, int);
void operation_8c1c3314(Object *o)
{
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((0x3c + (char *)o)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3827d8((void *)((char *)o->f184 + 0x3cc));
    operation_8c1c3450((void *)o, o->f184->f3e0);
    njPushMatrix_8c38ade4(o->f118 + 0xe80);
    call_8c3827d8((void *)((char *)o->f184 + 0x2a0));
    operation_8c02a998(o->f184->f3dc);
    njPopMatrixEx_8c38ad10();
    if (o->f184->f3d4 != 0) {
        njPushMatrix_8c38ade4(0xec0 + o->f118);
        call_8c3827d8((void *)((0x174 + (char *)o->f184)));
        operation_8c1c34d4((int)o, o->f184->f3d4, (int)((char *)o + 0x134));
        njPopMatrixEx_8c38ad10();
    }
    if (0 != o->f184->f3d8) {
        njPushMatrix_8c38ade4(0xec0 + o->f118);
        call_8c3827d8((void *)((0x174 + (char *)o->f184)));
        operation_8c02a998(o->f184->f3d8);
        njPopMatrixEx_8c38ad10();
    }
    njPopMatrixEx_8c38ad10();
}
