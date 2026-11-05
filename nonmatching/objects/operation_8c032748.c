/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c032748
 * function: operation_8c032748
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 86 of 90 reference instruction lines
 * differing bytes: 56
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_vv1_28 S_vv1_28;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_28 S_vv6_28;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_4 S_vv8_4;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    S_g8c44be0c_8 *f08;
};
struct S_vv1 {
    char unknown0[0x28];
    S_vv1_28 *f28;
    char unknown2c[0x8];
    int f34;
};
struct S_vv3 {
    char unknown0[0x38];
    int f38;
};
struct S_vv6 {
    char unknown0[0x28];
    S_vv6_28 *f28;
    char unknown2c[0x8];
    int f34;
};
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
    char unknown8[0x4];
    float f0c;
    float f10;
    char unknown14[0x24];
    int f38;
};
struct S_vv8_4 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c44be0c *g_8c44be0c;
void operation_8c032748(void)
{
    int v2;
    S_vv1 *v1;
    int v4;
    S_vv3 *v3;
    int v7;
    S_vv6 *v6;
    int v9;
    S_vv8 *v8;
    int v5;
    float v10;
    if (g_8c44be0c != 0) {
        v1 = (S_vv1 *)g_8c44be0c->f08;
        v2 = (int)0;
        while (g_8c44be0c->f00 > v2) {
            v3 = (S_vv3 *)v1->f28;
            v4 = (int)0;
            while (v1->f34 > v4) {
                v3->f38 &= -0x4001;
                v4 = (int)(v4 + 1);
                v3 = (S_vv3 *)((char *)v3 + 60);
            }
            v2 = (int)(v2 + 1);
            v1 = (S_vv1 *)((char *)v1 + 60);
        }
        v6 = (S_vv6 *)g_8c44be0c->f08;
        v5 = (int)-1;
        v7 = (int)0;
        while (g_8c44be0c->f00 > v7) {
            v8 = (S_vv8 *)v6->f28;
            v9 = (int)0;
            while (v6->f34 > v9) {
                if (((v8->f38 & 0x4000)) == 0) {
                    v8->f0c += v8->f10;
                    if (v8->f04 != 0) {
                        v10 = (float)(float)(unsigned int)(v8->f04->f04 + v5);
                        if (v8->f0c > v10) {
                            v8->f0c = 0.0f;
                        }
                    }
                    v8->f38 |= 0x4000;
                }
                v9 = (int)(v9 + 1);
                v8 = (S_vv8 *)((char *)v8 + 60);
            }
            v7 = (int)(v7 + 1);
            v6 = (S_vv6 *)((char *)v6 + 60);
        }
    }
}
