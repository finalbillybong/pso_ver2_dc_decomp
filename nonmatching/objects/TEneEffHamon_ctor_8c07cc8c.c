/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07cc8c
 * function: TEneEffHamon_ctor_8c07cc8c
 * language: c
 * reference size: 188 bytes
 * compiled size: 192 bytes (+2.1%)
 * differing lines: 50 of 82 reference instruction lines
 * differing bytes: 156
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TEneEffHamon.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    int f2c;
    int f30;
    int f34;
    float f38;
    char unknown3c[0x8];
    float f44;
    float f48;
    float f4c;
    int f50;
    float f54;
    float f58;
    float f5c;
    float f60;
};
struct Arg1 {
    Vector3 f00;
};
extern int g_8c2feb30;
extern S_g8c44be9c *g_8c44be9c;
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TEneEffHamon_ctor_8c07cc8c(Object *o, Arg1 *a1, int a2, int a3, float f0)
{
    int v1;
    TObject_ctor_8c0330e4((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c264204;
    o->tag = (int)(g_8c2feb30);
    o->size = 0x64;
    o->f34 = 0;
    o->f30 = 0;
    o->f2c = 0;
    o->f38 = 1.0f;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a1->f00;
    o->f44 = f0;
    o->f54 = 0.9f;
    o->f60 = o->f5c = o->f58 = 1.0f;
    o->f50 = a3;
    v1 = (int)a2;
    if (!(a2 > 0)) {
        v1 = (int)1;
    }
    o->f48 = 1.0f / (float)v1;
    o->f4c = -0.9f / (float)v1;
    return o;
}
