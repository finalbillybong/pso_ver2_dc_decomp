/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0272d8
 * function: operation_8c0272d8
 * language: c
 * reference size: 176 bytes
 * compiled size: 180 bytes (+2.3%)
 * differing lines: 42 of 72 reference instruction lines
 * differing bytes: 92
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_3b8 S_vv5_3b8;
typedef struct S_vv9 S_vv9;
struct S_vv5 {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0x23a];
    int f310;
    char unknown314[0xa4];
    S_vv5_3b8 *f3b8;
};
struct S_vv9 {
    char unknown0[0x350];
    int f350;
};
struct S_vv5_3b8 {
    char unknown0[0x20];
    int f20;
};
extern int g_8c418248;
int operation_8c0272d8(void)
{
    int id;
    S_vv5 *p;
    S_vv9 *q;
    int a;
    int b;
    int c;
    id = g_8c418248;
    if (id == 0xffff) {
        p = 0;
    } else if (id >= 0xc) {
        p = 0;
    } else {
        p = *(S_vv5 **)((char *)0x8c41ce2c + (id << 2));
    }
    if (p != 0 && (p->fd4 & 0xffff) == 0xffff) {
        if (id == 0xffff) {
            q = 0;
        } else if (id >= 0xc) {
            q = 0;
        } else {
            q = *(S_vv9 **)((char *)0x8c41ce2c + (id << 2));
        }
        if (q != 0) {
            a = (q->f350 & 0x200) != 0;
        } else {
            a = 0;
        }
        if (a == 0) {
            b = 1;
            if (p->f3b8 != 0) {
                b = (p->f3b8->f20 & 1) == 0;
            }
            if (b != 0) {
                c = (p->f310 & 0x1e) != 0;
                if (c != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
