/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22cc78
 * function: operation_8c22cc78
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 24 of 75 reference instruction lines
 * differing bytes: 26
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_30 S_c8c122700_30;
typedef struct S_c8c122700_30_0 S_c8c122700_30_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv5 S_vv5;
struct S_c8c122700 {
    char unknown0[0x30];
    S_c8c122700_30 *f30;
    char unknown34[0xc];
    float f40;
    float f44;
    char unknown48[0x21];
    unsigned char f69;
};
struct S_c8c122700_30 {
    S_c8c122700_30_0 *f00;
};
struct S_c8c122700_30_0 {
    char unknown0[0x8];
    float f08;
};
struct S_vv5 {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TWindowLoadItemTexture_ctor_8c22ca64(void *, void *, void *);
extern void set_normalized_rectangle(void *, float, float, float, float);
S_c8c122700 *operation_8c22cc78(int a0, int a1)
{
    S_vv5 *v5;
    S_c8c122700 *t1;
    float pm2;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x74);
    if (t1 != 0) {
        TWindowLoadItemTexture_ctor_8c22ca64((void *)t1, (void *)a0, (void *)a1);
    }
    t1->f69 |= 1;
    v5 = (S_vv5 *)t1->f30->f00;
    t1->f30->f00->f08 = t1->f40 * 0.5f - 32.0f - 9.0f;
    pm2 = t1->f44 * 0.5f - 32.0f - 13.0f;
    v5->f0c = pm2;
    v5->f10 = 64.0f;
    v5->f14 = 64.0f;
    set_normalized_rectangle((void *)v5, 0.0f, 0.0f, 1.0f, 1.0f);
    return t1;
}
