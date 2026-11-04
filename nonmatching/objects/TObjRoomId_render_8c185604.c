/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c185604
 * function: TObjRoomId_render_8c185604
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 100 of 133 reference instruction lines
 * differing bytes: 182
 * provenance: generator draft (experimental generator, mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjRoomId.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c319a10 S_L8c319a10;
typedef struct S_L8c319a10_8 S_L8c319a10_8;
typedef struct S_L8c319a10_c S_L8c319a10_c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_L8c319a10_0 {
    char unknown0[0x8];
    S_L8c319a10_8 *f08;
    S_L8c319a10_c *f0c;
} Block_L8c319a10_0;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block16 f0c;
    Block16 f1c;
};
struct S_L8c319a10 {
    Block_L8c319a10_0 f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x24];
    float f6c;
    char unknown70[0x24];
    float f94;
    float f98;
    float f9c;
};
extern Block16 g_8c319a00;
extern S_L8c319a10 g_8c319a10;
extern char g_8c319a20[];
extern int operation_8c03d338(void);
extern void operation_8c0c5478(void *, void *, void *, void *, float);
extern void operation_8c0c547c(void *, void *, float);
extern void operation_8c0c5488(void *, Frame *, int, int);
extern void operation_8c08daa8(int, int, int, int);
void TObjRoomId_render_8c185604(Object *o)
{
    Frame frame;
    int t1;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        *(Block16 *)&(&frame)->f1c = *(Block16 *)&g_8c319a00;
        *(Block16 *)&(&frame)->f0c = *(Block16 *)&(&g_8c319a10)->f00;
        operation_8c0c5478((void *)(&o->f3c), (void *)(&(&frame)->f0c), (void *)((&g_8c319a10)->f00.f0c), (void *)((&g_8c319a10)->f00.f08), o->f6c * 10.0f * 2.0f);
        operation_8c0c547c((void *)(&o->f3c), (void *)(&(&frame)->f1c), o->f6c * 10.0f);
        (&frame)->f00 = o->f3c + o->f94 * 10.0f;
        (&frame)->f04 = o->f40 + o->f98 * 10.0f;
        (&frame)->f08 = o->f44 + o->f9c * 10.0f;
        operation_8c0c5488((void *)(&o->f3c), (Frame *)((&frame)), -0x10000, -0x10000);
        ((void (*)(Frame *, void *, float))operation_8c0c5478)((&frame), &(&frame)->f0c, 2.0f);
        operation_8c08daa8((int)o, 0x13, 0x1a, (int)(g_8c319a20 + 0xb));
        operation_8c08daa8((int)o, 0x13, 0x1b, (int)(g_8c319a20 + 0x17));
        operation_8c08daa8((int)o, 0x13, 0x1c, (int)(g_8c319a20 + 0x23));
    }
}
