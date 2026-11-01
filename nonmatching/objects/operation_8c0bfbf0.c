/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bfbf0
 * function: operation_8c0bfbf0
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 40 reference instruction lines
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
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void destroy_field_8c114790(void *, short);
extern void TObjEnemyCustom_dtor_8c0c23c8(void *, short);
extern void operation_8c122774(void *, void *);
Object *operation_8c0bfbf0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26649c;
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x428)), (short)-1);
        destroy_field_8c114790((void *)(((char *)o + 0x404)), (short)-1);
        TObjEnemyCustom_dtor_8c0c23c8((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
