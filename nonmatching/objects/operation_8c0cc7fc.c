/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cc7fc
 * function: operation_8c0cc7fc
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 84 of 83 reference instruction lines
 * differing bytes: 83
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fa4c S_g8c46fa4c;
typedef struct S_g8c46fa4c_14 S_g8c46fa4c_14;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct S_g8c46fa4c {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
    S_g8c46fa4c_14 *f14;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_vv2 {
    char unknown0[0x2];
    short f02;
    short f04;
    char unknown6[0x2];
    short f08;
    short f0a;
};
extern short g_8c46fa36[];
extern short g_8c46fa20[];
void operation_8c0cc7fc(Object *o)
{
    int i;
    int j;
    short *p;
    int x;
    int y;
    short a;
    short b;
    short t;
    int v3;
    p = (short *)((char *)(*(S_g8c46fa4c **)0x8c46fa4c)->f14 + (((*(S_g8c46fa4c **)0x8c46fa4c)->f0c + 3) << 1));
    y = (int)(o->f08 * -0.0125f * 1024.0f);
    x = (int)(o->tag * 0.0125f * 1024.0f);
    i = 0;
    while (0xa > i) {
        v3 = i << 1;
        p++;
        a = y + *(short *)((char *)g_8c46fa36 + v3);
        b = *(short *)((char *)((char *)g_8c46fa36 + 2) + v3) + y;
        j = 0;
        while (0xb > j) {
            t = x + *(short *)((char *)g_8c46fa20 + (j << 1));
            p++;
            j++;
            *p = t;
            p++;
            *p = a;
            p++;
            p++;
            *p = t;
            p++;
            *p = b;
            p++;
        }
        i++;
    }
}
