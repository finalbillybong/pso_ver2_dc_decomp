/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c8c08
 * function: TObjEneRe4Sorcerer_ctor_8c0c8c08
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 18 of 57 reference instruction lines
 * differing bytes: 28
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneRe4Sorcerer.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x414];
    int f434;
};
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c0fbf7c(void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_context_blend(void *);
extern void operation_8c05a02c(Object *, int);
extern void operation_8c0c91dc(Object *);
extern void call_8c0c8cb8(Object *);
Object *TObjEneRe4Sorcerer_ctor_8c0c8c08(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c266a94;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x418)));
    call_8c18e044((void *)(((char *)o + 0x438)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->f434 = 0;
    initialize_context_blend((void *)(((char *)o + 0x490)));
    o->tag = (int)(*(int *)0x8c3067c8);
    o->size = 0x4b8;
    operation_8c05a02c(o, a2);
    operation_8c0c91dc(o);
    call_8c0c8cb8(o);
    return o;
}
