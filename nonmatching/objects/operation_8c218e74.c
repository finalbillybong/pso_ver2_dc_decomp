/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218e74
 * function: operation_8c218e74
 * language: c
 * reference size: 308 bytes
 * compiled size: 304 bytes (-1.3%)
 * differing lines: 34 of 134 reference instruction lines
 * differing bytes: 163
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
typedef struct Frame Frame;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct S_g8c50590c_0 S_g8c50590c_0;
typedef struct S_g8c50590c_4 S_g8c50590c_4;
typedef struct S_g8c50590c_8 S_g8c50590c_8;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
struct Arg2 {
    char f00;
    unsigned char f01;
    char f02;
};
struct Frame {
    char f00;
    char unknown1[0xf];
};
struct S_g8c50590c {
    S_g8c50590c_0 *f00;
    S_g8c50590c_4 *f04;
    S_g8c50590c_8 *f08;
};
struct S_vv1 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c50590c *g_8c50590c;
extern void operation_1c7dd4(void *);
extern void memcpy_8c12b77c(void *, void *, int);
extern int call_8c218c14(int, Frame *, int, int, int);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void operation_8c218fa8(int, void *, int);
extern void call_8c218ff4(int, Arg2 *, int);
extern void operation_8c219158(int, void *, int);
extern void operation_8c219100(int, void *);
void operation_8c218e74(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    int v3;
    S_vv1 *v1;
    int v2;
    char v5;
    unsigned char v6;
    int v7;
    unsigned char v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_1c7dd4((void *)a2);
    a2->f00 = 0;
    (&frame)->f00 = 0;
    memcpy_8c12b77c((void *)(((char *)(&frame) + 0x1)), (void *)(g_8c50590c->f00), 0xc);
    v3 = (int)1;
    v1 = (S_vv1 *)g_8c50590c;
    v2 = (int)-1;
    while (v3 != 0xd) {
        if (!((*(char *)((char *)((char *)(v1->f04 + v2) + 0x0) + (v3)) + a1) >= 0)) {
            *(char *)((char *)((char *)v3 + 0x0) + ((int)((&frame)))) = 0;
        }
        v3 = (int)(v3 + 1);
    }
    t1 = call_8c218c14(a0, (Frame *)((&frame)), 0, 0xd, 1);
    a2->f01 = t1;
    if (a2->f01 == 0) {
        operation_1c7dd4((void *)a2);
        return;
    }
    v5 = (char)*(char *)((char *)((char *)g_8c50590c->f04 - 0x1) + (a2->f01));
    v6 = (unsigned char)*(char *)((char *)((char *)g_8c50590c->f08 + -1) + (a2->f01));
    if (!((char)v5 >= 0)) {
        v7 = (int)(a1 - -(char)v5);
        v8 = (unsigned char)(unsigned char)v6;
        t2 = call_8c18e768(v7, v8);
        a2->f02 = t2;
        t3 = call_8c18e8a0(v7, v8);
        operation_8c218fa8(a0, (void *)a2, t3);
    } else {
        t4 = call_8c18e768(a1, (int)((char)v6));
        a2->f02 = t4 + v5;
        t5 = call_8c18e8a0(a1, (int)((unsigned char)v6));
        operation_8c218fa8(a0, (void *)a2, t5);
    }
    call_8c218ff4(a0, a2, a1);
    operation_8c219158(a0, (void *)a2, a1);
    operation_8c219100(a0, (void *)a2);
}
