/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1020a0
 * function: operation_8c1020a0
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 8 of 154 reference instruction lines
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
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_10 S_vv7_10;
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
struct S_vv7 {
    float f00;
    float f04;
    float f08;
    unsigned short f0c;
    short f0e;
    S_vv7_10 *f10;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c4d5948;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern void call_8c38c0e6(int, int);
extern void operation_8c1030a4(int, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateY_8c37df90(int, int);
extern void njScale_8c37e2e4(int, float, float, float);
extern void operation_8c100ebc(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c38c0f0(void *);
void operation_8c1020a0(Object *o)
{
    S_vv7 *v7;
    int v14;
    int v5;
    int v6;
    g_8c46f560 = (int)(g_8c575570);
    *(Block16 *)&(&g_8c46f564)->f00 = *(Block16 *)&(&g_8c5755ac)->f00;
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 |= 0x810;
    call_8c38c0e6(-0xff01, 0x100);
    v7 = (S_vv7 *)0x8c4d5448;
    v5 = 0x168;
    v6 = 0x164;
    for (v14 = 0; g_8c4d5948 > v14; v14++, v7++) {
        operation_8c1030a4((int)(o), (void *)(v7->f10));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, v7->f00, 3.0f, v7->f04);
        njRotateY_8c37df90(0, (int)(v7->f0c));
        switch (v7->f0e) {
        case 0:
            njScale_8c37e2e4(0, v7->f08 * 13.6f, 8.0f, v7->f08 * 5.6f);
            operation_8c100ebc((void *)(*(Arg0_0 **)((char *)o + v5)), 0.00054f);
            break;
        case 1:
            njScale_8c37e2e4(0, v7->f08 * 8.0f, 8.0f, v7->f08 * 8.0f);
            operation_8c100ebc((void *)(*(Arg0_0 **)((char *)o + v6)), 0.00054f);
            break;
        }
        njPopMatrixEx_8c38ad10();
    }
    call_8c38c0f0((void *)((void *)0x8c305fd8));
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (int)(g_8c46f560);
}
