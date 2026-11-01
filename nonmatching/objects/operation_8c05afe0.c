/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05afe0
 * function: operation_8c05afe0
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 4 of 70 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode extern)
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
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_x91280 S_x91280;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct S_x91280 {
    Vector3 f00;
};
struct S_vv1 {
    Vector3 f00;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, int);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3be280(int, S_vv1 *, int);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c05afe0(Object *o, S_vv1 *a1)
{
    int v2;
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    njRotateY_8c37df90(0, (int)(-(int)(o->f64)));
    njTranslate_8c3829bc(0, -o->f3c, -o->f40, -o->f44);
    v2 = (int)0;
    while (o->fe0 > v2) {
        *(Vector3 *)&((S_x91280 *)((int)o->fdc + 0x1c + v2 * 0x2c))->f00 = *(Vector3 *)&a1->f00;
        call_8c3be280(0, a1, (int)((int)o->fdc + v2 * 0x2c));
        a1 = (S_vv1 *)((char *)a1 + 12);
        v2 = (int)(v2 + 1);
    }
    njPopMatrixEx_8c38ad10();
}
