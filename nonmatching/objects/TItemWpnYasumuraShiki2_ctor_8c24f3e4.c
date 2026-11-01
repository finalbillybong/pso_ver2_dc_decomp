/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24f3e4
 * function: TItemWpnYasumuraShiki2_ctor_8c24f3e4
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 34 of 63 reference instruction lines
 * differing bytes: 60
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
    int f22c;
    char unknown230[0x4];
    int f234;
    float f238;
    float f23c;
    float f240;
    int f244;
    float f248;
    float f24c;
    float f250;
};
extern int g_8c33f6f8;
extern void call_8c075398(Object *, int, int);
Object *TItemWpnYasumuraShiki2_ctor_8c24f3e4(Object *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27e5e4;
    o->tag = (int)(g_8c33f6f8);
    o->size = 0x254;
    o->f224 = 4;
    o->f22c = 0;
    o->f228 = (void *)0x8c1c6058;
    o->f220 = 20.0f;
    o->f234 = 0;
    o->f238 = o->f23c = o->f240 = 1e-07f;
    o->f244 = 0;
    o->f248 = o->f24c = o->f250 = 0.0f;
    return o;
}
