/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f48e4
 * function: TObjEneDf2Bringer_ctor_8c0f48e4
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 6 of 42 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneDf2Bringer.h (shared layout for modders; this draft keeps its own local types)
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
extern int g_8c30a088;
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c0fbf7c(void *);
extern void initialize_context_blend(void *);
extern void operation_8c05a02c(void *, int);
extern void operation_8c0f4ebc(Object *);
extern void call_8c0f4968(Object *);
Object *TObjEneDf2Bringer_ctor_8c0f48e4(Object *o, int a1, int a2)
{
    Object **home = &o;
    void *pm1;
    void *pm2;
    void *pm3;
    int pm4;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c268870;
    pm2 = (void *)((0x3e0 + (char *)o));
    (void)home;
    initialize_object_8c0fbf7c(pm2);
    pm3 = (void *)(((char *)o + 0x3fc));
    pm1 = pm3;
    initialize_context_blend(pm1);
    pm4 = (int)(g_8c30a088);
    o->tag = pm4;
    o->size = 0x490;
    operation_8c05a02c((void *)o, a2);
    operation_8c0f4ebc(o);
    call_8c0f4968(o);
    return o;
}
