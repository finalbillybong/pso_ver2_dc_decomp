/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3864
 * function: operation_8c1f3864
 * language: c
 * reference size: 206 bytes
 * compiled size: 256 bytes (+24.3%)
 * differing lines: 124 of 103 reference instruction lines
 * differing bytes: 232
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +50 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv14 S_vv14;
typedef struct S_vv16 S_vv16;
typedef struct S_vv1_4 S_vv1_4;
struct Object {
    short tag;
    char unknown2[0x2];
    Arg0_4 *f04;
};
struct S_vv1 {
    short f00;
    unsigned char f02;
    char f03;
    S_vv1_4 *f04;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x4];
};
struct S_vv16 {
    char unknown0[0x10];
    int f10;
};
struct S_vv14 {
    char unknown0[0x5];
    char f05;
};
extern int g_8c4e3704;
extern char g_8c4e3968[];
extern int call_8c1f3974(short);
extern int call_8c1f8a3a(int, short, void *, Frame *);
extern int call_8c1f7e98(void *, char, char, void *, Frame *);
extern int call_8c1f39a6(S_vv14 *, S_vv1 *, short, void *, void *);
extern void release_chain_10_8c1f5704(void *);
int operation_8c1f3864(Object *o)
{
    Frame frame;
    Object **home = &o;
    int v11;
    S_vv14 *v14;
    int v19;
    int v23;
    int v13;
    char *v15;
    int v17;
    S_vv1 *v1;
    int v12;
    S_vv16 *v16;
    int t1;
    int t2;
    int t3;
    (void)home;
    v1 = (S_vv1 *)o->f04;
    if (v1 == 0 || v1->f00 == 0) {
L_8c1f3880:;
        v13 = call_8c1f3974(o->tag);
        goto L_8c1f3922;
    }
    if ((int)(v1->f04) == -1) {
        if (v1->f02 != 0x1f) {
            goto L_8c1f3880;
        }
        t1 = call_8c1f8a3a((int)(g_8c4e3704 + g_8c4e3968), v1->f00, (void *)((void *)0x8c4e3180), (Frame *)((&frame)));
        if (t1 > 0) {
            goto L_8c1f38cc;
        }
        goto L_8c1f3880;
    }
    t2 = call_8c1f7e98((void *)(v1->f04), v1->f02, v1->f03, (void *)((void *)0x8c4e3180), (Frame *)((&frame)));
    if (!(t2 > 0)) {
        goto L_8c1f3880;
    }
L_8c1f38cc:;
    v11 = (int)(void *)0x8c4e3180;
    v12 = (int)0;
    v13 = (int)0;
    v23 = (int)v11;
    goto L_8c1f391c;
    v14 = (S_vv14 *)v11;
    v15 = (char *)v13;
    v16 = (S_vv16 *)v12;
L_8c1f38d4:;
    t3 = call_8c1f39a6(v14, v1, v1->f00, (void *)(&(&frame)->f04), (void *)(&(&frame)->f08));
    if (t3 == 0) {
        release_chain_10_8c1f5704((void *)v15);
        return 0;
    }
    if (v15 == 0) {
        v17 = (int)(&frame)->f04;
    } else {
        v16->f10 = (int)((&frame)->f04);
        v17 = (int)v15;
    }
L_8c1f3906:;
    if (v14->f05 != 0) {
        goto L_8c1f3906;
    }
    v19 = (int)((int)v14 + 6);
    if ((((int)v14 + 6 & 1)) != 0) {
        v19 = (int)((int)v14 + 7);
    }
    (&frame)->f00 -= 1;
    v12 = (int)(&frame)->f08;
    v13 = (int)v17;
    v23 = (int)v19;
L_8c1f391c:;
    if ((&frame)->f00 > 0) {
        v14 = (S_vv14 *)v23;
        v15 = (char *)v13;
        v16 = (S_vv16 *)v12;
        goto L_8c1f38d4;
    }
L_8c1f3922:;
    return (int)(v13);
}
