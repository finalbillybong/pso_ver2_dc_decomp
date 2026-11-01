/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c098734
 * function: operation_8c098734
 * language: c
 * reference size: 352 bytes
 * compiled size: 384 bytes (+9.1%)
 * differing lines: 144 of 157 reference instruction lines
 * differing bytes: 305
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +32 bytes
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
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
    int f2c;
    int f30;
    int f34;
    char unknown38[0x8];
    int f40;
    int f44;
    float f48;
};
struct Arg0_10 {
    char unknown0[0x30];
    int f30;
};
extern int operation_8c09a72c(int);
extern int call_8c0356ac(void *, short);
extern void play_se_8c05fbf8(int, int, int, int);
extern int operation_8c09a640(int);
void operation_8c098734(Object *o)
{
    int v1;
    int v2;
    int v3;
    short v46;
    int v12;
    int v10;
    short v47;
    int v11;
    int v26;
    int v30;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    o->f40 += 1;
    if (o->f44 == 0) {
        if ((o->f48 += -0.0833333358f) > 0.0f) {
        } else {
            o->f48 = 0.0f;
            o->f04 |= 1;
        }
        return;
    }
    if ((o->f48 += 0.166666672f) > 1.0f) {
        o->f48 = 1.0f;
    }
    v1 = (int)0;
    v3 = (int)v1;
    if (o->f24 != 0) {
        t1 = operation_8c09a72c(0x80);
        if (t1 != 0) {
            v2 = (int)1;
            v3 = (int)v2;
        } else {
            t2 = operation_8c09a72c(0x40);
            v3 = (int)v1;
            if (t2 != 0) {
                v3 = (int)-1;
            }
        }
    }
    if (v3 != 0) {
        v10 = (int)-1;
L_8c0987c6:;
        v11 = (int)((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f;
        ((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f += v3;
        v46 = (short)((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f;
        v12 = (int)o->f30;
        if (v46 >= v12) {
            ((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f = 0;
        } else {
            if (!(v46 >= 0)) {
                ((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f = v12 + v10;
            }
        }
        v47 = (short)((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f;
        if (v47 != v11) {
            t3 = call_8c0356ac((void *)(o->f28), v47);
            if (t3 == 0) {
                goto L_8c0987c6;
            }
            play_se_8c05fbf8(0x50000, 0, 0, 0);
        }
        o->f2c = ((EF_38_short *)((char *)o->f20 + ((int)(o->f28) << 1)))->f;
    }
    o->f34 = 0;
    v30 = (int)0;
    goto L_8c098828;
    v26 = (int)0;
L_8c09880e:;
    t4 = call_8c0356ac((void *)(o->f28), (short)v26);
    if (t4 != 0) {
        v30 = (int)v26;
        if (v30 == o->f2c) {
            goto L_8c09882e;
        }
        o->f34 += 1;
    }
    v30 = (int)(v26 + 1);
L_8c098828:;
    v26 = (int)v30;
    if (o->f30 > v30) {
        goto L_8c09880e;
    }
L_8c09882e:;
    if (o->f24 != 0) {
        t5 = operation_8c09a640(6);
        if (t5 != 0) {
            play_se_8c05fbf8(0x50004, 0, 0, 0);
            o->f10->f30 = 0;
            o->f44 = 0;
            return;
        }
    }
    if (o->f24 == 0) {
        o->f24 = 1;
    }
}
