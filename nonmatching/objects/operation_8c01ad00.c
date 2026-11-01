/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01ad00
 * function: operation_8c01ad00
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 8 of 104 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c18de4c S_c8c18de4c;
struct S_c8c011ecc {
    short f00;
    unsigned short f02;
    unsigned short f04;
    unsigned short f06;
};
struct S_c8c18de4c {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern S_c8c18de4c *operator_new_8c18de4c(int);
extern void memset_8c12b880(S_c8c18de4c *, int, int);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern int call_8c09e9c4(void *);
extern int operation_8c186f1c(int);
extern int operation_03d138(void *);
extern int compress_buffer_8c2064b8(S_c8c011ecc *, S_c8c011ecc *, int, void *);
extern void call_8c011ed8(S_c8c011ecc *);
extern void operation_8c0369c0(void *, int);
extern void operator_delete_8c18de08(S_c8c18de4c *);
void operation_8c01ad00(int a0)
{
    S_c8c011ecc *t6;
    int v2;
    int v4;
    S_c8c18de4c *t1;
    int t3;
    int t4;
    int t5;
    S_c8c011ecc *t2;
    v2 = (int)0;
    t1 = operator_new_8c18de4c(0x4000);
    if (t1 != 0) {
        memset_8c12b880(t1, v2, 0x4000);
        t2 = game_malloc_8c011ecc(0x4008);
        if (t2 != 0) {
            memset_8c12b880((S_c8c18de4c *)t2, v2, 0x4008);
            t3 = call_8c09e9c4((void *)(((char *)t2 + 0x8)));
            t2->f02 = t3;
            v2 = (int)(v2 + t2->f02);
            t4 = operation_8c186f1c((int)((int)t2 + v2 + 8));
            t2->f04 = t4;
            v2 = (int)(v2 + t2->f04);
            t5 = operation_03d138((void *)((int)t2 + v2 + 8));
            t2->f06 = t5;
            v2 = (int)(v2 + t2->f06);
            t2->f00 = v2;
            t6 = game_malloc_8c011ecc(0x7230);
            if (t6 != 0) {
                v4 = compress_buffer_8c2064b8(t6, t2, v2, (void *)(((char *)t1 + 0x8)));
                call_8c011ed8(t6);
            }
            call_8c011ed8(t2);
        }
        t1->f00 = 0x6e;
        t1->f01 = 0;
        t1->f02 = 0;
        t1->f04 = ((unsigned int)v4 + 3 >> 2 << 2) + 8;
        operation_8c0369c0((void *)t1, a0);
        operator_delete_8c18de08(t1);
    }
}
