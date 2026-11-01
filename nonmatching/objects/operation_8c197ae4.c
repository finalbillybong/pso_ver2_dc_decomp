/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c197ae4
 * function: operation_8c197ae4
 * language: c
 * reference size: 264 bytes
 * compiled size: 256 bytes (-3.0%)
 * differing lines: 114 of 119 reference instruction lines
 * differing bytes: 207
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_x89360 S_x89360;
struct Frame {
    Block24 f00;
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct S_vv6 {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x8];
    float f18;
    char unknown1c[0x10];
    int f2c;
};
struct S_vv3 {
    float f00;
};
struct S_vv2 {
    float f00;
};
struct S_x89360 {
    float f00;
};
struct S_vv4 {
    float f00;
};
struct S_vv7 {
    char unknown0[0x18];
    float f18;
    int f1c;
};
struct S_vv1 {
    char unknown0[0x2c];
    int f2c;
};
extern Block24 g_8c31c62c;
void operation_8c197ae4(Object *o, int a1)
{
    Frame frame;
    unsigned int v5;
    S_vv1 *v1;
    S_vv6 *v6;
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv4 *v4;
    S_vv7 *v7;
    float v10;
    *(Block24 *)&(&frame)->f00 = *(Block24 *)&g_8c31c62c;
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (a1 << 2));
    v2 = (S_vv2 *)((int)v1 + 0xc);
    v3 = (S_vv3 *)((int)v1 + 8);
    v4 = (S_vv4 *)((int)v1 + 0x18);
    v5 = (unsigned int)0;
    while ((unsigned int)3 > v5) {
        v6 = (S_vv6 *)*(Arg0_30_4 **)((char *)((char *)o->f30 + 0x4) + (a1 + v5 << 2));
        v7 = (S_vv7 *)*(Arg0_30_10 **)((char *)((char *)o->f30 + 0x10) + (a1 + v5 << 2));
        v6->f08 = v3->f00 + *(float *)((char *)&(&frame)->f00 + (v5 << 3));
        v6->f0c = v2->f00 + ((S_x89360 *)((v5 << 3) + ((char *)(&frame) + 0x4)))->f00;
        v6->f18 = v4->f00 + 0.1f;
        v7->f18 = v4->f00 + 0.2f;
        v7->f1c = (int)(v1->f2c);
        v10 = (float)(float)(unsigned int)((unsigned char)v6->f2c * (unsigned char)(unsigned char)v1->f2c);
        v6->f2c = (unsigned char)(int)(v10 * 0.00392156886f) << 0x10 | -0x1000000 | (unsigned char)(int)(v10 * 0.00392156886f) << 8 | (unsigned char)(int)(v10 * 0.00392156886f);
        v5 = (unsigned int)(v5 + 1);
    }
}
