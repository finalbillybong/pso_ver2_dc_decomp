/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2180b0
 * function: operation_8c2180b0
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 80 of 161 reference instruction lines
 * differing bytes: 33
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_4_18 Arg0_4_18;
typedef struct Arg0_4_1c Arg0_4_1c;
typedef struct Arg0_4_20 Arg0_4_20;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Arg0_4 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
    char unknown10[0x4];
    int f14;
    Arg0_4_18 *f18;
    Arg0_4_1c *f1c;
    Arg0_4_20 *f20;
};
struct Arg1 {
    char unknown0[0x3b];
    char f3b;
};
struct S_vv5 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x290];
    int f290;
};
struct S_vv6 {
    int f00;
};
extern S_g8c467180 *g_8c467180;
extern char g_8c336358[];
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c0e2278(int, void *, int);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c2180b0(Object *o, Arg1 *a1)
{
    char *v2;
    char *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    char *v1;
    int t1;
    v1 = (char *)o->f04->f04;
    v2 = (char *)o->f04->f0c;
    v3 = (char *)o->f04->f14;
    v4 = (S_vv4 *)o->f04->f1c;
    v5 = (S_vv5 *)o->f04->f18;
    v6 = (S_vv6 *)o->f04->f20;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)(g_8c336358 + 0x25));
    operation_8c18ea4c((int)(((char *)a1 + 0x9c)));
    call_8c0e2278((int)(v1), (void *)((void *)0x8c4dbe40), 0x20);
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)(g_8c336358 + 0x25));
    operation_8c18ea4c((int)(((char *)a1 + 0x19)));
    call_8c0e2278((int)(v2), (void *)((void *)0x8c4dbe40), 0x20);
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)(g_8c336358 + 0x25));
    operation_8c18ea4c((int)(((char *)a1 + 0x2a)));
    call_8c0e2278((int)(v3), (void *)((void *)0x8c4dbe40), 0x20);
    if (a1->f3b != 0) {
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)(g_8c336358 + 0x25));
        operation_8c18ea4c((int)(&a1->f3b));
        call_8c0e2278((int)v4, (void *)((void *)0x8c4dbe40), 0x20);
        v5->f00 &= -3;
        v4->f00 &= -3;
    } else {
        v5->f00 |= 2;
        v4->f00 |= 2;
    }
    t1 = icmp((unsigned char *)((char *)a1 + 0x8), (unsigned char *)((char *)a1 + 0x9c));
    if (t1 != 0) {
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)(((char *)a1 + 0x8)));
        operation_8c18ea4c((int)(g_8c467180->f2c->f290));
        call_8c0e2278((int)v6, (void *)((void *)0x8c4dbe40), 0x20);
        v6->f00 &= -3;
        return;
    }
    v6->f00 |= 2;
}
