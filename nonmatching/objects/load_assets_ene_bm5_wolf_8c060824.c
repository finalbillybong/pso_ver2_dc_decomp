/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060824
 * function: load_assets_ene_bm5_wolf_8c060824
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 22 of 83 reference instruction lines
 * differing bytes: 12
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_L8c4688b0 S_L8c4688b0;
typedef struct S_L8c4688c8 S_L8c4688c8;
typedef struct S_L8c4688dc S_L8c4688dc;
typedef struct S_vv5_0 S_vv5_0;
struct S_L8c4688c8 {
    int f00;
    int f04;
};
struct S_L8c4688dc {
    int f00;
    int f04;
};
struct S_L8c4688b0 {
    float f00;
    float f04;
    float f08;
};
extern int g_8c4688a0;
extern int g_8c4688a8;
extern int g_8c4688ac;
extern S_L8c4688b0 g_8c4688b0;
extern S_L8c4688c8 g_8c4688c8;
extern S_L8c4688dc g_8c4688dc;
extern char g_8c2fcb6c[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void load_assets_ene_bm5_wolf_8c060824(void)
{
    int v5;
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c2fca28), (int)(g_8c2fcb6c + 0x199));
        g_8c4688a0 = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c2fca28));
        g_8c4688a0 = (int)(t3);
    }
    (&g_8c4688c8)->f00 = 0;
    (&g_8c4688c8)->f04 = 0;
    (&g_8c4688dc)->f00 = 0;
    (&g_8c4688dc)->f04 = 0;
    (&g_8c4688b0)->f00 = 0.0f;
    g_8c4688ac = g_8c4688a8 = 0;
    (&g_8c4688b0)->f04 = 0.0f;
    (&g_8c4688b0)->f08 = 0.0f;
    v4 = (int)0;
    while (2 > v4) {
        v5 = (int)(v4 << 2);
        t4 = record24_8c17948c((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284c38)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c468880))) = (int)(t4);
        t5 = record30_8c1794a0((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284c40)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c468888))) = (int)(t5);
        t6 = block32_8c1794b4((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284c48)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c468890))) = (int)(t6);
        t7 = record30_8c1794c8((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284c50)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c468898))) = (int)(t7);
        v4 = (int)(v4 + 1);
    }
}
