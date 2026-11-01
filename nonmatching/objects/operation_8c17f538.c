/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17f538
 * function: operation_8c17f538
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 28 of 94 reference instruction lines
 * differing bytes: 81
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct Frame Frame;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
struct Frame {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc];
    void *f44;
    void *f48;
    short f4c;
    short f4e;
    int f50;
    short f54;
    char unknown56[0x2];
    int f58;
    int f5c;
};
extern S_g8c4db9e0 *g_8c4db9e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_g8c4db9ec *g_8c4db9ec;
extern S_g8c4dbb10 *g_8c4dbb10;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void memcpy_8c12b77c(int, void *, int);
extern void call_8c17f024(void *);
extern void memset_8c12b880(Frame *, int, int);
extern void call_8c18e720(Frame *, void *);
extern void call_8c377d84(void *, Frame *);
void operation_8c17f538(void)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    t1 = operation_8c2324e0();
    v1 = (int)t1;
    if (t1 == 0) {
        t2 = operation_8c2324c0();
        v1 = (int)t2;
    }
    (&g_8c4dbaf8)->f04 = (int)(v1);
    (&g_8c4dbaf8)->f00 = (int)(v1);
    memcpy_8c12b77c((int)((int)g_8c4db9ec + 4), g_8c4db9e0, 0x41c);
    memcpy_8c12b77c((int)((int)g_8c4db9ec + 0x420), g_8c4db9e4, 0x12d8);
    call_8c17f024(g_8c4db9ec);
    memset_8c12b880((Frame *)((&frame)), 0, 0x60);
    call_8c18e720((Frame *)((&frame)), (void *)((void *)0x8c31987d));
    call_8c18e720((Frame *)(((char *)(&frame) + 0x12)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((int)(&(&frame)->f34), (void *)((void *)0x8c3198b1), 0x10);
    (&frame)->f44 = (void *)0x8c286818;
    (&frame)->f48 = (void *)0x8c286838;
    (&frame)->f4c = 1;
    (&frame)->f4e = 1;
    (&frame)->f50 = 0;
    (&frame)->f54 = 0;
    (&frame)->f58 = (int)(g_8c4db9ec);
    (&frame)->f5c = 0x16fc;
    call_8c377d84(g_8c4dbb10, (Frame *)((&frame)));
}
