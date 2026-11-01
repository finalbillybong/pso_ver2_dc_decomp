/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c013a04
 * function: operation_8c013a04
 * language: c
 * reference size: 80 bytes
 * compiled size: 92 bytes (+15.0%)
 * differing lines: 12 of 36 reference instruction lines
 * differing bytes: 86
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c4182fc S_L8c4182fc;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct S_L8c4182fc {
    char unknown0[0xc];
    int f0c;
};
struct S_vv2 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_vv3 {
    Block16 f00;
};
struct Arg2 {
    Block16 f00;
};
extern S_L8c4182fc g_8c4182fc;
void operation_8c013a04(int a0, Arg1 *a1, Arg2 *a2)
{
    Block16 *pm1;
    S_vv2 *v2;
    Vector3 *pm3;
    int pm2;
    S_vv3 *v3;
    int v1;
    char *pm6;
    pm2 = 0x20;
    v1 = *(int *)0x8c4189dc;
    if (!(v1 >= pm2)) {
        Vector3 *pm4;
        v3 = (S_vv3 *)((char *)&g_8c4182fc.f0c + v1 * 0x2c);
        v2 = (S_vv2 *)(v1 * 0x2c + 0x8c4182fc);
        pm6 = (char *)&g_8c4182fc + 0x28;
        *(int *)((0x2c * v1) + pm6) = a0;
        pm1 = (&a2->f00);
        pm4 = (Vector3 *)&v2->f00;
        pm3 = &a1->f00;
        *pm4 = *(Vector3 *)pm3;
        *(&v3->f00) = *pm1;
        *(int *)0x8c4189dc = *(int *)0x8c4189dc + 1;
    }
}
