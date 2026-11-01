/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17eecc
 * function: build_main_data_vmu_header_8c17eecc
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 12 of 62 reference instruction lines
 * differing bytes: 21
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
typedef struct Frame Frame;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
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
extern void memset_8c12b880(Frame *, int, int);
extern void call_8c18e720(Frame *, void *);
extern void memcpy_8c12b77c(void *, void *, int);
extern void call_8c377d84(void *, Frame *);
void build_main_data_vmu_header_8c17eecc(void)
{
    Frame frame;
    memset_8c12b880((Frame *)((&frame)), 0, 0x60);
    call_8c18e720((Frame *)((&frame)), (void *)((void *)0x8c31987d));
    call_8c18e720((Frame *)(((char *)(&frame) + 0x12)), (void *)((void *)0x8c31988f));
    memcpy_8c12b77c((void *)((char *)(&frame) + 0x34), (void *)((void *)0x8c3198b1), 0x10);
    (&frame)->f44 = (void *)0x8c286818;
    (&frame)->f48 = (void *)0x8c286838;
    (&frame)->f4c = 1;
    (&frame)->f4e = 1;
    (&frame)->f50 = 0;
    (&frame)->f54 = 0;
    (&frame)->f58 = (int)(*(int *)0x8c4db9ec);
    (&frame)->f5c = 0x16fc;
    call_8c377d84((void *)(*(S_g8c4dbb10 **)0x8c4dbb10), (Frame *)((&frame)));
}
