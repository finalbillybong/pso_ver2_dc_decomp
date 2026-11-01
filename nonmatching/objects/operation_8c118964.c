/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118964
 * function: operation_8c118964
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 24 of 55 reference instruction lines
 * differing bytes: 12
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
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x100];
    int f124;
    int f128;
};
struct S_vv2 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc];
    int f1c;
};
extern int g_8c3105e8;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void set_colored_trail_colors(void *, unsigned int, unsigned int);
Object *operation_8c118964(Object *o, int a1, int a2, int a3)
{
    int k1;
    int k2;
    Object **home = &o;
    S_vv2 *v2;
    int v1;
    (void)home;
    {
        Object *base = o;
        TObject_ctor_8c0330e4((void *)base, (void *)a1);
        base->dispatch = (void *)0x8c269edc;
        base->tag = (int)(g_8c3105e8);
        base->size = 0x24;
        base->f20 = 0;
    }
    o->dispatch = (void *)0x8c269eb8;
    set_colored_trail_colors((void *)o, (unsigned int)a2, (unsigned int)a3);
    v2 = (S_vv2 *)((char *)o + 0x24);
    v1 = (int)0;
    k1 = 0x124;
    k2 = 0x128;
    while (8 > v1) {
        v2->f0c = *(int *)((char *)o + k1);
        v2->f1c = *(int *)((char *)o + k2);
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 32);
    }
    return o;
}
