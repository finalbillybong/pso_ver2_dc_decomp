/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24ffa4
 * function: operation_8c24ffa4
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 4 of 138 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct Frame Frame;
typedef struct S_g8c339cf0 S_g8c339cf0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct S_g8c467180_2c_528 S_g8c467180_2c_528;
typedef struct S_vv5 S_vv5;
struct S_L8c339ca0 {
    char unknown0[0x50];
    S_g8c339cf0 *f50;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x528];
    S_g8c467180_2c_528 *f528;
};
struct S_vv5 {
    int f00;
};
struct Frame {
    char unknown0[0x20];
};
extern S_g8c467180 *g_8c467180;
extern S_L8c339ca0 g_8c339ca0;
extern char g_8c33f788[];
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c0dc610(void *, float);
extern void sprintf_8c12b048(void *, void *, ...);
extern int lookup_low_id(int);
extern void strcat(void *, int);
extern int operation_8c247b38(int, int);
extern void operation_8c119764(int, int, int);
void operation_8c24ffa4(int a0)
{
    Frame frame;
    S_vv5 *v5;
    int v1;
    int v2;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    t1 = call_8c1196d4((void *)((void *)0x8c33f768), (void *)((void *)0x8c33f770), 1);
    (&g_8c339ca0)->f50 = (S_g8c339cf0 *)t1;
    if ((&g_8c339ca0)->f50 != 0) {
        operation_8c0dc610((void *)((&g_8c339ca0)->f50), -12000.0f);
        sprintf_8c12b048((void *)((void *)0x8c511020), (void *)((void *)g_8c33f788), g_8c467180->f2c->f528);
        v1 = (int)0;
        v2 = (int)0x7e4;
        v3 = (int)0x534;
        v5 = (S_vv5 *)(void *)((char *)&g_8c339ca0 + 0x274);
        v4 = (int)0x52c;
        while (4 > v1) {
            if (v5->f00 != 0) {
                t2 = lookup_low_id(v1);
                strcat((void *)((void *)0x8c511020), (int)(t2 + v2));
                strcat((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x8));
                t3 = operation_8c247b38(a0, (int)((int)v5 + 4));
                if (t3 >= 9) {
                    strcat((void *)((void *)0x8c511020), (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (v3))));
                } else {
                    if (t3 == 0) {
                        strcat((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0xe));
                    } else {
                        sprintf_8c12b048((void *)(&frame), (void *)((g_8c33f788 + 0x16)), *(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (v4)), t3);
                        strcat((void *)((void *)0x8c511020), (int)(&frame));
                    }
                }
                strcat((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x1d));
            }
            v1 = (int)(v1 + 1);
            v5 = (S_vv5 *)((char *)v5 + 164);
        }
        operation_8c119764((int)((&g_8c339ca0)->f50), (int)((void *)0x8c511020), 0);
    }
}
