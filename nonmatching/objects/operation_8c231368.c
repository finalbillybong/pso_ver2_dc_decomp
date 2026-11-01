/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c231368
 * function: operation_8c231368
 * language: c
 * reference size: 312 bytes
 * compiled size: 316 bytes (+1.3%)
 * differing lines: 192 of 121 reference instruction lines
 * differing bytes: 276
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv15 S_vv15;
typedef struct S_vv19 S_vv19;
typedef struct S_vv21 S_vv21;
typedef struct S_vv22 S_vv22;
typedef struct S_x23008 S_x23008;
typedef struct S_x23632 S_x23632;
typedef struct S_x74752 S_x74752;
typedef struct S_x79072 S_x79072;
typedef struct S_x79072_0 S_x79072_0;
typedef struct S_x79152 S_x79152;
typedef struct S_x80512 S_x80512;
struct S_x23008 {
    short f00;
};
struct S_vv1 {
    int f00;
};
struct S_x23632 {
    short f00;
};
struct S_x74752 {
    short f00;
};
struct S_vv19 {
    int f00;
};
struct S_x79152 {
    int f00;
};
struct S_vv15 {
    short f00;
};
struct S_vv22 {
    char f00;
};
struct S_x79072 {
    S_x79072_0 *f00;
};
struct S_vv21 {
    int f00;
};
struct S_x80512 {
    int f00;
};
extern int g_8c506568;
extern int g_8c506570;
extern int g_8c506574;
extern int g_8c506578;
extern int g_8c50657c;
extern void call_8c36c674(int);
extern int call_8c12bc48(int, S_vv1 *, int);
void operation_8c231368(void)
{
    S_vv1 *v1;
    char *v9;
    int v11;
    S_vv22 *v22;
    short v45;
    int v17;
    char *v23;
    S_vv15 *v15;
    int v20;
    int v18;
    S_vv21 *v21;
    S_vv19 *v19;
    char v46;
    int t1;
    int t2;
    g_8c506568 += 1;
    call_8c36c674(0xf);
    v1 = (S_vv1 *)(void *)0x8c5065a0;
    if (((((S_x23008 *)(-0x17ffdc))->f00 & 1)) != 0) {
        g_8c506570 += 1;
        ((S_x23008 *)(-0x17ffdc))->f00 &= -2;
        v1->f00 = -2;
    }
    v11 = (int)v9;
    if (((0x80 & (int)(v9))) != 0) {
        v9 = (char *)v9;
        if (((8 & (int)(v9))) != 0) {
            g_8c506574 += 1;
        }
        if (((4 & (int)(v9))) != 0) {
            g_8c506578 += 1;
        }
        ((S_x23632 *)(-0x17fff0))->f00 &= -0x81;
        v1->f00 = -4;
        v11 = (int)v9;
    }
    if (((v11 & 0x10)) != 0) {
        g_8c50657c += 1;
        ((S_x23632 *)(-0x17fff0))->f00 &= -0x11;
        v1->f00 = -6;
    }
    v15 = (S_vv15 *)-0x17fff8;
    v17 = (int)(void *)0x8c506588;
    v18 = (int)-0x41;
    v19 = (S_vv19 *)(void *)0x8c50658c;
    v20 = (int)-1;
    v21 = (S_vv21 *)(void *)0x8c506580;
    v22 = (S_vv22 *)((int)v15 + 0xc);
    v45 = (short)((S_x74752 *)(-0x17ffe4))->f00;
    if ((int)(unsigned char)v45 > 0) {
        v23 = (char *)v17;
        do {
            t1 = call_8c12bc48((int)(v23), v1, (int)((unsigned char)v45));
            if (t1 == v19->f00) {
                ((S_x79152 *)(/* ? clobbered */ 0))->f00 = (int)(v20);
                v15->f00 &= v18;
                return;
            }
            v46 = (char)v22->f00;
            ((S_x79072 *)(/* ? clobbered */ 0))->f00 = (S_x79072_0 *)((int)((S_x79072 *)(/* ? clobbered */ 0))->f00 + 1);
            *(char *)((char *)((char *)((S_x79072 *)(/* ? clobbered */ 0))->f00 - 0x1) + (v21->f00)) = v46;
            t2 = ((int (*)(void))call_8c12bc48)();
            ((S_x80512 *)(/* ? clobbered */ 0))->f00 = (int)(t2);
            v23 = (char *)/* ? clobbered */ 0;
        } while ((/* ? clobbered */ 0 + -1) > 0);
    }
}
