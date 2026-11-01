/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c100f60
 * function: operation_8c100f60
 * language: c
 * reference size: 308 bytes
 * compiled size: 308 bytes (+0.0%)
 * differing lines: 10 of 103 reference instruction lines
 * differing bytes: 18
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
typedef struct S_c8c104e9c S_c8c104e9c;
typedef struct S_c8c1a99c0_4 S_c8c1a99c0_4;
typedef struct Frame Frame;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_g8c4d53a0_4 S_g8c4d53a0_4;
struct Frame {
    char unknown0[0x20];
};
struct S_c8c104e9c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4d53a0 {
    char unknown0[0x4];
    S_g8c4d53a0_4 *f04;
};
extern S_g8c44be04 *g_8c44be04;
extern int g_8c44be08;
extern S_g8c4d53a0 *g_8c4d53a0;
extern int g_8c4d5948;
extern char g_8c4d594c;
extern int g_8c4d5950;
extern int g_8c4d59dc;
extern int g_8c4d59e0;
extern int g_8c4d59e4;
extern char g_8c30b0dc[];
extern int get_current_area_8c032b10(void);
extern int operation_8c1a99c0(int);
extern void operation_8c03ef04(Frame *, void *, void *);
extern S_c8c104e9c *load_resource_8c104e9c(Frame *);
extern void copy_resource_fields(void *, void *);
extern void call_8c369eb8(void *);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int load_pvm_file_tls_8c118528(void *);
extern void operation_8c103224(void *, S_g8c4d53a0 *);
void operation_8c100f60(void)
{
    Frame frame;
    int t2;
    char *v1;
    int v2;
    int t1;
    int v3;
    S_c8c104e9c *t3;
    int t4;
    int t5;
    t1 = get_current_area_8c032b10();
    v1 = (char *)g_8c44be08;
    t2 = operation_8c1a99c0(t1);
    v2 = (int)((int)(v1) << 2);
    v3 = (int)(v2 << 1);
    operation_8c03ef04((Frame *)((&frame)), (void *)(*(S_c8c1a99c0_4 **)((char *)((char *)t2 + 0x4) + (v3))), (void *)((g_8c30b0dc + 0x9e)));
    t3 = load_resource_8c104e9c((Frame *)((&frame)));
    g_8c4d53a0 = (S_g8c4d53a0 *)t3;
    if (t3 != 0 && t3->f04 != 0) {
        operation_8c03ef04((Frame *)((&frame)), (void *)(*(S_c8c1a99c0_4 **)((char *)((char *)t2 + 0x4) + (v3))), (void *)((g_8c30b0dc + 0xa4)));
        copy_resource_fields((void *)(&frame), (void *)(g_8c4d53a0->f04));
    }
    call_8c369eb8((void *)((g_8c30b0dc + 0xa6)));
    t4 = game_malloc_8c011ecc(0x440);
    if (t4 != 0) {
        call_8c03d610(t4, 5, (void *)((void *)0x8c30b084), 0, 0, 0);
    }
    g_8c4d59e0 = (int)(t4);
    t5 = load_pvm_file_tls_8c118528((void *)((g_8c30b0dc + 0x7f)));
    g_8c4d59e4 = (int)(t5);
    if (g_8c4d53a0 != 0) {
        operation_8c103224(g_8c44be04, g_8c4d53a0);
    }
    g_8c4d5948 = 0;
    g_8c4d594c = 0;
    g_8c4d5950 = 0;
    g_8c4d59dc = 1;
}
