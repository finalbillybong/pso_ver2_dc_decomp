/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ee44
 * function: operation_8c09ee44
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 20 of 122 reference instruction lines
 * differing bytes: 14
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
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_14 S_vv31_14;
typedef struct S_vv33 S_vv33;
typedef struct S_vv5 S_vv5;
typedef struct S_vv54 S_vv54;
typedef struct S_vv54_14 S_vv54_14;
typedef struct S_vv56 S_vv56;
typedef struct S_vv5_14 S_vv5_14;
typedef struct S_vv6 S_vv6;
typedef struct S_vv77 S_vv77;
typedef struct S_vv77_14 S_vv77_14;
typedef struct S_vv79 S_vv79;
struct S_vv2 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x3c];
    int f40;
};
struct S_vv5 {
    char unknown0[0x14];
    S_vv5_14 *f14;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
};
struct S_vv31 {
    char unknown0[0x14];
    S_vv31_14 *f14;
};
struct S_vv33 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
};
struct S_vv54 {
    char unknown0[0x14];
    S_vv54_14 *f14;
};
struct S_vv56 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
};
struct S_vv77 {
    char unknown0[0x14];
    S_vv77_14 *f14;
};
struct S_vv79 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
};
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern int g_8c46ed40;
extern int g_8c46ed44;
extern void operation_8c09ede0(S_vv6 *, int);
typedef struct Node {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    struct Node *f0c;
} Node;
typedef struct Mgr {
    char unknown0[0x14];
    Node *f14;
} Mgr;
static inline void mark_list(Mgr *m, int t)
{
    Node *p;
    Node *q;
    p = m->f14;
    while (m->f14 != 0 && p != 0) {
        q = p;
        p = p->f0c;
        if ((int)q == t) {
            q->f04 |= 1;
        } else {
            operation_8c09ede0((S_vv6 *)q, t);
        }
    }
}
void operation_8c09ee44(void)
{
    S_vv2 *r;
    int i;
    int t;
    r = (S_vv2 *)g_8c46ed40;
    for (i = 0; g_8c46ed44 > i; i++, r = (S_vv2 *)((char *)r + 0x44)) {
        t = r->f40;
        if (t != 0) {
            mark_list((Mgr *)g_8c44be8c, t);
            mark_list((Mgr *)g_8c44be98, r->f40);
            mark_list((Mgr *)g_8c44be9c, r->f40);
            mark_list((Mgr *)g_8c44bea0, r->f40);
            r->f02 = 0;
            r->f40 = 0;
        }
    }
}
