/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2445c0
 * function: operation_8c2445c0
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 4 of 37 reference instruction lines
 * differing bytes: 2
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44be98 S_g8c44be98;
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
};
extern void operation_8c09ed7c(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c020968(S_c8c021ef8 *, int);
extern void operation_8c0a1b78(void *);
extern void operation_8c244630(void *);
extern void operation_8c256b30(void);
void operation_8c2445c0(void)
{
    S_c8c021ef8 *t1;
    operation_8c09ed7c();
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_8c020968(t1, (int)(*(unsigned short *)((char *)0x8c510cf8 + (t1->f20 << 1))));
        operation_8c0a1b78((void *)t1);
    }
    operation_8c244630((void *)(*(S_g8c44be98 **)0x8c44be98));
    operation_8c256b30();
}
