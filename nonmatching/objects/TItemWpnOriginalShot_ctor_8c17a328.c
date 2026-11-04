/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17a328
 * function: TItemWpnOriginalShot_ctor_8c17a328
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 6 of 45 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnOriginalShot.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x1dc];
    int f1fc;
};
extern int g_8c319730;
extern void call_8c075398(Object *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c1aab30(void *);
extern void operation_8c01ef30();
Object *TItemWpnOriginalShot_ctor_8c17a328(Object *o, int a1, int a2)
{
    Object **home = &o;
    int pm1;
    (void)home;
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c271764;
    pm1 = 0xa;
    call_8c18e044((void *)(((char *)o + 0x238)), operation_8c01ef30, 0, 4, pm1);
    operation_8c1aab30((void *)((0x234 + (char *)o)));
    a1 = g_8c319730;
    o->tag = a1;
    o->size = 0x26c;
    o->f1fc |= 0x22;
    return o;
}
