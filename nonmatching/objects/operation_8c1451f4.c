/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1451f4
 * function: operation_8c1451f4
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 18 of 97 reference instruction lines
 * differing bytes: 30
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
typedef struct S_vv1 S_vv1;
typedef struct Block_vv1_0 {
    float f00;
    float f04;
    float f08;
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
struct Object {
    char unknown0[0x3dc];
    int f3dc;
    char unknown3e0[0x164];
    Vector3 f544;
    Vector3 f550;
    int f55c;
};
extern void call_8c05bb30(void *, void *, float);
extern void call_8c3bdf60(S_vv1 *);
extern int check_range_8c01cf68(void *, float);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c1451f4(Object *o)
{
    Vector3 *v2;
    int t1;
    int t2;
    call_8c05bb30((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x538)), 0.3f);
    call_8c05bb30((void *)(((char *)o + 0x4f0)), (void *)(&o->f544), 0.3f);
    v2 = &o->f550;
    *v2 = o->f544;
    call_8c3bdf60((S_vv1 *)v2);
    v2->x *= 0.5f;
    v2->y *= 0.5f;
    v2->z *= 0.5f;
    if (((o->f3dc & 0x100)) != 0) {
        t1 = check_range_8c01cf68((void *)o, 3.0f);
        if (t1 == 0) {
            t2 = check_range_8c01cf68((void *)o, 20.0f);
            if (t2 == 0) {
                goto L_8c145288;
            }
        }
        o->f55c = 0;
    }
L_8c145288:;
    if (0x10 >= o->f55c) {
        call_8c05fd7c(0x30000, o, (void *)(((char *)o + 0x550)), 0, 0);
        o->f55c += 1;
    }
}
