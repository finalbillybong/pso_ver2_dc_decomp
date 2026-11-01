/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24ae04
 * function: load_assets_fs_obj_ex_doa01_8c24ae04
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 18 of 35 reference instruction lines
 * differing bytes: 19
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
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_c8c011ecc_42c_8_2c S_c8c011ecc_42c_8_2c;
typedef struct S_c8c011ecc_42c_8_2c_30 S_c8c011ecc_42c_8_2c_30;
typedef struct S_c8c011ecc_42c_8_2c_30_2c S_c8c011ecc_42c_8_2c_30_2c;
typedef struct S_c8c011ecc_42c_8_2c_30_2c_2c S_c8c011ecc_42c_8_2c_30_2c_2c;
typedef struct S_vv3 S_vv3;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    S_c8c011ecc_42c_8 *f08;
};
struct S_c8c011ecc_42c_8 {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c *f2c;
};
struct S_c8c011ecc_42c_8_2c {
    char unknown0[0x30];
    S_c8c011ecc_42c_8_2c_30 *f30;
};
struct S_c8c011ecc_42c_8_2c_30 {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c_30_2c *f2c;
};
struct S_c8c011ecc_42c_8_2c_30_2c {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c_30_2c_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x30];
    int f30;
};
extern S_c8c011ecc *g_8c510f80;
extern S_vv3 *g_8c510f84;
extern int g_8c510f88;
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void load_assets_fs_obj_ex_doa01_8c24ae04(void)
{
    S_vv3 *v3;
    S_c8c011ecc *t1;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c33b3a8), 0, 0, 0);
    }
    g_8c510f80 = t1;
    v3 = (S_vv3 *)t1->f42c->f08->f2c->f30->f2c->f2c;
    g_8c510f84 = v3;
    g_8c510f88 = (int)(v3->f30);
}
