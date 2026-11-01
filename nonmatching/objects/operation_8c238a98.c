/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238a98
 * function: operation_8c238a98
 * language: c
 * reference size: 376 bytes
 * compiled size: 372 bytes (-1.1%)
 * differing lines: 48 of 170 reference instruction lines
 * differing bytes: 305
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
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_vv4 S_vv4;
struct S_L8c339ca0 {
    int f00;
    char unknown4[0x10];
    int f14;
};
struct S_vv4 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x84];
    int f9c;
};
extern int g_8c4db9e4;
extern S_L8c339ca0 g_8c339ca0;
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
extern int operation_8c2382b0(void);
extern void call_8c238d00(void);
static inline int decode_word(int x)
{
    int hi;
    int t;
    hi = (short)((unsigned int)x >> 0x10) & 0xffff;
    t = operation_8c247e8c(hi);
    if (4 > t || t > 0xc) {
        return -1;
    }
    return (unsigned short)(hi ^ x);
}
int operation_8c238a98(int a0)
{
    S_vv4 *v4;
    int *p9c;
    int v3;
    int hi;
    int mask;
    int t;
    int v7;
    int v8;
    int v10;
    int v13;
    int v17;
    int v36;
    if ((&g_8c339ca0)->f00 != 9 || g_8c4db9e4 == 0) {
        return 0;
    }
    v3 = (int)(&g_8c339ca0)->f14;
    v4 = (S_vv4 *)(g_8c4db9e4 + 0x11c4);
    p9c = &v4->f9c;
    v7 = decode_word(v3);
    v8 = 0;
    if (v7 < 0 || v7 >= 0x1a) {
        return 0;
    }
    v10 = v4->f14;
    if (v10 == 0) {
        if (*p9c != 0) {
            v8 = 1;
        }
    } else {
        v13 = decode_word(v10);
        if (!(v13 >= 0)) {
            v13 = 0;
        }
        if (v13 >= 0x1a) {
            v8 = 1;
        } else if (v13 == v7) {
            v17 = *p9c;
            if (v17 == 0) {
                v17 = 0;
            } else {
                v17 = decode_word(v17);
                if (operation_8c238e7c(v17) != 0) {
                    v17 = 0;
                }
            }
            if (operation_8c238e7c(v17) != 0) {
                v8 = 1;
            } else if (a0 >= v17) {
                return 0;
            }
        }
    }
    if (v8 != 0) {
        v4->f14 = 0;
        *p9c = 0;
        return 0;
    }
    t = operation_8c2382b0();
    v4->f14 = t ^ (unsigned short)v7 | t << 0x10;
    if (a0 == 0 || operation_8c238e7c(a0) != 0) {
        v36 = 0;
    } else {
        t = operation_8c2382b0();
        v36 = t ^ (unsigned short)a0 | t << 0x10;
    }
    *p9c = v36;
    call_8c238d00();
    return 1;
}
