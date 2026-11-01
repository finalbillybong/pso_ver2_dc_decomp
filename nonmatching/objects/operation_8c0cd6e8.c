/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd6e8
 * function: operation_8c0cd6e8
 * language: c
 * reference size: 204 bytes
 * compiled size: 200 bytes (-2.0%)
 * differing lines: 90 of 94 reference instruction lines
 * differing bytes: 171
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
typedef struct S_vv19 S_vv19;
struct S_vv19 {
    short f00;
    short f02;
};
struct Object {
    int tag;
    int f04;
};
void operation_8c0cd6e8(Object *o, short *p, int a2)
{
    short v;
    int c;
    int n;
    short *q;
    unsigned int j;
    unsigned int cnt;
    short k;
    while ((v = *p++) != 0xff) {
        c = (short)(unsigned char)v;
        if (8 > c) {
            continue;
        }
        if (0x10 > c) {
            if ((*p++ & 0x1fff) == a2) {
                *(int *)0x8c46fa88 = 1;
            } else {
                *(int *)0x8c46fa88 = 0;
            }
            continue;
        }
        if (0x40 > c) {
            n = (unsigned short)*p++;
            p = (short *)((char *)p + (n << 1));
            continue;
        }
        n = (unsigned short)*p;
        q = p + 1;
        p = q;
        if (*(int *)0x8c46fa88 != 0 && c == 0x41) {
            o->f04 += 1;
            cnt = *q & 0x3fff;
            p = q + 1;
            for (j = 0; cnt > j; j++) {
                k = *p++;
                if (k < 0) {
                    k = -k;
                }
                o->tag += k;
                p = (short *)((char *)p + k * 6);
            }
        } else {
            n <<= 1;
            p = (short *)((char *)p + n);
        }
    }
}
