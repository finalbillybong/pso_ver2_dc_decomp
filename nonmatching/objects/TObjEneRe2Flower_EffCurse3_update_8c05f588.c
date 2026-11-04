/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f588
 * function: TObjEneRe2Flower_EffCurse3_update_8c05f588
 * language: c
 * reference size: 232 bytes
 * compiled size: 236 bytes (+1.7%)
 * differing lines: 40 of 100 reference instruction lines
 * differing bytes: 120
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjEneRe2Flower.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg0_24 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
extern S_g8c46ee80 *g_8c46ee80;
extern int active_unflagged_8c05b2dc(Arg0_24 *);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern void normalize_vector_checked(Frame *);
extern void hs_8c0a7608(void *, void *);
void TObjEneRe2Flower_EffCurse3_update_8c05f588(Object *o)
{
    Frame frame;
    int t1;
    o->f20 += 1;
    if (o->f20 > 0x14) {
        o->f04 |= 1;
        return;
    }
    t1 = active_unflagged_8c05b2dc(o->f24);
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f24->f3c;
        (&frame)->f0c.f04 += 14.0f;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c46ee80->f90;
        vector_sub_in_place_8c37f6f0((&frame), &(&frame)->f0c);
        normalize_vector_checked((&frame));
        (&frame)->f0c.f00 += (&frame)->f00.f00 * 20.0f;
        (&frame)->f0c.f04 += (&frame)->f00.f04 * 20.0f;
        (&frame)->f0c.f08 += (&frame)->f00.f08 * 20.0f;
        hs_8c0a7608(o->f28, &(&frame)->f0c);
    }
}
