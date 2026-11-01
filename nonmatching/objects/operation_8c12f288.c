/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f288
 * function: operation_8c12f288
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 202 of 147 reference instruction lines
 * differing bytes: 270
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv9 S_vv9;
struct Frame {
    short f00;
    char unknown2[0x26];
};
struct S_vv5 {
    char unknown0[0x8];
    char f08;
};
struct S_vv6 {
    char f00;
};
struct S_vv13 {
    short f00;
};
struct S_vv9 {
    char f00;
};
struct Arg1 {
    short f00;
};
extern short g_8c2861c0;
extern int call_8c12ba9c(void);
extern int call_8c12bc48(void);
extern void memcpy_8c12b77c(S_vv5 *, void *, int);
extern void memset_8c12b880(S_vv6 *, int, int);
extern void call_8c12f0b4(Frame *, S_vv9 *, short, int);
extern int call_8c12f3dc(S_vv9 *, int);
extern void call_8c12f1cc(int, Arg1 *, int);
void operation_8c12f288(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    Arg1 **home1 = &a1;
    int *home2 = &a2;
    S_vv9 *v9;
    int v1;
    S_vv13 *v13;
    int v4;
    S_vv5 *v5;
    S_vv6 *v6;
    char *v12;
    int v8;
    int t1;
    int v11;
    int v14;
    int v2;
    int t2;
    int t3;
    (void)home1;
    (void)home2;
    v1 = (int)0;
    v2 = (int)1;
    v4 = (int)v2;
    if (a0 >= 0) {
        v4 = (int)v1;
    } else {
    }
    v11 = call_8c12ba9c();
    t1 = call_8c12bc48();
    if (v4 == 1 && t1 != 0) {
        (&frame)->f00 = g_8c2861c0;
        v5 = (S_vv5 *)((char *)(&frame) + 0x1c);
        memcpy_8c12b77c(v5, (void *)((void *)0x8c286170), 8);
        v5->f08 = v1;
        v8 = (int)(/* ? clobbered */ 0 - t1);
        v9 = (S_vv9 *)v5;
    } else {
        v6 = (S_vv6 *)((char *)(&frame) + 0x1c);
        memset_8c12b880(v6, 0, 9);
        v6->f00 |= 0x80;
        (&frame)->f00 = v1;
        v8 = (int)t1;
        v9 = (S_vv9 *)v6;
    }
    v12 = (char *)&*(int *)((char *)0x8c286130 + (v4 << 6));
    v13 = (S_vv13 *)&*(int *)((char *)0x8c2861b0 + (v4 << 4));
    v14 = (int)v1;
    do {
        if (((v11 & v2)) != 0) {
            call_8c12f0b4((Frame *)((&frame)), v9, v13->f00, (int)(v12));
            t2 = call_8c12f3dc(v9, 0x40);
            if (t2 != 0) {
                (&frame)->f00 += 1;
                v9->f00 |= 0x80;
            }
        }
        v14 = (int)(v14 + 1);
        v11 = (int)(v11 >> 1);
        v12 = (char *)(v12 + 8);
        v13 = (S_vv13 *)((char *)v13 + 2);
    } while (!(v14 >= 8));
    if (v8 != 0) {
        call_8c12f1cc(v8, a1, a2);
        call_8c12f0b4((Frame *)((&frame)), v9, a1->f00, a2);
        t3 = call_8c12f3dc(v9, 0x40);
        if (t3 == 1) {
            (&frame)->f00 += 1;
            v9->f00 |= 0x80;
        }
    }
    a1->f00 = (&frame)->f00;
    memcpy_8c12b77c((S_vv5 *)a2, (void *)v9, 8);
}
