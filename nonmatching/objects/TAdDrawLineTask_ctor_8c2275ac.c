/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2275ac
 * function: TAdDrawLineTask_ctor_8c2275ac
 * language: c
 * reference size: 692 bytes
 * compiled size: 692 bytes (+0.0%)
 * differing lines: 260 of 318 reference instruction lines
 * differing bytes: 325
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef union Col {
    int w;
    struct {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    } c;
} Col;
typedef struct Seg {
    int f00;
    float x0;
    float z0;
    float y0;
    int c0;
    float x1;
    float z1;
    float y1;
    int c1;
    float scale;
    float width;
} Seg;
typedef struct Vert {
    float x;
    float z;
    float y;
    int c;
} Vert;
typedef struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Seg f24;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    char f64;
    char f65;
    char f66;
    char f67;
    Vert f68[2];
    Vert f88[2];
    int fa8;
    float fac;
    float fb0;
} Object;
extern int g_8c337d98;
extern void TObject_ctor_8c0330e4(void *, void *);
extern float signed_sqrt_8c37f6c0(float);
Object *TAdDrawLineTask_ctor_8c2275ac(Object *o, int a1, Seg *a2, int a3)
{
    Object **home = &o;
    float dx;
    float dz;
    float len;
    float h;
    Col c1;
    Col c0;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278bbc;
    o->tag = g_8c337d98;
    o->size = 0xb4;
    o->f20 = a3;
    o->f24 = *a2;
    o->f24.y0 = -1.0f / o->f24.y0;
    o->f24.y1 = -1.0f / o->f24.y1;
    dx = o->f24.x1 - o->f24.x0;
    dz = o->f24.z1 - o->f24.z0;
    len = signed_sqrt_8c37f6c0(dx * dx + dz * dz);
    o->f54 = len / o->f24.scale;
    o->f58 = dx / o->f54;
    o->f5c = dz / o->f54;
    o->f60 = (o->f24.y1 - o->f24.y0) / o->f54;
    c0.w = o->f24.c0;
    c1.w = o->f24.c1;
    o->f64 = (float)(c1.c.r - c0.c.r) / o->f54;
    o->f65 = (float)(c1.c.g - c0.c.g) / o->f54;
    o->f66 = (float)(c1.c.b - c0.c.b) / o->f54;
    o->f67 = (float)(c1.c.a - c0.c.a) / o->f54;
    o->fa8 = o->f24.c0;
    o->f50 = 0.0f;
    h = o->f24.width / 2.0f;
    o->fac = dz * -1.0f * h / len;
    o->fb0 = dx * h / len;
    o->f68[0].x = o->f24.x0 + o->fac;
    o->f68[0].z = o->f24.z0 + o->fb0;
    o->f68[0].y = o->f24.y0;
    o->f68[0].c = o->f24.c0;
    o->f68[1].x = o->f24.x0 - o->fac;
    o->f68[1].z = o->f24.z0 - o->fb0;
    o->f68[1].y = o->f24.y0;
    o->f68[1].c = o->f24.c0;
    o->f88[0] = o->f68[0];
    o->f88[1] = o->f68[1];
    o->f04 |= 0x10;
    return o;
}
