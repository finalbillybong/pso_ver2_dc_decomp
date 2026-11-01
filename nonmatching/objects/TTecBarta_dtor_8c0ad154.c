/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ad154
 * function: TTecBarta_dtor_8c0ad154
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 61 reference instruction lines
 * differing bytes: 3
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2852d0 S_L8c2852d0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_14c_0 Arg0_14c_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xb0];
    int fcc;
    char unknownd0[0x7c];
    Arg0_14c *f14c;
};
struct S_L8c2852d0 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_14c_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c2852d0 g_8c2852d0;
extern void operator_delete_8c18de08(void *, void *, int, int);
extern void destroy_context_8c0b9ce8(void *, short);
extern void operation_8c122774(void *, Object *);
Object *TTecBarta_dtor_8c0ad154(Object *o, int a1)
{
    int v2;
    unsigned int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c265dc8;
        v1 = (unsigned int)0;
        while ((unsigned int)*(int *)((char *)&g_8c2852d0.f04 + (o->fcc << 3)) > v1) {
            v2 = (int)(v1 << 2);
            (*(Arg0_14c_0 **)((char *)((char *)o->f14c + 0x0) + (v2)))->f04 |= 1;
            *(int *)((char *)((char *)o->f14c + 0x0) + (v2)) = 0;
            v1 = (unsigned int)(v1 + 1);
        }
        operator_delete_8c18de08((void *)(o->f14c), (void *)(o->f14c), v2, v1);
        destroy_context_8c0b9ce8((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
