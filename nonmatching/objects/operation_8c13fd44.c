/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13fd44
 * function: operation_8c13fd44
 * language: c
 * reference size: 272 bytes
 * compiled size: 276 bytes (+1.5%)
 * differing lines: 96 of 127 reference instruction lines
 * differing bytes: 182
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2f574c S_L8c2f574c;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_34_0 Arg0_34_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    Arg0_34 *f34;
    char unknown38[0x28];
    int f60;
    char unknown64[0x10];
    int f74;
};
struct Arg0_34 {
    Arg0_34_0 *f00;
};
struct S_L8c2f574c {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
extern S_L8c2f574c g_8c2f574c;
extern float math_e8a4(float);
extern float errno_wrap_8c130390(float);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c13fd44(Object *o)
{
    int v1;
    char *v2;
    int v3;
    int v5;
    int v7;
    int v10;
    int v4;
    int v9;
    int v8;
    int v13;
    int v11;
    float t1;
    float t2;
    int t3;
    float t4;
    v2 = (char *)*(int *)((char *)((char *)o->f34->f00 + 0x0) + (o->f60 * 0xc));
    v1 = (int)*(int *)((char *)&g_8c2f574c.f04 + (o->f74 << 4));
    t1 = math_e8a4((float)v1);
    t2 = math_e8a4(2.0f);
    t4 = errno_wrap_8c130390(t1 / t2);
    v4 = (int)-1;
    v3 = (int)*(int *)((char *)&g_8c2f574c.f0c + (o->f74 << 4));
    v10 = (int)(v1 + 1 >> 1);
    v11 = (int)((v1 + 1 >> 1) + 1 >> 1);
    v13 = (int)0;
    goto L_8c13fe20;
    v5 = (int)(v1 + 1 >> 1);
    v7 = (int)((v1 + 1 >> 1) + 1 >> 1);
    v8 = (int)0;
L_8c13fdc8:;
    t3 = icmp((unsigned char *)v2 + 3, (unsigned char *)*(int *)((char *)((char *)v3 + 0x0) + (v5 << 2)) + 3);
    if (t3 == 0) {
        return (int)(v5);
    }
    if (!(t3 >= 0)) {
        v10 = (int)(v5 - v7);
        if (v10 >= 0) {
            goto L_8c13fe12;
        }
        v10 = (int)0;
    } else {
        v9 = (int)(v5 + v7);
        if ((v5 + v7) >= v1) {
            v9 = (int)(v1 + v4);
        }
        v10 = (int)v9;
    }
L_8c13fe12:;
    v11 = (int)(v7 + 1 >> 1);
    if (1 > (v7 + 1 >> 1)) {
        v11 = (int)1;
    }
    v13 = (int)(v8 + 1);
L_8c13fe20:;
    if (((int)t4 + 1) > v13) {
        v5 = (int)v10;
        v7 = (int)v11;
        v8 = (int)v13;
        goto L_8c13fdc8;
    }
    o->f04 |= 1;
    return 0;
}
