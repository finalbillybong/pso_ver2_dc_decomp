/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f0b4
 * function: operation_8c12f0b4
 * language: c
 * reference size: 112 bytes
 * compiled size: 124 bytes (+10.7%)
 * differing lines: 50 of 47 reference instruction lines
 * differing bytes: 97
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    char unknown8[0x10];
};
struct Object {
    short tag;
};
struct S_vv1 {
    char f00;
    char unknown1[0x7];
    char f08;
};
extern void call_8c12efe8(void *, void *, S_vv1 *);
extern void bytes_shl1(S_vv1 *, int);
extern void call_8c12f56c(S_vv1 *, int, int);
extern void memcpy_8c12b77c(void *, S_vv1 *, int);
void operation_8c12f0b4(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    S_vv1 *v1;
    (&frame)->f00 = (S_frame_0 *)a1;
    (&frame)->f04 = (S_frame_4 *)a3;
    o->tag += a2;
    v1 = (S_vv1 *)((char *)(&frame) + 0x8);
    call_8c12efe8((void *)((&frame)->f00), (void *)((&frame)->f04), v1);
    if ((((unsigned char)v1->f00 & 0x80)) != 0) {
        o->tag += 1;
    } else {
        bytes_shl1(v1, 0x10);
    }
    call_8c12f56c(v1, 0x10, 0x42);
    v1->f08 &= 0xe0;
    memcpy_8c12b77c((void *)((&frame)->f00), v1, 9);
}
