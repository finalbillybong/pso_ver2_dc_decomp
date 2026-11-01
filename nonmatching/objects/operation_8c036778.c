/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c036778
 * function: operation_8c036778
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 8 of 58 reference instruction lines
 * differing bytes: 14
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
typedef struct S_c8c1e77dc S_c8c1e77dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct S_c8c1e77dc {
    char f00;
};
struct S_vv1 {
    char f00;
};
struct S_vv9 {
    char f00;
};
struct S_vv8 {
    char f00;
};
extern char g_8c2ed2b4[];
extern S_c8c1e77dc *get_render_state_8c1e77dc(void);
extern void memset_8c12b880(S_vv1 *, int, int);
extern int call_8c12b510(int);
extern void strcat(S_vv8 *, void *);
extern void operation_8c011efc(void *);
void *operation_8c036778(void)
{
    int v3;
    char v2;
    S_vv9 *v9;
    S_c8c1e77dc *t3;
    S_vv1 *v1;
    S_vv8 *v8;
    int t1;
    int t2;
    int v7;
    v1 = (S_vv1 *)(void *)0x8c462128;
    t3 = get_render_state_8c1e77dc();
    memset_8c12b880(v1, 0, 0x40);
    v2 = (char)t3->f00;
    v3 = (int)((char *)t3 + 0x1);
    if (v2 >= 0x30 && 0x39 >= v2) {
        v2 += 0x17;
    }
    t1 = call_8c12b510(v2);
    v1->f00 = t1;
    v7 = (int)1;
    v8 = (S_vv8 *)((int)v1 + 1);
    v9 = (S_vv9 *)v3;
    while (8 > v7) {
        t2 = call_8c12b510((int)(v9->f00));
        v8->f00 = t2;
        v9 = (S_vv9 *)((char *)v9 + 1);
        v7 = (int)(v7 + 1);
        v8 = (S_vv8 *)((char *)v8 + 1);
    }
    strcat(v8, (void *)((g_8c2ed2b4 + 0xfe)));
    operation_8c011efc((void *)((void *)0x8c462128));
    return (void *)0x8c462128;
}
