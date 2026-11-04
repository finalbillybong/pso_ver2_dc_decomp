/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c246638
 * function: TObjTombstone_ctor_8c246638
 * language: c
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 18 of 125 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjTombstone.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct S_g8c510e80 S_g8c510e80;
typedef struct S_g8c510e80_42c S_g8c510e80_42c;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg3 Arg3;
typedef struct Block_p0_f8 {
    char unknown0[0x10];
    Vector3 f10;
    char unknown1c[0x2c];
} Block_p0_f8;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x7c];
    Arg0_e4 *fe4;
    float fe8;
    float fec;
    float ff0;
    float ff4;
    Block_p0_f8 ff8;
    char unknown140[0x120];
    int f260;
    int f264;
};
struct S_g8c510e80 {
    char unknown0[0x42c];
    S_g8c510e80_42c *f42c;
};
struct S_g8c510e80_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg3 {
    Block72 f00;
};
extern int g_8c33af1c;
extern int g_8c418248;
extern int g_8c418258;
extern S_g8c510e80 *g_8c510e80;
extern void operation_8c051eb8(void *);
extern void operation_8c2475cc(int, void *);
extern void call_8c246b34(Object *);
Object *TObjTombstone_ctor_8c246638(Object *o, int a1, int a2, Arg3 *a3)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c27cf1c;
    o->tag = (int)(g_8c33af1c);
    o->size = 0x268;
    if (g_8c510e80 == 0) {
        return o;
    }
    o->f28 = (int)(g_8c510e80->f42c->f0c);
    o->f38 = (int)(g_8c510e80->f42c->f08);
    o->fe4 = (Arg0_e4 *)a2;
    *(Block72 *)&o->ff8 = *(Block72 *)&a3->f00;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->ff8.f10;
    o->f64 = (int)(o->fe4) << 0xd;
    o->fe8 = 0.0f;
    o->fec = 0.0f;
    o->ff0 = 0.0f;
    o->ff4 = 0.0f;
    o->f260 = 0;
    operation_8c2475cc((int)(o->fe4), (void *)(&o->f3c));
    call_8c246b34(o);
    o->f264 = 0;
    if (g_8c418248 != g_8c418258) {
        o->f264 = 1;
    }
    return o;
}
