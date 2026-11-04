/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bf168
 * function: TObjEneSaver_v70_8c0bf168
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 12 of 87 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneSaver.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0xc4];
    unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    short f30c;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
void TObjEneSaver_v70_8c0bf168(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    float t2;
    int t3;
    if (o->f30a != 8 && o->f30a != 9) {
        t1 = lookup_low_id((int)(o->f1b6 & 0xffff));
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f324;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
            t2 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
            t3 = angle_difference((int)(o->f64), (int)((int)(t2 * 65536.0f / 6.28318405f)));
            v1 = (int)t3;
        } else {
            v1 = (int)0;
        }
        if (0x2aaa > v1) {
            o->f30a = 8;
            o->ff0 = 6;
        } else {
            o->f30a = 9;
            o->ff0 = 8;
        }
        o->f30c = 0;
    }
    o->fdc->f18 |= 1;
    o->f34 &= -0x6240001;
}
