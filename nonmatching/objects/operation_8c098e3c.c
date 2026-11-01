/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c098e3c
 * function: operation_8c098e3c
 * language: c
 * reference size: 448 bytes
 * compiled size: 524 bytes (+17.0%)
 * differing lines: 124 of 204 reference instruction lines
 * differing bytes: 340
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +76 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct EF_38_short {
    char pad[0x38];
    short f;
} EF_38_short;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    float f38;
};
struct S_vv6 {
    short f00;
};
struct Arg0_10 {
    char unknown0[0x30];
    int f30;
};
extern int operation_8c09a72c(int);
extern void play_se_8c05fbf8(int, int, int, int);
extern int operation_8c09a640(int);
extern int operation_8c09a64c(int);
void operation_8c098e3c(Object *o)
{
    S_vv6 *v6;
    int v43;
    int v44;
    int v45;
    int v46;
    short v42;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    {
        Object *base = o;
        base->f30 += 1;
        if (base->f24 == 0) {
            base->f24 = 1;
            return;
        }
        if (base->f34 == 0) {
            if ((base->f38 += -0.0833333358f) > 0.0f) {
            } else {
                base->f38 = 0.0f;
                base->f04 |= 1;
            }
            return;
        }
        if ((base->f38 += 0.166666672f) > 1.0f) {
            base->f38 = 1.0f;
        }
        t1 = operation_8c09a72c(0x20);
        if (t1 != 0) {
            if (++base->f28 >= 4) {
                base->f28 = 0;
            }
            play_se_8c05fbf8(0x50000, 0, 0, 0);
        } else {
            t2 = operation_8c09a72c(0x10);
            if (t2 != 0) {
                if (!(--base->f28 >= 0)) {
                    base->f28 = 3;
                }
                play_se_8c05fbf8(0x50000, 0, 0, 0);
            }
        }
        if (base->f28 == 0) {
            v6 = (S_vv6 *)((int)base->f20 + 0x40);
            t3 = operation_8c09a72c(0x80);
            if (t3 != 0) {
                v6->f00 += 1;
                if (v6->f00 >= base->f2c) {
                    v6->f00 = 0;
                }
                play_se_8c05fbf8(0x50000, 0, 0, 0);
                goto L_8c098fae;
            }
            t4 = operation_8c09a72c(0x40);
            if (t4 == 0) {
                goto L_8c098fae;
            }
            if (!((short)--v6->f00 >= 0)) {
                v6->f00 = (int)base->f2c + -1;
            }
            play_se_8c05fbf8(0x50000, 0, 0, 0);
        } else {
            t5 = operation_8c09a640(0x80);
            if (t5 != 0) {
                v43 = (int)((int)base->f28 + 4);
                ((EF_38_short *)((char *)base->f20 + (v43 << 1)))->f += 1;
            } else {
                t6 = operation_8c09a640(0x40);
                if (t6 != 0) {
                    v44 = (int)((int)base->f28 + 4);
                    ((EF_38_short *)((char *)base->f20 + (v44 << 1)))->f -= 1;
                } else {
                    t7 = operation_8c09a64c(0x80);
                    if (t7 != 0) {
                        v45 = (int)((int)base->f28 + 4);
                        ((EF_38_short *)((char *)base->f20 + (v45 << 1)))->f += 5;
                    } else {
                        t8 = operation_8c09a64c(0x40);
                        if (t8 != 0) {
                            v46 = (int)((int)base->f28 + 4);
                            ((EF_38_short *)((char *)base->f20 + (v46 << 1)))->f -= 5;
                        }
                    }
                }
            }
            v42 = (short)((EF_38_short *)((char *)base->f20 + ((int)base->f28 + 4 << 1)))->f;
            if (v42 > 0xff) {
                ((EF_38_short *)((char *)base->f20 + ((int)base->f28 + 4 << 1)))->f = 0xff;
            } else {
                if (!(v42 >= 0)) {
                    ((EF_38_short *)((char *)base->f20 + ((int)base->f28 + 4 << 1)))->f = 0;
                }
            }
        }
L_8c098fae:;
        t9 = operation_8c09a640(6);
        if (t9 != 0) {
            play_se_8c05fbf8(0x50004, 0, 0, 0);
            base->f10->f30 = 0;
            base->f34 = 0;
        }
    }
}
