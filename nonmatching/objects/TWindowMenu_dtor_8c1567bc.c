/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1567bc
 * function: TWindowMenu_dtor_8c1567bc
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 41 reference instruction lines
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x74];
    Arg0_90 *f90;
    Arg0_94 *f94;
    int f98;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_motion_profile_8c199ba0(void *, short);
extern void operation_8c199b40(int, int);
extern void operator_delete_8c18de08(void *);
extern void destroy_object_8c11924c(void *, short);
extern void operation_8c122774(void *, void *);
Object *TWindowMenu_dtor_8c1567bc(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26eb64;
        destroy_motion_profile_8c199ba0((void *)(o->f94), (short)1);
        operation_8c199b40((int)(o->f98), 1);
        operator_delete_8c18de08((void *)(o->f90));
        destroy_object_8c11924c((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
