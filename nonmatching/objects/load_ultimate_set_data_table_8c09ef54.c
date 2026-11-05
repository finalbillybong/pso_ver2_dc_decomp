/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ef54
 * function: load_ultimate_set_data_table_8c09ef54
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 8 of 84 reference instruction lines
 * differing bytes: 5
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed68 S_g8c46ed68;
typedef struct S_g8c46ed6c S_g8c46ed6c;
typedef struct S_vv8 S_vv8;
struct S_vv8 {
    int f00;
};
extern int g_8c46ed60;
extern int g_8c46ed64;
extern S_g8c46ed68 *g_8c46ed68;
extern S_g8c46ed6c *g_8c46ed6c;
extern int g_8c4703c0;
extern char g_8c302018[];
extern int game_malloc_buffer_8c011e9c(int);
extern int get_game_mode_8c01c25c(void);
extern int operation_8c105380(void *, void *);
void load_ultimate_set_data_table_8c09ef54(void)
{
    S_vv8 *v8;
    char *v7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    g_8c46ed64 = 0;
    g_8c46ed68 = (S_g8c46ed68 *)0;
    t1 = game_malloc_buffer_8c011e9c(0x1800);
    g_8c46ed6c = (S_g8c46ed6c *)(int)(t1);
    t2 = get_game_mode_8c01c25c();
    switch (t2) {
    case 16:
        if (g_8c4703c0 == 3) {
            t3 = operation_8c105380((void *)((void *)g_8c302018), g_8c46ed6c);
            g_8c46ed68 = (S_g8c46ed68 *)(int)(t3);
            goto L_8c09efe4;
        }
        t4 = operation_8c105380((void *)((g_8c302018 + 0x17)), g_8c46ed6c);
        g_8c46ed68 = (S_g8c46ed68 *)(int)(t4);
        break;
    case 15:
        if (g_8c4703c0 == 3) {
            t5 = operation_8c105380((void *)((g_8c302018 + 0x2a)), g_8c46ed6c);
            g_8c46ed68 = (S_g8c46ed68 *)(int)(t5);
            goto L_8c09efe4;
        }
        t6 = operation_8c105380((void *)((g_8c302018 + 0x42)), g_8c46ed6c);
        g_8c46ed68 = (S_g8c46ed68 *)(int)(t6);
        break;
    default:
        t7 = operation_8c105380((void *)((void *)g_8c302018), g_8c46ed6c);
        g_8c46ed68 = (S_g8c46ed68 *)(int)(t7);
        break;
    }
L_8c09efe4:;
    v8 = (S_vv8 *)g_8c46ed68;
    if (v8 != 0) {
        v7 = (char *)v8->f00;
        g_8c46ed64 = (int)(v7);
        g_8c46ed60 = (int)(v7);
    }
}
