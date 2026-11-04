/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23c8a8
 * function: TItemWpnFast_ctor_8c23c8a8
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 4 of 51 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnFast.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x200];
    float f220;
    short f224;
    char unknown226[0x2];
    void *f228;
    void *f22c;
    void *f230;
    float f234;
    float f238;
    float f23c;
    char unknown240[0x40];
    int f280;
};
extern void call_8c075398(Object *, int, int);
extern void TItemShootFast_create_8c23ca68();
extern void operation_8c23cb88();
extern void operation_8c23cbdc();
Object *TItemWpnFast_ctor_8c23c8a8(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27a69c;
    o->tag = (int)(*(int *)0x8c33a590);
    o->size = 0x284;
    o->f224 = 1;
    o->f22c = TItemShootFast_create_8c23ca68;
    o->f228 = operation_8c23cb88;
    o->f230 = operation_8c23cbdc;
    o->f23c = 0.1f;
    o->f238 = 0.1f;
    o->f234 = 0.1f;
    o->f280 = 1;
    {
        char *v9;
        v9 = (char *)o;
        v9 += 0x220;
        *(float *)v9 = 10.0f;
    }
    return o;
}
