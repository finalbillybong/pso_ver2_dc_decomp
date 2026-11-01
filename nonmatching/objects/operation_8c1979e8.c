/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1979e8
 * function: operation_8c1979e8
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 8 of 95 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_s8 S_vv1_s8;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_s4 S_vv2_s4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_sc S_vv3_sc;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_s8 S_vv4_s8;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_s4 S_vv5_s4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_sc S_vv6_sc;
struct S_vv1 {
    char unknown0[0x8];
    unsigned char f08;
};
struct S_vv1_s8 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv2 {
    char unknown0[0x4];
    unsigned char f04;
};
struct S_vv2_s4 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv3 {
    char unknown0[0xc];
    unsigned char f0c;
};
struct S_vv3_sc {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv4 {
    char unknown0[0x8];
    unsigned char f08;
};
struct S_vv4_s8 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv5 {
    char unknown0[0x4];
    unsigned char f04;
};
struct S_vv5_s4 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv6 {
    char unknown0[0xc];
    unsigned char f0c;
};
struct S_vv6_sc {
    char unknown0[0x1];
    unsigned char f01;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c025fcc(int, int);
extern void operation_8c19801c(void *, int, int, int);
void operation_8c1979e8(int a0)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    int t1;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0 || (t2 = operation_8c025fcc(t1, 0)) == 0) {
        return;
    }
    v1 = (S_vv1 *)(t2 + 4);
    operation_8c19801c((void *)a0, 0, (int)(v1->f08), (int)(((S_vv1_s8 *)((char *)v1 + 0x8))->f01));
    v2 = (S_vv2 *)(t2 + 4);
    operation_8c19801c((void *)a0, 1, (int)(v2->f04), (int)(((S_vv2_s4 *)((char *)v2 + 0x4))->f01));
    v3 = (S_vv3 *)(t2 + 4);
    operation_8c19801c((void *)a0, 2, (int)(v3->f0c), (int)(((S_vv3_sc *)((char *)v3 + 0xc))->f01));
    v4 = (S_vv4 *)(t2 + 0x14);
    operation_8c19801c((void *)a0, 3, (int)(v4->f08), (int)(((S_vv4_s8 *)((char *)v4 + 0x8))->f01));
    v5 = (S_vv5 *)(t2 + 0x14);
    operation_8c19801c((void *)a0, 4, (int)(v5->f04), (int)(((S_vv5_s4 *)((char *)v5 + 0x4))->f01));
    v6 = (S_vv6 *)(t2 + 0x14);
    operation_8c19801c((void *)a0, 5, (int)(v6->f0c), (int)(((S_vv6_sc *)((char *)v6 + 0xc))->f01));
}
