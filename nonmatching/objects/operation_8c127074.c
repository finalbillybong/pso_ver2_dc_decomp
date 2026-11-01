/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127074
 * function: operation_8c127074
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 26 of 67 reference instruction lines
 * differing bytes: 34
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg3 {
    int f00;
};
struct Object {
    char unknown0[0x64];
    int f64;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, Arg2 *, Arg2 *);
extern void call_8c3bdf60(Arg2 *, void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c127074(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    int v1;
    njPushMatrixEx_8c38ae68();
    v1 = (int)(int)((float)(a1 * 0x5a + 0x2d) * 65536.0f / 360.0f);
    a3->f00 = (int)o->f64 + v1;
    a2->f00 = 0.0f;
    a2->f04 = 0.0f;
    a2->f08 = 13.0f;
    njUnitMatrix_8c37b5c4(0);
    njRotateY_8c37df90(0, v1);
    call_8c3be280(0, a2, a2);
    call_8c3bdf60(a2, (void *)(((char *)o + 0x3c)));
    njPopMatrixEx_8c38ad10();
}
