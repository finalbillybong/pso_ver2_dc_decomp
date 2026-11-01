/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e61f8
 * function: TObjEneDimedian_dtor_8c0e61f8
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 4 of 65 reference instruction lines
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
typedef struct Arg0_3e0 Arg0_3e0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct Arg0_3e0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c012630(Object *);
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_object_8c0e3814(void *, short);
extern void operation_8c122774(void *, void *);
Object *TObjEneDimedian_dtor_8c0e61f8(Object *o, int a1)
{
    int v1;
    int v2;
    int v6;
    if (o != 0) {
        o->dispatch = (void *)0x8c267b24;
        v6 = (int)0;
        goto L_8c0e6230;
        v1 = (int)0;
L_8c0e6218:;
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)o + 0x3e0) + (v2)) != 0) {
            (*(Arg0_3e0 **)((char *)((char *)o + 0x3e0) + (v2)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x3e0) + (v2)) = 0;
        }
        v6 = (int)(v1 + 1);
L_8c0e6230:;
        v1 = (int)v6;
        if (2 > v6) {
            goto L_8c0e6218;
        }
        call_8c012630(o);
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x3e8)), (short)-1);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3c4)), (short)-1);
        destroy_object_8c0e3814((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
