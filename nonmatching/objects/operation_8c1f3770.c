/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3770
 * function: operation_8c1f3770
 * language: c
 * reference size: 244 bytes
 * compiled size: 184 bytes (-24.6%)
 * differing lines: 106 of 89 reference instruction lines
 * differing bytes: 233
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -60 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1f3864 S_c8c1f3864;
typedef struct S_c8c1f5662 S_c8c1f5662;
typedef struct S_g8c4e3704 S_g8c4e3704;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_x64144 S_x64144;
typedef struct S_x64144_8 S_x64144_8;
typedef struct S_x75952 S_x75952;
struct S_x64144 {
    char unknown0[0x8];
    S_x64144_8 *f08;
};
struct S_vv1 {
    short f00;
    char unknown2[0xa];
    S_vv1_c *f0c;
};
struct S_c8c1f5662 {
    S_vv1 *f00;
    short f04;
    char unknown6[0x2];
    S_c8c1f3864 *f08;
    int f0c;
};
struct S_c8c1f3864 {
    char unknown0[0xe];
    short f0e;
};
struct S_x75952 {
    char unknown0[0xc];
    S_c8c1f5662 *f0c;
};
extern S_c8c1f5662 *alloc_node_8c1f5662(void);
extern void call_8c1f3932(int);
extern S_c8c1f3864 *call_8c1f3864(S_vv1 *);
extern int short_or_offset_8c1f33a0(void *, short);
extern void call_8c1f3b36(void *, int);
extern void release_chain_c2_8c1f5734(void *);
void operation_8c1f3770(void)
{
    S_c8c1f5662 *t1;
    S_vv1 *v1;
    int v3;
    int v2;
    S_c8c1f3864 *t2;
    int t3;
    if ((int)(((S_x64144 *)(*(int *)0x8c4e3704 * 0x1c + 0x8c4effa0))->f08) != -1) {
        v1 = (S_vv1 *)((S_x64144 *)(*(int *)0x8c4e3704 * 0x1c + 0x8c4effa0))->f08;
        v2 = (int)0;
        while (v1 != 0) {
            if (v1->f00 == *(int *)0x8c4e3708) {
                t1 = alloc_node_8c1f5662();
                if (t1 == 0) {
                    call_8c1f3932(v2);
                    goto L_8c1f3834;
                }
                t2 = call_8c1f3864(v1);
                t1->f08 = t2;
                t1->f00 = v1;
                if (t2 == 0) {
                    v3 = (int)0;
                } else {
                    t3 = short_or_offset_8c1f33a0((void *)v1, t2->f0e);
                    v3 = (int)(unsigned short)t3;
                }
                t1->f04 = v3;
                t1->f0c = 0;
                if (v2 == 0) {
                    v2 = (int)t1;
                } else {
                    ((S_x75952 *)(0))->f0c = t1;
                }
            }
            v1 = (S_vv1 *)v1->f0c;
        }
L_8c1f3834:;
        call_8c1f3b36((void *)(*(S_g8c4e3704 **)0x8c4e3704), v2);
        release_chain_c2_8c1f5734((void *)v2);
        return;
    }
}
