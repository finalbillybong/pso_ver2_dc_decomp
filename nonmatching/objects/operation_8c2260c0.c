/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2260c0
 * function: operation_8c2260c0
 * language: c
 * reference size: 504 bytes
 * compiled size: 512 bytes (+1.6%)
 * differing lines: 304 of 212 reference instruction lines
 * differing bytes: 409
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506144 S_g8c506144;
typedef struct S_g8c506144_0 S_g8c506144_0;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
typedef struct S_x16288 S_x16288;
typedef struct S_x77312 S_x77312;
typedef struct S_x82704 S_x82704;
typedef struct S_x93408 S_x93408;
typedef struct S_x9680 S_x9680;
struct Object {
    char unknown0[0x28];
    float f28;
    char unknown2c[0x4];
    float f30;
    char unknown34[0x18f8];
    int f192c;
    char unknown1930[0x60];
    float f1990;
};
struct S_g8c506144_0 {
    char f00;
};
struct S_vv8 {
    float f00;
};
struct S_vv3 {
    float f00;
};
struct S_x16288 {
    float f00;
};
struct S_x9680 {
    float f00;
};
struct S_vv6 {
    float f00;
};
struct S_vv7 {
    float f00;
};
struct S_x82704 {
    float f00;
};
struct S_x77312 {
    float f00;
};
struct S_x93408 {
    float f00;
};
extern int g_8c506140;
extern S_g8c506144 *g_8c506144;
void operation_8c2260c0(Object *o)
{
    int v5;
    unsigned int v9;
    S_vv6 *v6;
    int v2;
    S_vv3 *v3;
    S_vv8 *v8;
    int v4;
    S_vv7 *v7;
    int n;
    float *p38;
    float *p3c;
    float *p58;
    float *p5c;
    n = o->f192c;
    if (g_8c506140 == 1) {
        n -= 9;
    }
    o->f30 = 431.0f - o->f28 / 1.85f;
    v2 = (int)((char *)o + 0x38);
    v3 = (S_vv3 *)((char *)o + 0x1934);
    v4 = (int)((char *)o + 0x2c);
    v5 = (int)&o->f30;
    v6 = (S_vv6 *)((char *)o + 0x1950);
    v7 = (S_vv7 *)((char *)o + 0x1954);
    v8 = (S_vv8 *)((char *)o + 0x1930);
    p38 = (float *)((char *)o + 0x1938);
    p3c = (float *)((char *)o + 0x193c);
    p58 = (float *)((char *)o + 0x1958);
    p5c = (float *)((char *)o + 0x195c);
    v9 = (unsigned int)0;
    while ((unsigned int)n > v9) {
        switch ((*(S_g8c506144_0 **)((char *)((char *)g_8c506144 + 0x0) + (v9 << 2)))->f00) {
        case 35:
            *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3)) = 50.0f;
            *(float *)((char *)((char *)v2 + 0x0) + (v9 << 3)) = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3)) + 20.0f;
            break;
        case 33:
            *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3)) = 45.0f;
            *(float *)((char *)((char *)v2 + 0x0) + (v9 << 3)) = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3)) + 256.0f;
            v8->f00 = *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3));
            v3->f00 = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3));
            *p38 = v8->f00 + 256.0f;
            *p3c = v3->f00 + 256.0f;
            break;
        case 64:
            *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3)) = 45.0f;
            *(float *)((char *)((char *)v2 + 0x0) + (v9 << 3)) = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3)) + 256.0f;
            v6->f00 = *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3));
            v7->f00 = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3));
            *p58 = v6->f00 + 256.0f;
            *p5c = v7->f00 + 256.0f;
            break;
        default:
            *(float *)((char *)((char *)v4 + 0x0) + (v9 << 3)) = 50.0f;
            *(float *)((char *)((char *)v2 + 0x0) + (v9 << 3)) = *(float *)((char *)((char *)v5 + 0x0) + (v9 << 3)) + 15.0f;
            break;
        }
        v9 = (unsigned int)(v9 + 1);
    }
    o->f28 += o->f1990;
    if (250.0f > ((S_x93408 *)(&o->f30 + (o->f192c << 3)))->f00) {
        g_8c506140 = 1;
    }
}
