/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c129aac
 * function: load_assets_fe_obj_turiten_moto_8c129aac
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 8 of 66 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c4d9980 S_g8c4d9980;
typedef struct S_g8c4d9980_42c S_g8c4d9980_42c;
typedef struct S_g8c4d9984 S_g8c4d9984;
struct S_g8c4d9984 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4d9980 {
    char unknown0[0x42c];
    S_g8c4d9980_42c *f42c;
};
struct S_g8c4d9980_42c {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0xc];
    int f28;
};
extern S_g8c4d9980 *g_8c4d9980;
extern S_g8c4d9984 *g_8c4d9984;
extern int g_8c4d9988;
extern int g_8c4d998c;
extern char g_8c31250c[];
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int operator_new_8c18de4c(int);
extern int load_pvm_file_tls_8c118528(void *);
void load_assets_fe_obj_turiten_moto_8c129aac(void)
{
    int t1;
    int v3;
    int t2;
    int t4;
    int t3;
    int pm5;
    g_8c4d9980 = (S_g8c4d9980 *)0;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c3124c4), 0, 0, 0);
    }
    g_8c4d9984 = (S_g8c4d9984 *)0;
    g_8c4d9980 = (S_g8c4d9980 *)(int)(t1);
    t2 = operator_new_8c18de4c(0xc);
    g_8c4d9984 = (S_g8c4d9984 *)(t2);
    t3 = load_pvm_file_tls_8c118528((void *)((0x94 + g_8c31250c)));
    g_8c4d9984->f00 = (t3);
    t4 = load_pvm_file_tls_8c118528((void *)((0xad + g_8c31250c)));
    g_8c4d9984->f04 = (int)(t4);
    pm5 = g_8c4d9980->f42c->f0c;
    g_8c4d9984->f08 = (pm5);
    v3 = (int)g_8c4d9980->f42c->f18;
    g_8c4d9988 = (v3);
    g_8c4d998c = (int)(g_8c4d9980->f42c->f28);
}
