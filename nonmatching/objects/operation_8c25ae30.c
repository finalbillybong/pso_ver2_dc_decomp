/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25ae30
 * function: operation_8c25ae30
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 8 of 150 reference instruction lines
 * differing bytes: 13
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_78 S_g8c467180_78;
typedef struct S_g8c467180_78_0 S_g8c467180_78_0;
typedef struct S_g8c467180_78_c S_g8c467180_78_c;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv11_2c S_vv11_2c;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
typedef struct S_vv5_28 S_vv5_28;
struct S_g8c467180 {
    char unknown0[0x78];
    S_g8c467180_78 *f78;
};
struct S_g8c467180_78 {
    S_g8c467180_78_0 *f00;
    char unknown4[0x8];
    S_g8c467180_78_c *f0c;
};
struct Frame {
    char unknown0[0x1f4];
    int f1f4;
    char unknown1f8[0x1f0];
};
struct S_vv5 {
    char unknown0[0x28];
    S_vv5_28 *f28;
};
struct S_vv11 {
    char unknown0[0x2c];
    S_vv11_2c *f2c;
};
extern int operation_8c19b054(void);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void memset_8c12b880(int, int, int);
extern int operation_8c25e540(void);
extern int operation_8c03f6d8(void);
extern void sprintf_8c12b048(int, void *, ...);
extern void strcat(int, void *);
extern int global_present_8c25e560(void);
void operation_8c25ae30(int a0)
{
    Frame frame;
    int t7;
    S_vv5 *v5;
    S_vv11 *v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;
    int t9;
    char *v1;
    int t11;
    t1 = operation_8c19b054();
    t7 = call_8c18e768((int)((char)t1), 2);
    t2 = operation_8c19b054();
    t8 = call_8c18e8a0((int)((char)t2), 2);
    v1 = (char *)*(int *)0x8c5134a0;
    t10 = call_8c18e768((int)(v1), 2);
    t11 = call_8c18e8a0((int)(v1), 2);
    memset_8c12b880((int)(a0 + 0x34), 0, 0x200);
    t3 = operation_8c25e540();
    if (t3 != 0) {
        t4 = operation_8c03f6d8();
        if (t4 == 1) {
            sprintf_8c12b048((int)(a0 + 0x34), (void *)((*(S_g8c467180 **)0x8c467180)->f78->f00));
        }
    }
    strcat((int)(a0 + 0x34), (void *)((*(S_g8c467180 **)0x8c467180)->f78->f0c));
    t5 = operation_8c25e540();
    if (t5 != 0) {
        t6 = operation_8c03f6d8();
        if (t6 == 1) {
            v5 = (S_vv5 *)(*(S_g8c467180 **)0x8c467180)->f78;
            sprintf_8c12b048((int)(&(&frame)->f1f4), (void *)(v5->f28), *(S_vv5_0 **)((char *)((char *)v5 + 0x0) + (t7 + 4 << 2)), *(S_vv5_0 **)((char *)((char *)v5 + 0x0) + (t8 + 8 << 2)));
            strcat((int)(a0 + 0x34), (void *)(&(&frame)->f1f4));
        }
    }
    t9 = global_present_8c25e560();
    if (t9 != 0) {
        v11 = (S_vv11 *)(*(S_g8c467180 **)0x8c467180)->f78;
        sprintf_8c12b048((int)(&frame), (void *)(v11->f2c), *(S_vv11_0 **)((char *)((char *)v11 + 0x0) + (t10 + 4 << 2)), *(S_vv11_0 **)((char *)((char *)v11 + 0x0) + (t11 + 8 << 2)));
        strcat((int)(a0 + 0x34), (void *)(&frame));
    }
}
