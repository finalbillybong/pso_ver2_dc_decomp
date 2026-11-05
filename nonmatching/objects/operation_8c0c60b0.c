/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c60b0
 * function: operation_8c0c60b0
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 10 of 102 reference instruction lines
 * differing bytes: 167
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
typedef struct S_g8c418254 S_g8c418254;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
extern char g_8c306344[];
extern void operation_8c04c270(void);
extern void reset_controller_state_8c01d9dc(void);
extern void call_8c0142d8(void *);
extern void TFog_create_8c0134f0(int);
extern void call_8c03096c(void);
extern void operation_8c01e648(void);
extern void operation_8c0731f4(void);
extern void get_game_mode_wrapper_8c01217c(void);
extern void call_8c0a1bf8(void);
extern void operation_8c08710c(void);
extern void operation_8c087770(void);
extern void operation_8c051a90(void);
extern void TCameraCtrl_create_8c0a2c74(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TScene_ctor_8c031358(void *, void *);
extern void operation_8c01e790(int, int, void *);
extern int lookup_low_id(int);
extern void operation_8c0a1b78(void *);
extern void call_8c05f87c(void *);
extern void call_8c1003d0(void *);
extern void operation_8c09cd50(void *, int, int);
static inline void reset_8c44be04(void)
{
    *(int *)0x8c44be04 = 0;
    *(int *)0x8c44be08 = 0;
}
void operation_8c0c60b0(void)
{
    int t1;
    int t2;
    int t3;
    operation_8c04c270();
    reset_controller_state_8c01d9dc();
    call_8c0142d8((void *)((void *)0x8c2e2e84));
    TFog_create_8c0134f0((int)((void *)0x8c3060f0));
    reset_8c44be04();
    call_8c03096c();
    operation_8c01e648();
    operation_8c0731f4();
    get_game_mode_wrapper_8c01217c();
    call_8c0a1bf8();
    operation_8c08710c();
    operation_8c087770();
    operation_8c051a90();
    TCameraCtrl_create_8c0a2c74();
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x44);
    if (t1 != 0) {
        TScene_ctor_8c031358((void *)t1, (void *)(*(S_g8c44be8c **)0x8c44be8c));
    }
    operation_8c01e790(0, 4, (void *)(*(S_g8c4db9e0 **)0x8c4db9e0));
    t2 = lookup_low_id((int)(*(S_g8c418254 **)0x8c418254));
    operation_8c0a1b78((void *)t2);
    call_8c05f87c((void *)((g_8c306344 + 0x9c)));
    call_8c1003d0((void *)((g_8c306344 + 0xa8)));
    t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
    if (t3 != 0) {
        operation_8c09cd50((void *)t3, (int)(*(S_g8c44be84 **)0x8c44be84), (int)((void *)0x8c0c5b6c));
    }
}
