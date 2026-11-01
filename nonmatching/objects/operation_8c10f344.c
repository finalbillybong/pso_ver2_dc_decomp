/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10f344
 * function: operation_8c10f344
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 8 of 145 reference instruction lines
 * differing bytes: 39
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
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct S_c8c052648 S_c8c052648;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_a8_s3c Arg0_a8_s3c;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_s3c S_vv31_s3c;
typedef struct S_vv7 S_vv7;
typedef struct Block_c8c052648_0 {
    char unknown0[0x18];
    int f18;
    char unknown1c[0x10];
} Block_c8c052648_0;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    Arg0_94 *f94;
    int f98;
    char unknown9c[0xc];
    Arg0_a8 *fa8;
    char unknownac[0x2c];
    Block44 fd8;
    int f104;
};
struct Arg0_a8 {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x24];
    int f64;
};
struct S_vv31 {
    char unknown0[0x3c];
    int f3c;
};
struct Arg0_a8_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv31_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv7 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
};
struct S_c8c052648 {
    Block_c8c052648_0 f00;
};
extern int g_8c467874;
extern int g_8c467878;
extern int g_8c46787c;
extern S_c8c052648 *operation_8c052648(Arg0_a8 *, S_vv7 *, float);
int operation_8c10f344(Object *o)
{
    S_vv31 *v31;
    int v5;
    int v6;
    S_vv7 *v7;
    int v8;
    int v1;
    int v9;
    int v2;
    int v3;
    int v4;
    int v10;
    S_c8c052648 *t1;
    if (o->fa8 == 0) {
        return 0;
    }
    v31 = (S_vv31 *)o->f94;
    *(Vector3 *)((char *)o->fa8 + 0x3c) = *(Vector3 *)((char *)v31 + 0x3c);
    v1 = (int)0x40000000;
    v2 = (int)0x200;
    v3 = (int)0x400;
    v4 = (int)0x20000000;
    o->fa8->f64 = (int)(o->f98);
    v5 = (int)g_8c467874;
    v6 = (int)v5;
    while ((g_8c467874 + g_8c467878 + g_8c46787c) > v6) {
        v7 = (S_vv7 *)*(S_g8c467240 **)((char *)0x8c467240 + (v6 << 2));
        if (((v7->f34 & -0x80000000)) == 0) {
            t1 = operation_8c052648((Arg0_a8 *)(o->fa8), v7, 10000.0f);
            if (t1 != 0) {
                v8 = (int)v7->f34;
                if (((v8 & v1)) != 0) {
                    v9 = (int)t1->f00.f18;
                    if (((v9 & 0x10)) != 0) {
                        goto L_8c10f43c;
                    }
                    if (((v9 & v2)) != 0) {
                        goto L_8c10f43c;
                    }
                    if (((v9 & v3)) != 0) {
                        goto L_8c10f43c;
                    }
                    *(Block44 *)&o->fd8 = *(Block44 *)&t1->f00;
                    o->f104 = (int)(v7->f64);
                    o->f8c |= 0x20;
                    return 1;
                }
                if (((v8 & v4)) != 0) {
                    v10 = (int)t1->f00.f18;
                    if (((v10 & 0x10)) == 0 && ((v10 & v2)) == 0 && ((v10 & v3)) == 0) {
                        o->f8c |= 0x80;
                        return 1;
                    }
                }
            }
        }
L_8c10f43c:;
        v6 = (int)(v6 + 1);
    }
    return 0;
}
