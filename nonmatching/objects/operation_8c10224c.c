/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10224c
 * function: operation_8c10224c
 * language: c
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 18 of 208 reference instruction lines
 * differing bytes: 20
 * provenance: generator draft (mode switch2)
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
typedef struct Frame Frame;
typedef struct S_g8c4d59e4 S_g8c4d59e4;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct Object {
    char unknown0[0x15c];
    int f15c;
    char unknown160[0x20];
    int f180;
};
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
extern void call_8c37eb1c(void *, int, int, float);
void operation_8c10224c(Object *o)
{
    Frame frame;
    int v1;
    if (*(int *)0x8c4d59e4 != 0) {
        call_8c3827d8((void *)(*(S_g8c4d59e4 **)0x8c4d59e4));
        v1 = (int)1;
    } else {
        v1 = (int)-1;
    }
    if (v1 == 0) {
        return;
    }
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, -1);
    (&frame)->f00 = 478.0f;
    (&frame)->f04 = 62.0f;
    (&frame)->f08 = 610.0f;
    (&frame)->f0c = 64.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f18 = 0.75f;
    (&frame)->f1c = 0.0625f;
    sq_quad_8c38b09e((Frame *)((&frame)), 0.8f);
    (&frame)->f00 = 478.0f;
    (&frame)->f04 = 192.0f;
    (&frame)->f08 = 610.0f;
    (&frame)->f0c = 194.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f18 = 0.75f;
    (&frame)->f1c = 0.0625f;
    sq_quad_8c38b09e((Frame *)((&frame)), 0.8f);
    (&frame)->f00 = 478.0f;
    (&frame)->f04 = 62.0f;
    (&frame)->f08 = 480.0f;
    (&frame)->f0c = 194.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f18 = 0.0625f;
    (&frame)->f1c = 0.75f;
    sq_quad_8c38b09e((Frame *)((&frame)), 0.8f);
    (&frame)->f00 = 608.0f;
    (&frame)->f04 = 62.0f;
    (&frame)->f08 = 610.0f;
    (&frame)->f0c = 194.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f18 = 0.0625f;
    (&frame)->f1c = 0.75f;
    sq_quad_8c38b09e((Frame *)((&frame)), 0.8f);
    sq_flush_8c38af12();
    o->f180 = 0;
    call_8c37eb1c((void *)(((char *)o + 0x16c)), 0, 0x21, -5.5f);
    o->f180 = (int)(o->f15c);
    call_8c37eb1c((void *)(((char *)o + 0x16c)), 1, 0x21, -5.0f);
}
