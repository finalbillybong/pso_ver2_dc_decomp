/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01b1b0
 * function: operation_8c01b1b0
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 6 of 48 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
struct Frame {
    char unknown0[0x488];
};
struct S_c8c18de4c {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern void call_8c026984(Frame *);
extern S_c8c18de4c *operator_new_8c18de4c(int);
extern int lookup_low_id(int);
extern void call_8c026b18(int, void *);
extern void operation_8c0369c0(void *, int);
extern void operator_delete_8c18de08(S_c8c18de4c *);
void operation_8c01b1b0(int a0)
{
    Frame frame;
    S_c8c18de4c *t1;
    int t2;
    call_8c026984((Frame *)((&frame)));
    t1 = operator_new_8c18de4c(0x490);
    if (t1 != 0) {
        t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        call_8c026b18(t2, (void *)(((char *)t1 + 0x8)));
        t1->f00 = 0x70;
        t1->f01 = 0;
        t1->f02 = *(int *)0x8c418248;
        t1->f04 = 0x490;
        operation_8c0369c0((void *)t1, a0);
        operator_delete_8c18de08(t1);
    }
}
