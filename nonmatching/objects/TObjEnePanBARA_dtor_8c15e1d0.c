/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15e1d0
 * function: TObjEnePanBARA_dtor_8c15e1d0
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 41 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3f8 Arg0_3f8;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x37c];
    int f398;
    char unknown39c[0x5c];
    Arg0_3f8 *f3f8;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void operation_8c161c38(int);
extern void destroy_field_8c178048(void *, short);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void operation_8c122774(void *, Object *);
Object *TObjEnePanBARA_dtor_8c15e1d0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26f4c0;
        operation_8c052124((void *)o);
        o->f398 = 0;
        operation_8c161c38((int)(o->f3f8));
        destroy_field_8c178048((void *)(((char *)o + 0x408)), (short)-1);
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
