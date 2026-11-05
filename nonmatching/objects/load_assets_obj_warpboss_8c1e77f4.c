/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e77f4
 * function: load_assets_obj_warpboss_8c1e77f4
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 78 of 131 reference instruction lines
 * differing bytes: 61
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_430 S_c8c011ecc_430;
typedef struct S_g8c469d60 S_g8c469d60;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_42c S_vv7_42c;
typedef struct S_vv7_430 S_vv7_430;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
    S_c8c011ecc_430 *f430;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
    int f1c;
    char unknown20[0x8];
    int f28;
    int f2c;
};
struct S_c8c011ecc_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct S_vv7 {
    char unknown0[0x42c];
    S_vv7_42c *f42c;
    S_vv7_430 *f430;
};
struct S_vv7_42c {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_vv7_430 {
    char unknown0[0xc];
    int f0c;
};
extern int get_current_area_8c032b10(void);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void load_assets_obj_warpboss_8c1e77f4(void)
{
    int v3;
    int v8;
    S_vv7 *v7;
    int t1;
    S_c8c011ecc *t2;
    S_c8c011ecc *t3;
    t1 = get_current_area_8c032b10();
    if (t1 >= 8 && 0xa >= t1) {
        t2 = game_malloc_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c32c194), 0, 0, 0);
        }
        *(S_c8c011ecc **)0x8c4e3140 = t2;
        v3 = (int)t2->f42c->f28;
        *(int *)0x8c4e3144 = (int)(v3);
        *(int *)0x8c4e3148 = (int)(t2->f42c->f08);
        *(int *)0x8c4e3150 = (int)(t2->f430->f04);
        *(int *)0x8c4e314c = (int)(t2->f42c->f18);
        *(int *)0x8c4e3154 = (int)(t2->f430->f0c);
        *(int *)0x8c4e3158 = (int)(t2->f42c->f2c);
        *(int *)0x8c4e315c = (int)(t2->f42c->f1c);
        return;
    }
    t3 = game_malloc_8c011ecc(0x440);
    if (t3 != 0) {
        call_8c03d610(t3, 1, (void *)((void *)0x8c32c168), 0, 0, 0);
    }
    v7 = (S_vv7 *)*(S_g8c469d60 **)0x8c469d60;
    *(S_c8c011ecc **)0x8c4e3140 = t3;
    v3 = v7->f42c->f28;
    v8 = *(int *)0x8c469d64;
    *(int *)0x8c4e3144 = (int)(v3);
    *(int *)0x8c4e3148 = (int)(t3->f42c->f08);
    *(int *)0x8c4e3150 = (int)(t3->f430->f04);
    *(int *)0x8c4e314c = (int)(v7->f42c->f38);
    *(int *)0x8c4e3154 = (int)(v7->f430->f0c);
    *(int *)0x8c4e3158 = (int)(v8);
    *(int *)0x8c4e315c = (int)(t3->f42c->f0c);
}
