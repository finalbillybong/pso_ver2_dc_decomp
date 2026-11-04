/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c240598
 * function: TItemWpnTessen_ctor_8c240598
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 20 of 46 reference instruction lines
 * differing bytes: 24
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnTessen.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x1c0];
    char f1e0;
    char f1e1;
    char unknown1e2[0x1a];
    int f1fc;
    char unknown200[0x34];
    float f234;
    float f238;
    float f23c;
    int f240;
};
extern int g_8c33a938;
extern void hs_8c075398(Object *, int, int);
Object *TItemWpnTessen_ctor_8c240598(Object *o, int a1, int a2)
{
    hs_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c594;
    o->tag = (int)(g_8c33a938);
    o->size = 0x244;
    o->f1e0 = 5;
    o->f1e1 = 4;
    o->f1fc |= 2;
    o->f240 = 0;
    o->f23c = 1.0f;
    o->f238 = 1.0f;
    o->f234 = 1.0f;
    return o;
}
