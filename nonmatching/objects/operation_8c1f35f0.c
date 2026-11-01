/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f35f0
 * function: operation_8c1f35f0
 * language: c
 * reference size: 222 bytes
 * compiled size: 272 bytes (+22.5%)
 * differing lines: 150 of 111 reference instruction lines
 * differing bytes: 251
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +50 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv120 S_vv120;
typedef struct S_vv124 S_vv124;
typedef struct S_vv126 S_vv126;
typedef struct S_vv126_4 S_vv126_4;
typedef struct S_vv129 S_vv129;
typedef struct S_vv129_4 S_vv129_4;
typedef struct S_vv129_c S_vv129_c;
typedef struct S_vv132 S_vv132;
struct S_vv124 {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_vv129 {
    short f00;
    char f02;
    char f03;
    S_vv129_4 *f04;
    char unknown8[0x4];
    S_vv129_c *f0c;
};
struct S_vv120 {
    char unknown0[0x8];
    short f08;
};
struct S_vv126 {
    char unknown0[0x4];
    S_vv126_4 *f04;
};
struct S_vv132 {
    short f00;
    unsigned char f02;
    char unknown3[0x1];
    int f04;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern char g_8c4e3968[];
extern char g_8c4effa0[];
extern int call_8c1f3974(int);
extern int short_or_offset_8c1f33a0(S_vv129 *, short);
extern int call_8c1f8874(int, short, void *);
extern int call_8c1f7cd6(void *, char, char, void *);
extern int call_8c1f39a6(void *, S_vv129 *, short, void *, void *);
void operation_8c1f35f0(int a0, int a1)
{
    Frame frame;
    int v118;
    int v131;
    S_vv124 *v124;
    S_vv132 *v132;
    S_vv129 *v129;
    S_vv120 *v120;
    int v130;
    int v122;
    S_vv126 *v126;
    int v119;
    int v117;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v118 = (int)a0;
    v130 = (int)(v118 * 0x1c + g_8c4effa0);
    v124 = (S_vv124 *)v130;
    if (v124->f0c != 0) {
        return;
    }
    v131 = (int)v124->f08;
    if (v131 == -1) {
        v122 = (int)0;
        v126 = (S_vv126 *)0;
        v129 = (S_vv129 *)v131;
L_8c1f3624:;
        t3 = call_8c1f3974(a1);
        v117 = (int)t3;
        goto L_8c1f36ba;
L_8c1f362c:;
        if (v129->f00 != a1) {
            goto L_8c1f3658;
        }
        v120 = (S_vv120 *)v129->f04;
        if (v120 != 0) {
            goto L_8c1f363c;
        }
        v119 = (int)0;
        goto L_8c1f3648;
L_8c1f363c:;
        t4 = short_or_offset_8c1f33a0(v129, v120->f08);
        v119 = (int)(unsigned short)t4;
L_8c1f3648:;
        if ((unsigned short)v122 < (unsigned short)v119) {
            goto L_8c1f3654;
        }
        if (v126 != 0) {
            goto L_8c1f3658;
        }
L_8c1f3654:;
        v122 = (int)v119;
        v126 = (S_vv126 *)v129;
L_8c1f3658:;
        v129 = (S_vv129 *)v129->f0c;
    } else {
        v122 = (int)0;
        v126 = (S_vv126 *)0;
        v129 = (S_vv129 *)v131;
    }
    if (v129 != 0) {
        goto L_8c1f362c;
    }
    if (v126 == 0) {
        goto L_8c1f3624;
    }
    v132 = (S_vv132 *)v126->f04;
    if (v132 == 0) {
        v129 = (S_vv129 *)v132;
        goto L_8c1f3624;
    }
    if (v132->f00 == 0) {
        v129 = (S_vv129 *)v132;
        goto L_8c1f3624;
    }
    if (v132->f04 == -1) {
        if (v132->f02 != 0x1f) {
            v129 = (S_vv129 *)v132;
            goto L_8c1f3624;
        }
        t1 = call_8c1f8874((int)(v118 + g_8c4e3968), v132->f00, (void *)((void *)0x8c4e3180));
        v129 = (S_vv129 *)v132;
        if (t1 > 0) {
            goto L_8c1f36a6;
        }
        goto L_8c1f3624;
    } else {
        v129 = (S_vv129 *)v132;
    }
    t2 = call_8c1f7cd6((void *)(v129->f04), v129->f02, v129->f03, (void *)((void *)0x8c4e3180));
    if (!(t2 > 0)) {
        goto L_8c1f3624;
    }
L_8c1f36a6:;
    t5 = call_8c1f39a6((void *)((void *)0x8c4e3180), v129, v129->f00, (void *)(&(&frame)->f04), (void *)(&(&frame)->f08));
    v117 = (int)t5;
L_8c1f36ba:;
    v124->f0c = (int)(v117);
}
