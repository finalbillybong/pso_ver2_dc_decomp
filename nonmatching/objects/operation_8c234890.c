/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c234890
 * function: operation_8c234890
 * language: c
 * reference size: 80 bytes
 * compiled size: 76 bytes (-5.0%)
 * differing lines: 48 of 32 reference instruction lines
 * differing bytes: 73
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c338cc0 S_g8c338cc0;
struct Frame {
    char f00;
    char unknown1[0x7];
};
struct S_g8c338cc0 {
    char f00;
};
extern int call_8c23485e(Frame *);
extern void call_8c12b0b8(int, S_g8c338cc0 *);
int operation_8c234890(int a0)
{
    Frame frame;
    int *home = &a0;
    int t1;
    (void)home;
    t1 = call_8c23485e((Frame *)((&frame)));
    if (t1 != 0 || (*(S_g8c338cc0 **)((char *)0x8c338cc0 + ((unsigned char)(&frame)->f00 << 2)))->f00 == 0) {
        return -3;
    }
    call_8c12b0b8(a0, (S_g8c338cc0 *)(*(S_g8c338cc0 **)((char *)0x8c338cc0 + ((unsigned char)(&frame)->f00 << 2))));
    return 0;
}
