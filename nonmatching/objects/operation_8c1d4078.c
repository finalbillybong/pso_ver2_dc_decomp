/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d4078
 * function: operation_8c1d4078
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 16 of 128 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_c8c25358c S_c8c25358c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x40];
    Arg0_40 *f40;
};
struct Frame {
    int f00;
};
struct S_c8c25358c {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv3 {
    unsigned short f00;
    unsigned short f02;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1dc5a0(void *, int);
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern int operation_8c1d45b4(int, int);
extern void operation_8c156d30(S_c8c156bd8 *, int, int, int);
extern int operation_8c2097a8(int);
extern void operation_8c1571d4(void *, int);
extern int operation_8c2535dc(int, int);
extern S_c8c25358c *operation_8c25358c(void);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d4078(Object *o, int a1, int a2)
{
    Frame frame;
    int v4;
    int v2;
    int v1;
    S_c8c156bd8 *t2;
    int t1;
    S_vv3 *v3;
    int t3;
    int t4;
    int t5;
    S_c8c25358c *t6;
    int t7;
    t1 = operation_8c1dc5a0((void *)(o->f40), a2);
    t2 = operation_8c156bd8((int)((void *)0x8c2893e8), 0x20, t1);
    if (a2 == 0) {
        t3 = operation_8c1d45b4((int)o, 0);
        operation_8c156d30(t2, t3, 6, 0);
        t4 = operation_8c1d45b4((int)o, 1);
        operation_8c156d30(t2, t4, 6, 1);
        t5 = operation_8c2097a8(0x40000);
        operation_8c1571d4((void *)t2, t5);
    } else {
        t7 = operation_8c2535dc(a1, a2);
        t6 = operation_8c25358c();
        v1 = (int)0;
        (&frame)->f00 = t6->f01;
        v2 = (int)0;
        v3 = (S_vv3 *)((char *)t6 + 0x4);
        while ((&frame)->f00 > v2) {
            if (v3->f00 == a2) {
                v4 = (int)v3->f02;
                operation_8c156d30(t2, (int)((int)v3 + 4), 6, v4);
                if ((unsigned short)t7 == (unsigned short)v4) {
                    operation_8c1571d4((void *)t2, v1);
                }
                v1 = (int)(v1 + 1);
            }
            v2 = (int)(v2 + 1);
            v3 = (S_vv3 *)((char *)v3 + 32);
        }
    }
    t2->f80 = (t2->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)t2, 415.0f, 128.0f);
    operation_8c157138((void *)t2);
    return t2;
}
