/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f0278
 * function: TOWreckAncient_ctor_8c0f0278
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 10 of 54 reference instruction lines
 * differing bytes: 12
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOWreckAncient.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c470500 S_g8c470500;
typedef struct S_g8c470500_42c S_g8c470500_42c;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0xa8];
    float fe4;
    float fe8;
};
struct S_g8c470500 {
    char unknown0[0x42c];
    S_g8c470500_42c *f42c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c309204;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c470500 *g_8c470500;
extern void operation_8c051eb8(Object *, void *);
Object *TOWreckAncient_ctor_8c0f0278(Object *o, int a1)
{
    operation_8c051eb8(o, g_8c44be98);
    o->dispatch = (void *)0x8c26843c;
    o->tag = (int)(g_8c309204);
    o->size = 0xec;
    o->f38 = (Arg0_38 *)*(int *)((char *)((char *)g_8c470500->f42c + 0x8) + (a1 << 4));
    o->f28 = (int)(*(int *)((char *)((char *)g_8c470500->f42c + 0xc) + (a1 << 4)));
    o->fe4 = 400.0f;
    o->fe8 = o->f38->f04->f14;
    return o;
}
