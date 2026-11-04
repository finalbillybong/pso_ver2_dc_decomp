/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d1684
 * function: TObjEneRe7Berura_ctor_8c0d1684
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 6 of 47 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneRe7Berura.h (shared layout for modders; this draft keeps its own local types)
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
};
extern int g_8c306f44;
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c0fbf7c(void *);
extern void initialize_context_blend(void *);
extern void operation_8c05a02c(void *, int);
extern void operation_8c0d1cbc(Object *);
extern void call_8c0d1714(Object *);
Object *TObjEneRe7Berura_ctor_8c0d1684(Object *o, int a1, int a2)
{
    Object **home = &o;
    call_8c05bcc0(o);
    (void)home;
    o->dispatch = (void *)0x8c266f24;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x3f4)));
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x418)));
    initialize_context_blend((void *)(((char *)o + 0x464)));
    a1 = g_8c306f44;
    o->tag = a1;
    o->size = 0x4ac;
    operation_8c05a02c((void *)o, a2);
    operation_8c0d1cbc(o);
    call_8c0d1714(o);
    return o;
}
