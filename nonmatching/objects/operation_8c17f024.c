/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17f024
 * function: operation_8c17f024
 * language: c
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 46 of 209 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block5884 {
    int words[1471];
} Block5884;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_L8c4dbaf8_4 S_L8c4dbaf8_4;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4dbaf8 S_g8c4dbaf8;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_vv7 S_vv7;
typedef struct Block_p0_0 {
    int f00;
    char unknown4[0x16f4];
    int f16f8;
} Block_p0_0;
struct Object {
    Block_p0_0 tag;
};
struct S_vv7 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_vv13 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct S_c8c011ecc {
    Block5884 f00;
};
struct S_L8c4dbaf8 {
    S_g8c4dbaf8 *f00;
    S_L8c4dbaf8_4 *f04;
};
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int next_random_state(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(void *, Object *, int);
extern void call_8c03809c(void *, Object *, int);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void call_8c037f20(void *);
extern void call_8c037fa4(void *, S_c8c011ecc *, S_c8c011ecc *, int);
extern void call_8c011ed8(S_c8c011ecc *);
void operation_8c17f024(Object *o)
{
    S_c8c011ecc *t2;
    S_c8c011ecc *t3;
    int v1;
    unsigned int v2;
    int v3;
    int v6;
    S_vv7 *v7;
    int v12;
    int m1;
    int m2;
    S_vv13 *v13;
    int t1;
    t1 = next_random_state((void *)((void *)0x8c4db9f8));
    o->tag.f16f8 = (int)(t1);
    o->tag.f00 = 0;
    v1 = (int)0;
    v2 = 0xffffffff;
    while (0x16fc > v1) {
        v3 = (int)0;
        v2 = (v2 ^ *(unsigned char *)((char *)((char *)v1 + 0x0) + ((int)(o))));
        while (8 > v3) {
            if ((v2 & 1) != 0) {
                v2 = (v2 >> 1) ^ 0xedb88320;
            } else {
                v2 = v2 >> 1;
            }
            v3 = (int)(v3 + 1);
        }
        v1 = (int)(v1 + 1);
    }
    o->tag.f00 = v2 ^ -1;
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)(o->tag.f16f8));
    call_8c037eb8((void *)((void *)0x8c4db9f8), o, 0x16f8);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f00));
    call_8c03809c((void *)((void *)0x8c4db9f8), o, 0x16fc);
    t2 = game_malloc_8c011ecc(0x16fc);
    if (t2 != 0) {
        operation_8c1acbc0((void *)(((char *)t2 + 0x3c4)));
        operation_8c1acbc0((void *)(((char *)t2 + 0x3e8)));
        v6 = (int)0;
        m1 = -1;
        while (0x1e > v6) {
            v7 = (S_vv7 *)((char *)((char *)(int *)((char *)t2 + 0x4) + v6 * 0x1c) + 4);
            v7->f00 = 0;
            v7->f01 = m1;
            v7->f04 = 0;
            v7->f03 = 0;
            v7->f02 = 0;
            operation_1c7dd4((void *)((int)v7 + 8));
            v6 = (int)(v6 + 1);
        }
    }
    t3 = game_malloc_8c011ecc(0x16fc);
    if (t3 != 0) {
        operation_8c1acbc0((void *)(((char *)t3 + 0x3c4)));
        operation_8c1acbc0((void *)(((char *)t3 + 0x3e8)));
        v12 = (int)0;
        m2 = -1;
        while (0x1e > v12) {
            v13 = (S_vv13 *)((char *)((char *)(int *)((char *)t3 + 0x4) + v12 * 0x1c) + 4);
            v13->f00 = 0;
            v13->f01 = m2;
            v13->f04 = 0;
            v13->f03 = 0;
            v13->f02 = 0;
            operation_1c7dd4((void *)((int)v13 + 8));
            v12 = (int)(v12 + 1);
        }
    }
    *(Block5884 *)&t2->f00 = *(Block5884 *)&o->tag;
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f04));
    call_8c037f20((void *)((void *)0x8c4db9f8));
    call_8c037fa4((void *)((void *)0x8c4db9f8), t2, t3, 0x16fc);
    *(Block5884 *)&o->tag = *(Block5884 *)&t3->f00;
    call_8c011ed8(t3);
    call_8c011ed8(t2);
}
