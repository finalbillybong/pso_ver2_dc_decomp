/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c087fd0
 * function: operation_8c087fd0
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 102 of 175 reference instruction lines
 * differing bytes: 92
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
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    float f28;
    float f2c;
    float f30;
    char unknown34[0x24];
    int f58;
    char unknown5c[0x4];
    float f60;
    char unknown64[0xc];
    unsigned short f70;
    char unknown72[0x2];
    Arg0_74 *f74;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    float f30;
    int f34;
};
void operation_8c087fd0(Object *o)
{
    S_vv1 *v1;
    int v3;
    int v2;
    float v13;
    char *v14;
    v1 = (S_vv1 *)o->f74;
    v2 = (int)0;
    v3 = (int)0;
    while (o->f58 > v3) {
        if (v1->f34 == 0) {
            if (((o->f70 & 4)) == 0) {
                goto L_8c088108;
            }
            v1->f30 -= 0.1f;
            if (!(v1->f30 > 0.0f)) {
                goto L_8c08801c;
            }
            v2 = (int)(v2 + 1);
        } else {
            v1->f34 -= 1;
            v2 = (int)(v2 + 1);
        }
L_8c08801c:;
        v1->f0c += -v1->f0c * o->f2c;
        v1->f10 += -v1->f10 * 0.1f - o->f30;
        v1->f14 += -v1->f14 * o->f2c;
        v1->f00 += v1->f0c;
        v1->f04 += v1->f10;
        v1->f08 += v1->f14;
        v1->f18 += v1->f24;
        v1->f1c += v1->f28;
        v1->f20 += v1->f2c;
        if (((o->f70 & 2)) != 0) {
            v13 = (float)o->f60;
            if (v13 > v1->f04 && 0.0f > v1->f10) {
                v1->f04 = v13;
                v1->f0c *= 0.9f;
                v1->f10 *= -o->f28;
                v1->f14 *= 0.9f;
                v14 = (char *)v1->f24;
                v1->f24 = (int)((float)(int)v14 * 0.5f);
                v1->f28 = (int)((float)v1->f28 * 0.5f);
                v1->f2c = (int)((float)v1->f2c * 0.5f);
            }
        }
L_8c088108:;
        v3 = (int)(v3 + 1);
        v1 = (S_vv1 *)((char *)v1 + 56);
    }
    if (v2 == 0) {
        o->f04 |= 1;
    }
}
