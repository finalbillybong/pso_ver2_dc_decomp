/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17e580
 * function: operation_8c17e580
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 8 of 51 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_vv1 S_vv1;
struct S_g8c4db9e8 {
    char unknown0[0x3204];
    short f3204;
    char unknown3206[0x1];
    char f3207;
    int f3208;
};
struct S_vv1 {
    char unknown0[0x3206];
    char f3206;
};
struct Frame {
    char unknown0[0xc];
};
extern void operation_8c191504(int);
extern void memset_8c12b880(S_g8c4db9e8 *, int, int);
extern int operation_8c04c338(S_vv1 *);
extern int operation_8c087b9c(void);
extern void call_8c36d3ca(Frame *);
extern void call_8c36d4c0(Frame *, void *);
extern S_g8c4db9e8 *g_8c4db9e8;
void operation_8c17e580(void)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    operation_8c191504(0);
    memset_8c12b880(g_8c4db9e8, 0, 0x3314);
    g_8c4db9e8->f3204 = -0x1e;
    v1 = (S_vv1 *)g_8c4db9e8;
    v1->f3206 = -0xa;
    t1 = operation_8c04c338(v1);
    g_8c4db9e8->f3207 = t1;
    t2 = operation_8c087b9c();
    g_8c4db9e8->f3208 = (int)(t2);
    call_8c36d3ca((Frame *)((&frame)));
    call_8c36d4c0((Frame *)((&frame)), (void *)(((char *)g_8c4db9e8 + 0x320c)));
    *(int *)0x8c4dbb20 = 0;
}
