/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c5b90
 * function: TItemEffFlame_update_8c1c5b90
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 76 of 90 reference instruction lines
 * differing bytes: 79
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemEffFlame.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    short f24;
    char unknown26[0x2];
    int f28;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv1 {
    Vector3 f00;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int rand(void);
extern void call_8c0a7608(void *, Frame *);
void TItemEffFlame_update_8c1c5b90(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    int t4;
    if (o->f20 != 0) {
        t1 = lookup_object_by_id((unsigned short)(o->f24));
        if (t1 != 0) {
            v1 = (S_vv1 *)((char *)(t1->fdc + o->f28 * 0x2c) + 0x1c);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v1->f00;
            t2 = rand();
            (&frame)->f00.f00 += (float)t2 / 32768.0f * 5.0f;
            t3 = rand();
            (&frame)->f00.f04 += (float)t3 / 32768.0f * 5.0f;
            t4 = rand();
            (&frame)->f00.f08 += (float)t4 / 32768.0f * 5.0f;
            call_8c0a7608((void *)(o->f20), (Frame *)((&frame)));
        }
    }
}
