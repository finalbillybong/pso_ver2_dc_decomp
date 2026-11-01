/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c8efc
 * function: TObjEneRe4Sorcerer_dtor_8c0c8efc
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 6 of 76 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct S_c8c053d84 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void operation_8c122774(void *, void *);
Object *TObjEneRe4Sorcerer_dtor_8c0c8efc(Object *o, int a1)
{
    int v3;
    int v15;
    int v1;
    int v2;
    int v4;
    S_c8c053d84 *t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c266a94;
        v1 = (int)0x400;
        v2 = (int)0xffff;
        v15 = (int)0;
        goto L_8c0c8f46;
        v3 = (int)0;
L_8c0c8f1e:;
        v4 = (int)(v3 << 1);
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v4))));
        if (t1 != 0) {
            t1->f04 |= 1;
        }
        *(short *)((char *)((char *)((int)o + v1) + 0x0) + (v4)) = v2;
        v15 = (int)(v3 + 1);
L_8c0c8f46:;
        v3 = (int)v15;
        if (2 > v15) {
            goto L_8c0c8f1e;
        }
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x490)), (short)-1);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x418)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
