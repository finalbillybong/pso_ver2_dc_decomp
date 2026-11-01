/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cc8bc
 * function: operation_8c0cc8bc
 * language: c
 * reference size: 160 bytes
 * compiled size: 156 bytes (-2.5%)
 * differing lines: 84 of 67 reference instruction lines
 * differing bytes: 140
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fa58 S_g8c46fa58;
typedef struct S_g8c46fa5c S_g8c46fa5c;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct S_g8c46fa5c {
    char unknown0[0x4];
    short f04;
};
struct S_vv2 {
    short f00;
    short f02;
    short f04;
};
struct S_vv3 {
    short f00;
    short f02;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
extern S_g8c46fa58 *g_8c46fa58;
extern S_g8c46fa5c *g_8c46fa5c;
void operation_8c0cc8bc(Object *o)
{
    short *p;
    short *q;
    int i;
    int j;
    short n;
    short cnt;
    int ix;
    int iz;
    ix = (int)(o->tag * 0.0125f * 1024.0f);
    iz = (int)(o->f08 * -0.0125f * 1024.0f);
    cnt = g_8c46fa5c->f04 & 0x3fff;
    p = (short *)((char *)g_8c46fa5c + 0x6);
    q = (short *)g_8c46fa58;
    for (i = 0; i < cnt; i++) {
        n = *p++;
        if (n < 0) {
            n = -n;
        }
        for (j = 0; j < n; j++) {
            *++p = *q++ + ix;
            *++p = *q++ + iz;
            p++;
        }
    }
}
