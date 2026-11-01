/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7600
 * function: operation_8c1d7600
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct Arg0_30 {
    int f00;
    Arg0_30_4 *f04;
};
struct S_vv2 {
    char unknown0[0x10];
    int f10;
};
extern Vector3 g_8c32a1f8;
extern void call_8c0e196c(void *, void *);
extern void operation_8c1d78a8(void *);
extern void call_8c0e2278(int, void *, int);
extern void initialize_fields_8c0e24e8(void *);
extern int operation_8c1c7548(void *);
void operation_8c1d7600(Object *o)
{
    char *v1;
    S_vv2 *v2;
    int t1;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329f0c));
    *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a1f8;
    v1 = (char *)o->f30->f00;
    operation_8c1d78a8((void *)o);
    call_8c0e2278((int)(v1), (void *)((void *)0x8c4dbe40), 0x20);
    initialize_fields_8c0e24e8((void *)v1);
    v2 = (S_vv2 *)o->f30->f04;
    t1 = operation_8c1c7548((void *)(o->f70));
    v2->f10 = (unsigned char)t1;
}
