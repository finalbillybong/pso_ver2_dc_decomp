/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17ef78
 * function: build_guild_card_vmu_header_8c17ef78
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 12 of 62 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode retflip2)
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
typedef struct S_g8c4dbb14 S_g8c4dbb14;
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
void build_guild_card_vmu_header_8c17ef78(void)
{
    Frame frame;
    memset_8c12b880((Frame *)((&frame)), 0, 0x60);
    call_8c18e720((Frame *)((&frame)), (void *)((void *)0x8c31991f));
    call_8c18e720((Frame *)(((char *)(&frame) + 0x12)), (void *)((void *)0x8c319931));
    memcpy_8c12b77c((void *)(&(&frame)->f34), (void *)((void *)0x8c319953), 0x10);
    (&frame)->f44 = (void *)0x8c286a38;
    (&frame)->f48 = (void *)0x8c286a58;
    (&frame)->f4c = 1;
    (&frame)->f4e = 1;
    (&frame)->f50 = 0;
    (&frame)->f54 = 0;
    (&frame)->f58 = (int)(*(int *)0x8c4db9e8);
    (&frame)->f5c = 0x3314;
    call_8c377d84((void *)(*(S_g8c4dbb14 **)0x8c4dbb14), (Frame *)((&frame)));
}
