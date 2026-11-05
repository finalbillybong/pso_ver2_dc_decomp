/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21cac8
 * function: operation_8c21cac8
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 6 of 99 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c21c6fc S_c8c21c6fc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x98];
    Arg0_98 *f98;
};
struct Arg0_98 {
    char f00;
};
struct S_c8c21c6fc {
    int f00;
};
extern S_g8c418248 *g_8c418248;
extern void operation_8c1cdcdc(void *);
extern void operation_8c1cdc94(void *);
extern S_c8c21c6fc *call_8c21c6fc(int);
extern void operation_8c1cda9c(void *, int, int, int, int);
extern int operation_8c21c8a8(int);
extern void operation_8c20b478(int, void *, void *);
extern int get_field_wrapper_8c21f32c(void *);
extern int operation_8c21f370(void *);
extern void operation_8c1cdd08(void *);
void operation_8c21cac8(Object *o)
{
    int v2;
    int v1;
    char *v3;
    S_c8c21c6fc *t1;
    int t2;
    int t3;
    int t4;
    operation_8c1cdcdc((void *)o);
    operation_8c1cdc94((void *)o);
    v2 = (int)0;
    v1 = (int)(o->f98->f00 * 4);
    v3 = (char *)v1;
    while (4 > v2) {
        t1 = call_8c21c6fc((int)(v3));
        if (t1->f00 != 0) {
            if (t1->f00 == 1) {
                goto L_8c21cb20;
            }
            if (t1->f00 == 2) {
                goto L_8c21cb38;
            }
            if (t1->f00 == 3) {
                goto L_8c21cb56;
            }
        } else {
            operation_8c1cda9c((void *)o, (int)(v3), 0x2d, 0, (int)(v3));
            goto L_8c21cb74;
L_8c21cb20:;
            t2 = operation_8c21c8a8((int)(((char *)t1 + 0x4)));
            operation_8c1cda9c((void *)o, (int)(v3), 0x12, t2, (int)(v3));
            goto L_8c21cb74;
L_8c21cb38:;
            operation_8c20b478((int)(((char *)t1 + 0x4)), (void *)((void *)0x8c4dbe40), g_8c418248);
            operation_8c1cda9c((void *)o, (int)(v3), 0x10, (int)((void *)0x8c4dbe40), (int)(v3));
            goto L_8c21cb74;
L_8c21cb56:;
            t3 = get_field_wrapper_8c21f32c((void *)(((char *)t1 + 0x4)));
            t4 = operation_8c21f370((void *)t3);
            operation_8c1cda9c((void *)o, (int)(v3), 0x11, t4, (int)(v3));
        }
L_8c21cb74:;
        v2 = (int)(v2 + 1);
        v3 = (char *)(v3 + 1);
    }
    operation_8c1cdd08((void *)o);
}
