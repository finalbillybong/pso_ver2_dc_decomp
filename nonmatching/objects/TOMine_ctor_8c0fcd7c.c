/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fcd7c
 * function: TOMine_ctor_8c0fcd7c
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 10 of 65 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOMine.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x2d4];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x8];
    float f35c;
    float f360;
    int f364;
    float f368;
    unsigned short f36c;
    char unknown36e[0x2];
    float f370;
    float f374;
    float f378;
    float f37c;
    int f380;
    char unknown384[0x8];
    int f38c;
};
extern int g_8c30ab04;
extern void hs_8c043418(Object *);
Object *TOMine_ctor_8c0fcd7c(Object *o)
{
    hs_8c043418(o);
    o->dispatch = (void *)0x8c269238;
    o->tag = (int)(g_8c30ab04);
    o->size = 0x390;
    o->f30c = 0;
    o->f360 = 0.0f;
    o->f35c = 0.0f;
    o->f368 = 0.0f;
    o->f364 = 0;
    o->f36c = 0xffff;
    o->f370 = 0.0f;
    o->f374 = 0.0f;
    o->f378 = 0.0f;
    o->f37c = 0.0f;
    o->f350 = 0;
    o->f380 = 0;
    o->f34 |= 0x60000000;
    o->f38c = 1;
    return o;
}
