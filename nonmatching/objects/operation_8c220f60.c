/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c220f60
 * function: operation_8c220f60
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 6 of 37 reference instruction lines
 * differing bytes: 10
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
typedef struct S_g8c505c24 S_g8c505c24;
struct Frame {
    char unknown0[0x20];
};
extern S_g8c505c24 *g_8c505c24;
extern char g_8c336fc8[];
extern int query_fade_active_8c22eb9c(void);
extern void memset_8c12b880(Frame *, int, int);
extern void sprintf_8c12b048(Frame *, void *, ...);
extern int strlen_8c12b0cc(Frame *);
extern void call_8c18e720(void *, Frame *);
void operation_8c220f60(void)
{
    Frame frame;
    int t1;
    int t2;
    t1 = query_fade_active_8c22eb9c();
    memset_8c12b880((Frame *)((&frame)), 0, 0x20);
    sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c336fc8 + 0x36)), t1);
    t2 = strlen_8c12b0cc((Frame *)((&frame)));
    call_8c18e720(g_8c505c24, (Frame *)((&frame)));
    g_8c505c24 = (S_g8c505c24 *)((int)g_8c505c24 + t2);
}
