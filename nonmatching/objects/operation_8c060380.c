/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060380
 * function: operation_8c060380
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 12 of 73 reference instruction lines
 * differing bytes: 24
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
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct Frame {
    S_frame_0 *f00;
};
extern char g_8c467a42;
extern int g_8c468800;
extern int get_current_area_8c032b10(void);
extern void call_8c34756c(Frame *);
extern void upload_8c347ebc(void *, int, int, int, int);
extern void lookup_apply_8c3465a8(void *, int, int);
extern void close_block_8c347630(void *);
int operation_8c060380(int a0, int a1, int a2, int a3)
{
    Frame frame;
    int t1;
    g_8c467a42 = 0;
    g_8c468800 = 0;
    t1 = get_current_area_8c032b10();
    if (t1 != 0) {
        return 0;
    }
    (&frame)->f00 = (S_frame_0 *)0;
    call_8c34756c((Frame *)((&frame)));
    upload_8c347ebc((void *)((&frame)->f00), a0, a1, -1, 0);
    lookup_apply_8c3465a8((void *)((&frame)->f00), 0x42504d53, 0);
    close_block_8c347630((void *)((&frame)->f00));
    call_8c34756c((Frame *)((&frame)));
    upload_8c347ebc((void *)((&frame)->f00), a2, a3, -1, 0);
    lookup_apply_8c3465a8((void *)((&frame)->f00), 0x42534d53, 0);
    close_block_8c347630((void *)((&frame)->f00));
    g_8c467a42 = 1;
    return 1;
}
