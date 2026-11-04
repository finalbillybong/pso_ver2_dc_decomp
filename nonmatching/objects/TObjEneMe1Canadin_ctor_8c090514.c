/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c090514
 * function: TObjEneMe1Canadin_ctor_8c090514
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 6 of 51 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneMe1Canadin.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x3bc];
    Object *f3dc;
    int f3e0;
    int f3e4;
};
extern int g_8c300a6c;
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c114768(void *);
extern void operation_8c05a02c(void *, int);
extern void operation_8c090c68(void *);
extern void call_8c090680(Object *);
Object *TObjEneMe1Canadin_ctor_8c090514(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int pm1;
    int pm2;
    (void)home;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c265520;
    initialize_object_8c114768((void *)((0x3e8 + (char *)o)));
    pm2 = (int)(g_8c300a6c);
    o->tag = pm2;
    pm1 = 0x4e8;
    o->size = pm1;
    operation_8c05a02c((void *)o, a2);
    o->f3e4 = 0;
    operation_8c090c68((void *)o);
    o->f3dc = o;
    o->f3e0 = a3;
    call_8c090680(o);
    return o;
}
