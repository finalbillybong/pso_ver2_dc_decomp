/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c255fe0
 * function: operation_8c255fe0
 * language: c
 * reference size: 96 bytes
 * compiled size: 76 bytes (-20.8%)
 * differing lines: 32 of 31 reference instruction lines
 * differing bytes: 87
 * provenance: generator draft (experimental generator, mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_x88784 S_x88784;
typedef struct S_x89104 S_x89104;
typedef struct S_x89104_0 S_x89104_0;
struct S_x89104 {
    S_x89104_0 *f00;
};
struct S_vv1 {
    char unknown0[0xe4];
    short fe4;
};
struct S_x88784 {
    char unknown0[0x11c];
    float f11c;
};
extern float squared_distance_xz(void *, void *);
extern void call_8c256040(void);
void operation_8c255fe0(void)
{
    S_vv1 *v1;
    int v2;
    float v3;
    int v4;
    float t1;
    v1 = (S_vv1 *)((S_x89104 *)(/* ? r13 */ 0))->f00;
    v2 = (int)v1->fe4;
    if (v2 != 0) {
        return;
    }
    t1 = squared_distance_xz((void *)((int)v1 + 0x3c), (void *)(((char *)/* ? r9 */ 0 + 0x3c)));
    v3 = (float)((S_x88784 *)(/* ? r9 */ 0))->f11c;
    if (!(v3 > t1)) {
        return;
    }
    v4 = (int)*(int *)((char *)((char *)/* ? r9 */ 0 + 0x0) + (/* ? r8 */ 0));
    if (v4 > 7) {
        return;
    }
    if (!(v4 >= 0)) {
        return;
    }
    call_8c256040();
}
