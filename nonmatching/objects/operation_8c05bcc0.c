/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05bcc0
 * function: operation_8c05bcc0
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 2 of 61 reference instruction lines
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
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x370];
    int f390;
    int f394;
    float f398;
    int f39c;
    int f3a0;
    int f3a4;
};
extern int g_8c2f35d0;
extern int g_8c2f35d4;
extern void TObjEnemy_ctor_8c012008(void *);
extern void reset_link_8c05bf28(void *);
extern void initialize_float_fields_8c05be40(void *);
extern void operation_8c05bf44(void *, int);
extern void operation_8c05c1bc(void *, int);
Object *operation_8c05bcc0(Object *o)
{
    Object **home = &o;
    (void)home;
    {
        Object *base = o;
        TObjEnemy_ctor_8c012008((void *)base);
        base->dispatch = (void *)0x8c2627b8;
        base->tag = (int)(g_8c2f35d0);
        base->size = 0x3a8;
        base->f390 = 0;
        base->f394 = 0;
        base->f398 = 5.0f;
        base->f39c = 0;
        base->f3a0 = 0;
        base->f3a4 = 0;
    }
    o->dispatch = (void *)0x8c2625f8;
    o->tag = (int)(g_8c2f35d4);
    o->size = 0x3dc;
    reset_link_8c05bf28((void *)o);
    initialize_float_fields_8c05be40((void *)o);
    operation_8c05bf44((void *)o, 0x1e);
    operation_8c05c1bc((void *)o, 0x1e);
    return o;
}
