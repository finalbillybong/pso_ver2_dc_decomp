/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ccb80
 * function: operation_8c0ccb80
 * language: c
 * reference size: 344 bytes
 * compiled size: 348 bytes (+1.2%)
 * differing lines: 72 of 136 reference instruction lines
 * differing bytes: 231
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
typedef struct Frame Frame;
typedef struct S_g8c469a64 S_g8c469a64;
typedef struct S_g8c46fa50 S_g8c46fa50;
typedef struct S_g8c46fa50_14 S_g8c46fa50_14;
typedef struct Object Object;
typedef struct Arg0_1ac8 Arg0_1ac8;
typedef struct Arg0_1acc Arg0_1acc;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_0 Arg0_24_0;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    char unknown28[0x1aa0];
    int f1ac8;
    int f1acc;
};
struct Arg0_24 {
    Arg0_24_0 *f00;
};
struct S_g8c46fa50 {
    char unknown0[0xc];
    int f0c;
    int f10;
    S_g8c46fa50_14 *f14;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
};
struct S_vv1 {
    short f00;
};
extern S_g8c469a64 *g_8c469a64;
extern int g_8c46fa4c;
extern S_g8c46fa50 *g_8c46fa50;
extern int g_8c46fa54;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3a944a(int);
extern void njRotateY_8c37df90(int, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c38c8ac(int, void *, int);
extern void call_8c0cc064(void *, int, int);
void operation_8c0ccb80(Object *o)
{
    int flag;
    int v2;
    int v3;
    int i;
    short *p;
    int v4;
    int v5;
    int s;
    int ns;
    int n;
    call_8c3827d8(g_8c469a64);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(o->f20));
    call_8c3a944a((int)(g_8c46fa4c + 0x30));
    njRotateY_8c37df90(0, (void *)(o->f24->f00));
    call_8c3a944a((int)(g_8c46fa54 + 0x30));
    njPopMatrixEx_8c38ad10();
    call_8c38c8ac(0x30014, (void *)(o->f1acc), 8);
    call_8c38c8ac(0x30015, (void *)(o->f1ac8), 8);
    if (o->f1acc >= 1) {
        p = (short *)((char *)g_8c46fa50->f14 + (g_8c46fa50->f0c + 3 << 1));
        v2 = g_8c46fa50->f10 + 8;
        v3 = v2 + 0x108;
        s = *p;
        v4 = (int)p + 8;
        v5 = (int)p + 2;
        call_8c0cc064((void *)((char *)o + 0x28), v4, v3);
        flag = 0;
        ns = -(short)s;
        for (i = 0; (n = o->f1acc) > i; i++) {
            int m1 = -1;
            int t = *(int *)((char *)(int *)((char *)o + 0x1a14) + (o->f1ac8 + n + m1 - i << 2));
            if (flag == 0) {
                *p = s;
                call_8c0cc064((void *)t, v5, v2);
                flag = 1;
            } else {
                *p = ns;
                call_8c0cc064((void *)t, v4, v3);
                flag = 0;
            }
            call_8c3a944a((int)((char *)g_8c46fa50 + 0x30));
        }
    }
}
