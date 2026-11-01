/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c156574
 * function: operation_8c156574
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 24 of 83 reference instruction lines
 * differing bytes: 42
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block48 {
    int words[12];
} Block48;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x24];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    float f30;
    float f34;
    float f38;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x16c];
    unsigned short f1b4;
    char unknown1b6[0x16];
    int f1cc;
};
extern Block48 g_8c316140;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c3160f4[];
extern void call_8c3bdf60(void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TPhotonLaser_ctor_8c14f4c4(int, Frame *, Object *, int);
void operation_8c156574(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f30 = o->f3c;
    (&frame)->f34 = 300.0f;
    (&frame)->f38 = o->f44;
    call_8c3bdf60((void *)(&(&frame)->f30), (int)(o->f1cc * 0xc + g_8c3160f4));
    o->f1cc += 1;
    *(Block48 *)&(&frame)->f00 = *(Block48 *)&g_8c316140;
    (&frame)->f00.f00 = (&frame)->f30;
    (&frame)->f00.f04 = (&frame)->f34;
    (&frame)->f00.f08 = (&frame)->f38;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x39c);
    if (t1 != 0) {
        TPhotonLaser_ctor_8c14f4c4(t1, (Frame *)((&frame)), o, (int)(o->f1b4));
    }
}
