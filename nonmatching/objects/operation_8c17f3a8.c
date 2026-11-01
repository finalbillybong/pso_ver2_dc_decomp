/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17f3a8
 * function: operation_8c17f3a8
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 48 of 168 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block5456 {
    int words[1364];
} Block5456;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_L8c4dbaf8_4 S_L8c4dbaf8_4;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4dbaf8 S_g8c4dbaf8;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
typedef struct S_vv3 S_vv3;
typedef struct Block_p0_0 {
    char unknown0[0x154c];
    int f154c;
} Block_p0_0;
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv11 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_c8c011ecc {
    Block5456 f00;
};
struct Object {
    Block_p0_0 tag;
};
struct S_L8c4dbaf8 {
    S_g8c4dbaf8 *f00;
    S_L8c4dbaf8_4 *f04;
};
extern S_L8c4dbaf8 g_8c4dbaf8;
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037f20(void *);
extern void call_8c038020(void *, S_c8c011ecc *, S_c8c011ecc *, int);
extern void call_8c011ed8(S_c8c011ecc *);
extern void call_8c03809c(void *, Object *, int);
extern void call_8c037eb8(void *, Object *, int);
static inline S_c8c011ecc *create_state(void)
{
    S_c8c011ecc *p;
    S_vv3 *v3;
    int i;
    int k;
    p = game_malloc_8c011ecc(0x1550);
    if (p != 0) {
        operation_8c1acbc0((void *)(((char *)p + 0x3c4)));
        operation_8c1acbc0((void *)(((char *)p + 0x3e8)));
        for (i = 0, k = -1; i < 0x1e; i++) {
            v3 = (S_vv3 *)((char *)((char *)(int *)((char *)p + 0x4) + i * 0x1c) + 4);
            v3->f00 = 0;
            v3->f01 = k;
            v3->f04 = 0;
            v3->f03 = 0;
            v3->f02 = 0;
            operation_1c7dd4((void *)((int)v3 + 8));
        }
    }
    return p;
}
void operation_8c17f3a8(Object *o)
{
    S_c8c011ecc *t1;
    S_c8c011ecc *t2;
    t1 = create_state();
    t2 = create_state();
    *(Block5456 *)&t1->f00 = *(Block5456 *)&o->tag;
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f04));
    call_8c037f20((void *)((void *)0x8c4db9f8));
    call_8c038020((void *)((void *)0x8c4db9f8), t1, t2, 0x1550);
    *(Block5456 *)&o->tag = *(Block5456 *)&t2->f00;
    call_8c011ed8(t2);
    call_8c011ed8(t1);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f00));
    call_8c03809c((void *)((void *)0x8c4db9f8), o, 0x1550);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)(o->tag.f154c));
    call_8c037eb8((void *)((void *)0x8c4db9f8), o, 0x154c);
}
