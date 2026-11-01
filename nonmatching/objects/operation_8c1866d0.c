/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1866d0
 * function: operation_8c1866d0
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 62 of 157 reference instruction lines
 * differing bytes: 56
 * provenance: generator draft (mode extern)
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
typedef struct S_g8c4dbb98 S_g8c4dbb98;
typedef struct S_vv6 S_vv6;
struct Frame {
    char unknown0[0x4];
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    short f08;
};
extern short g_8c41cb82;
extern short g_8c41cb84;
extern short g_8c46ec4c;
extern int g_8c46ec50;
extern int g_8c46ec54;
extern int g_8c46ed14;
extern int g_8c46ed18;
extern int g_8c4dbb80;
extern int g_8c4dbb84;
extern int g_8c4dbb88;
extern int g_8c4dbb8c;
extern int g_8c4dbb90;
extern int g_8c4dbb94;
extern S_g8c4dbb98 *g_8c4dbb98;
extern int g_8c4dbb9c;
extern char g_8c319a80[];
extern void call_8c369eb8(void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void load_record_block(int, void *);
extern int operation_8c18687c(int);
extern void memset_8c12b880(Frame *, int, int);
extern int call_8c09e920(int, S_vv6 *, int);
extern void load_record_block_8c186954(int, void *);
extern void operation_8c1865f4(int);
extern void game_free_8c011ec0(void *);
void operation_8c1866d0(int a0, int a1)
{
    Frame frame;
    char *v1;
    int v2;
    S_vv6 *v6;
    int v4;
    int v7;
    int v8;
    int v5;
    int v9;
    int t1;
    int t2;
    g_8c4dbb80 = (int)(g_8c46ec50);
    g_8c4dbb94 = g_8c4dbb90 = g_8c4dbb8c = 0;
    v1 = (char *)g_8c46ec54;
    g_8c4dbb84 = (int)(v1);
    g_8c4dbb88 = 0;
    call_8c369eb8((void *)((void *)g_8c319a80));
    g_8c46ec4c = 0;
    t1 = game_malloc_buffer_8c011e9c(0x8000);
    g_8c4dbb98 = (S_g8c4dbb98 *)(int)(t1);
    if (t1 != 0) {
        g_8c4dbb9c = 0x8000;
        v2 = (int)1;
    } else {
        g_8c4dbb98 = (S_g8c4dbb98 *)0;
        v2 = (int)0;
    }
    v5 = (int)0;
    if (v2 != 0) {
        load_record_block(a0, (void *)a1);
        v6 = (S_vv6 *)operation_8c18687c(a0);
        v4 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
        memset_8c12b880((Frame *)((&frame)), 0, 4);
        v5 = (int)0x4000;
        v7 = (int)0;
        while (v4 > v7) {
            v8 = (int)g_8c4dbb90;
            g_8c4dbb90 = v8 + 1;
            v6->f08 = v8 + v5;
            v9 = (int)g_8c4dbb88;
            g_8c4dbb88 = v9 + 1;
            v6->f04 = v9;
            t2 = call_8c09e920(a0, v6, 0);
            if (t2 != 0) {
                g_8c4dbb88 += t2;
                g_8c4dbb90 += t2;
            }
            v7 = (int)(v7 + 1);
            v6 = (S_vv6 *)((char *)v6 + 68);
        }
        g_8c41cb84 += g_8c4dbb90;
        g_8c46ed14 = (int)(g_8c4dbb88);
        load_record_block_8c186954(a0, (void *)a1);
        operation_8c1865f4(a0);
        g_8c46ed18 = (int)(g_8c4dbb8c);
        g_8c41cb82 += g_8c4dbb94;
        if (g_8c4dbb98 != 0) {
            game_free_8c011ec0(g_8c4dbb98);
            g_8c4dbb98 = (S_g8c4dbb98 *)0;
            g_8c4dbb9c = 0;
        }
        g_8c46ec4c |= 1;
    }
    call_8c369eb8((void *)((g_8c319a80 + 0x40)));
}
