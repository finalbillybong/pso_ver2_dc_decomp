/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03280c
 * function: operation_8c03280c
 * language: c
 * reference size: 460 bytes
 * compiled size: 460 bytes (+0.0%)
 * differing lines: 162 of 214 reference instruction lines
 * differing bytes: 77
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_8 S_g8c44be0c_8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv11_0_4 S_vv11_0_4;
typedef struct S_vv11_0_4_4 S_vv11_0_4_4;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_28 S_vv1_28;
typedef struct S_vv3 S_vv3;
typedef struct S_vv32 S_vv32;
typedef struct S_vv32_0 S_vv32_0;
typedef struct S_vv32_0_4 S_vv32_0_4;
typedef struct S_vv32_0_4_4 S_vv32_0_4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_20 S_vv9_20;
typedef struct S_vv9_28 S_vv9_28;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    S_g8c44be0c_8 *f08;
};
struct S_vv1 {
    char unknown0[0x20];
    S_vv1_20 *f20;
    char unknown24[0x4];
    S_vv1_28 *f28;
    int f2c;
    char unknown30[0x4];
    int f34;
};
struct S_vv3 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv5 {
    char unknown0[0x38];
    int f38;
};
struct S_vv9 {
    char unknown0[0x20];
    S_vv9_20 *f20;
    char unknown24[0x4];
    S_vv9_28 *f28;
    int f2c;
    char unknown30[0x4];
    int f34;
};
struct S_vv11 {
    S_vv11_0 *f00;
    char unknown4[0x6];
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    char unknown14[0xc];
    short f20;
    char unknown22[0x2];
    int f24;
    short f28;
    char unknown2a[0x2];
    int f2c;
};
struct S_vv11_0 {
    char unknown0[0x4];
    S_vv11_0_4 *f04;
};
struct S_vv11_0_4 {
    char unknown0[0x4];
    S_vv11_0_4_4 *f04;
};
struct S_vv32 {
    S_vv32_0 *f00;
    char unknown4[0x12];
    short f16;
    short f18;
    short f1a;
    short f1c;
    short f1e;
    char unknown20[0xc];
    short f2c;
    char unknown2e[0x2];
    int f30;
    short f34;
    char unknown36[0x2];
    int f38;
};
struct S_vv32_0 {
    char unknown0[0x4];
    S_vv32_0_4 *f04;
};
struct S_vv32_0_4 {
    char unknown0[0x4];
    S_vv32_0_4_4 *f04;
};
extern S_g8c44be0c *g_8c44be0c;
extern int g_8c44be30;
void operation_8c03280c(int a0)
{
    int v2;
    S_vv1 *v1;
    int v8;
    S_vv3 *v3;
    int v53;
    S_vv9 *v9;
    S_vv5 *v5;
    int v10;
    S_vv11 *v11;
    int v33;
    int v4;
    int v13;
    int v7;
    int v6;
    int v12;
    S_vv32 *v32;
    int v34;
    if (g_8c44be30 == 0 || g_8c44be0c == 0) {
        return;
    }
    v1 = (S_vv1 *)g_8c44be0c->f08;
    v2 = (int)0;
    while (g_8c44be0c->f00 > v2) {
        v3 = (S_vv3 *)v1->f20;
        v4 = (int)0;
        v53 = (int)-0x2001;
        while (v1->f2c > v4) {
            v3->f2c &= v53;
            v4 = (int)(v4 + 1);
            v3 = (S_vv3 *)((char *)v3 + 48);
        }
        v5 = (S_vv5 *)v1->f28;
        v6 = (int)0;
        while (v1->f34 > v6) {
            v5->f38 &= v53;
            v6 = (int)(v6 + 1);
            v5 = (S_vv5 *)((char *)v5 + 60);
        }
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 60);
    }
    v7 = (int)0x2000;
    v9 = (S_vv9 *)g_8c44be0c->f08;
    v10 = (int)0;
    v8 = (int)0x400;
    while (g_8c44be0c->f00 > v10) {
        v11 = (S_vv11 *)v9->f20;
        v12 = (int)0;
        while (v9->f2c > v12) {
            v13 = (int)v11->f2c;
            if (((v13 & v7)) == 0) {
                if (((v13 & v8)) != 0) {
                    v11->f0c += v11->f10;
                    v11->f0e += v11->f12;
                }
                if (((v11->f2c & 0x800)) != 0) {
                    v11->f24 -= 1;
                    if (!(v11->f24 >= 0)) {
                        v11->f28 += 1;
                        ((void (*)(int, void *))0x8c0315d8)(a0, (void *)((int)v11 + 0x1c));
                        ((void (*)(void *, short))0x8c0345cc)(v11->f00->f04->f04, v11->f20);
                        if (((v11->f2c & v8)) != 0) {
                            v11->f0a = v11->f20;
                        }
                    }
                }
                v11->f2c |= v7;
            }
            v12 = (int)(v12 + 1);
            v11 = (S_vv11 *)((char *)v11 + 48);
        }
        v32 = (S_vv32 *)v9->f28;
        v33 = (int)0;
        while (v9->f34 > v33) {
            v34 = (int)v32->f38;
            if (((v34 & v7)) == 0) {
                if (((v34 & v8)) != 0) {
                    v32->f18 += v32->f1c;
                    v32->f1a += v32->f1e;
                }
                if (((v32->f38 & 0x800)) != 0) {
                    v32->f30 -= 1;
                    if (!(v32->f30 >= 0)) {
                        v32->f34 += 1;
                        ((void (*)(int, void *))0x8c0315d8)(a0, (void *)((int)v32 + 0x28));
                        ((void (*)(void *, short))0x8c0345cc)(v32->f00->f04->f04, v32->f2c);
                        if (((v32->f38 & v8)) != 0) {
                            v32->f16 = v32->f2c;
                        }
                    }
                }
                v32->f38 |= v7;
            }
            v33 = (int)(v33 + 1);
            v32 = (S_vv32 *)((char *)v32 + 60);
        }
        v10 = (int)(v10 + 1);
        v9 = (S_vv9 *)((char *)v9 + 60);
    }
}
