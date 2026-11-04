/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c029bc0
 * function: operation_8c029bc0
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 4 of 37 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    Block8 f04;
    char unknownc[0x4];
    Block8 f10;
};
extern void operation_8c0368a8(Frame *);
void operation_8c029bc0(Object *o)
{
    Frame frame;
    int v1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0xc;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&(&frame)->f10;
    operation_8c0368a8((&frame));
}
