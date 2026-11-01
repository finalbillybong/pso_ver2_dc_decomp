/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c101f44
 * function: operation_8c101f44
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 8 of 126 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_c S_vv5_c;
typedef struct Block_L8c46f564_0 {
    Block8 f00;
    int f08;
    int f0c;
} Block_L8c46f564_0;
typedef struct Block_L8c5755ac_0 {
    Block8 f00;
    int f08;
    int f0c;
} Block_L8c5755ac_0;
struct S_L8c5755ac {
    Block_L8c5755ac_0 f00;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
struct S_vv5 {
    float f00;
    char unknown4[0x4];
    float f08;
    S_vv5_c *f0c;
    float f10;
    char unknown14[0x2];
    short f16;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void operation_8c100ebc(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c101f44(Object *o)
{
    S_vv5 *v5;
    int v7;
    int v6;
    int v4;
    g_8c46f560 = (int)(g_8c575570);
    *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&(&g_8c5755ac)->f00;
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 |= 0x810;
    call_8c38c0e6(-0xff01, 0x100);
    v4 = (int)0x160;
    v5 = (S_vv5 *)((int)o + 0x98);
    v7 = (int)0;
    v6 = (int)-1;
    while (4 > v7) {
        if (v5->f16 != (short)v6) {
            call_8c38c0f0((void *)((int)v5 + 0x18));
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, v5->f00, 5.0f, v5->f08);
            njRotateY_8c37df90(0, (void *)(v5->f0c));
            njScale_8c37e2e4(0, v5->f10, v5->f10, v5->f10);
            operation_8c100ebc((void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v4))), 0.00054f);
            njPopMatrixEx_8c38ad10();
            call_8c38c0f0((void *)((void *)0x8c305fd8));
        }
        v7 = (int)(v7 + 1);
        v5 = (S_vv5 *)((char *)v5 + 40);
    }
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (int)(g_8c46f560);
}
