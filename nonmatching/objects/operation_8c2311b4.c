/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2311b4
 * function: operation_8c2311b4
 * language: c
 * reference size: 288 bytes
 * compiled size: 304 bytes (+5.6%)
 * differing lines: 200 of 119 reference instruction lines
 * differing bytes: 263
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv4 S_vv4;
typedef struct S_x32000 S_x32000;
typedef struct S_x50000 S_x50000;
typedef struct S_x59136 S_x59136;
typedef struct S_x59136_0 S_x59136_0;
typedef struct S_x59216 S_x59216;
typedef struct S_x91536 S_x91536;
typedef struct S_x94880 S_x94880;
struct S_vv1 {
    short f00;
};
struct S_x32000 {
    short f00;
};
struct S_x59216 {
    int f00;
};
struct S_vv4 {
    short f00;
    char unknown2[0xa];
    char f0c;
};
struct S_x59136 {
    S_x59136_0 *f00;
};
struct S_x50000 {
    int f00;
};
struct S_x94880 {
    short f00;
};
struct S_x91536 {
    short f00;
};
struct S_vv13 {
    int f00;
};
extern int g_8c506560;
extern int g_8c506580;
extern int g_8c50658c;
extern int call_8c12bc48(int, void *);
void operation_8c2311b4(void)
{
    S_vv1 *v1;
    int v10;
    int v5;
    char *v8;
    int v2;
    int v7;
    char v25;
    S_vv4 *v4;
    S_vv13 *v13;
    int v15;
    int t1;
    int t2;
    v1 = (S_vv1 *)-0x17fff0;
    g_8c506560 += 1;
    if (((1 & v1->f00)) != 0) {
        v2 = (int)(unsigned char)((S_x32000 *)(-0x17ffe4))->f00;
    } else {
        v2 = (int)0xe;
    }
    v4 = (S_vv4 *)-0x17fff8;
    v5 = (int)(void *)0x8c506588;
    v7 = (int)-0x41;
    v13 = (S_vv13 *)(void *)0x8c5065a0;
    v15 = (int)v1->f00;
    if (v2 > 0) {
        v8 = (char *)v5;
        v10 = (int)0;
        do {
            t1 = call_8c12bc48((int)(v8), (void *)((void *)0x8c5065a0));
            if (t1 == g_8c50658c) {
                ((S_x59216 *)(/* ? clobbered */ 0))->f00 = -1;
                v4->f00 &= v7;
                return;
            }
            v25 = (char)v4->f0c;
            ((S_x59136 *)(/* ? clobbered */ 0))->f00 = (S_x59136_0 *)((int)((S_x59136 *)(/* ? clobbered */ 0))->f00 + 1);
            *(char *)((char *)((char *)((S_x59136 *)(/* ? clobbered */ 0))->f00 - 0x1) + (g_8c506580)) = v25;
            t2 = ((int (*)(void))call_8c12bc48)();
            ((S_x50000 *)(/* ? clobbered */ 0))->f00 = (int)(t2);
            v10 = (int)(v10 + 1);
            v8 = (char *)/* ? clobbered */ 0;
        } while (!(v10 >= v2));
        v13 = (S_vv13 *)/* ? clobbered */ 0;
        v15 = (int)/* ? clobbered */ 0;
    }
    if (((((S_x94880 *)(-0x17ffdc))->f00 & 1)) != 0) {
        ((S_x91536 *)(-0x17ffdc))->f00 &= -2;
        v13->f00 = -2;
    }
    if (((1 & v15)) != 0) {
        v1->f00 &= -2;
        v13->f00 = -3;
    }
    if (((0x80 & v15)) != 0) {
        v1->f00 &= -0x81;
        v13->f00 = -4;
    }
    if (((0x10 & v15)) != 0) {
        v1->f00 &= -0x11;
        v13->f00 = -6;
    }
    if (((v15 & 2)) != 0) {
        v1->f00 &= -3;
        v13->f00 = -5;
    }
}
