/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17e458
 * function: operation_8c17e458
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 8 of 98 reference instruction lines
 * differing bytes: 20
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
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
    char unknown10[0x4];
    int f14;
    char unknown18[0x1174];
    char f118c;
    char unknown118d[0xf];
    char f119c;
    char unknown119d[0x11b];
    char f12b8;
    char unknown12b9[0xf];
    char f12c8;
};
extern void operation_8c191504(int);
extern void memset_8c12b880(void *, int, int);
extern void operation_8c035374(void);
extern void call_8c027a24(void);
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, void *);
extern int record124_8c036110(int);
extern void memcpy_8c12b77c(void *, int, int);
extern int operation_8c036124(int);
extern void operation_03cee8_8c177704(void);
extern void operation_8c15b200(void);
extern void load_symbol_chat_data_8c21f234(void);
extern void operation_8c209730(void);
extern void operation_8c2357b8(void *);
void operation_8c17e458(void)
{
    int t1;
    int t2;
    operation_8c191504(0);
    memset_8c12b880((void *)(*(S_g8c4db9e0 **)0x8c4db9e0), 0, 0x41c);
    operation_8c035374();
    call_8c027a24();
    memset_8c12b880((void *)(*(S_g8c4db9e4 **)0x8c4db9e4), 0, 0x12d8);
    call_8c36d3ca((void *)((void *)0x8c4dbae0));
    call_8c36d4c0((void *)((void *)0x8c4dbae0), (void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x4)));
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f08 = -0x5dfa4f9c;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f0c = 0;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f00 = 0;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f14 = 1;
    t1 = record124_8c036110(0);
    memcpy_8c12b77c((void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x18)), t1, 0x1c);
    t2 = operation_8c036124(0);
    memcpy_8c12b77c((void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x34)), t2, 0x10);
    operation_03cee8_8c177704();
    operation_8c15b200();
    load_symbol_chat_data_8c21f234();
    operation_8c209730();
    operation_8c2357b8((void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x1264)));
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f118c = 0;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f119c = 0;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f12b8 = 0;
    (*(S_g8c4db9e4 **)0x8c4db9e4)->f12c8 = 0;
}
