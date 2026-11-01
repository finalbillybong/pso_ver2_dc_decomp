/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23e980
 * function: TItemWpnPickel_v50_8c23e980
 * language: c
 * reference size: 264 bytes
 * compiled size: 260 bytes (-1.5%)
 * differing lines: 90 of 101 reference instruction lines
 * differing bytes: 224
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    int f234;
};
struct Arg0_13c {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x214];
    int f310;
};
void TItemWpnPickel_v50_8c23e980(Object *o)
{
    int v2;
    int v5;
    int v4;
    int v3;
    int v9;
    float v10;
    float v1;
    int v7;
    float v11;
    int v8;
    int flag;
    Arg0_13c *p;
    p = o->f13c;
    if (p != 0) {
        v1 = (float)p->ff8;
        flag = p->fe8 & 4;
        v2 = (int)p->f310;
        v9 = 1;
        v3 = (int)(((v2 & 0x20)) != 0);
        if (v3 != 0) {
            v7 = (int)0;
            v8 = (int)0x4000;
            v10 = (float)15.6f;
            v11 = (float)20.4f;
        } else {
            v4 = (int)(((v2 & 0x40)) != 0);
            if (v4 != 0) {
                v7 = (int)0x4000;
                v8 = (int)-0x4000;
                    v10 = (float)12.0f;
                v11 = (float)24.0f;
            } else {
                v5 = (int)(((v2 & 0x80)) != 0);
                if (v5 != 0) {
                    v7 = (int)-0x4000;
                    v8 = (int)0x2000;
                            v10 = (float)14.4f;
                    v11 = (float)20.0f;
                } else {
                    v9 = (int)0;
                }
            }
        }
        if (v9 == 1) {
            if (flag == 0) {
                if (v10 > v1) {
                    o->f234 = (int)(v7);
                    return;
                }
                if (!(v10 > v1) && !(v1 > v11)) {
                    o->f234 = (int)((float)(v8 - v7) / (v11 - v10) * (v1 - v10) + (float)v7);
                    return;
                }
                o->f234 = (int)(v8);
                return;
            }
            o->f234 = (int)(v8);
        }
    }
}
