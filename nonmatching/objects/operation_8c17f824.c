/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17f824
 * function: operation_8c17f824
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 90 of 161 reference instruction lines
 * differing bytes: 73
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
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_L8c4dbaf8_4 S_L8c4dbaf8_4;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4dbaf8 S_g8c4dbaf8;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
typedef struct S_vv14 S_vv14;
typedef struct S_vv17 S_vv17;
struct Object {
    int tag;
    int f04;
    int f08;
    char unknownc[0x3204];
    int f3210;
};
struct S_vv11 {
    int f00;
    int f04;
};
struct S_vv14 {
    int f00;
    int f04;
};
struct S_L8c4dbaf8 {
    S_g8c4dbaf8 *f00;
    S_L8c4dbaf8_4 *f04;
};
struct S_vv17 {
    int f00;
    int f04;
};
struct S_c8c011ecc {
    int f00;
    int f04;
    int f08;
};
extern S_L8c4dbaf8 g_8c4dbaf8;
extern int next_random_state(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037eb8(void *, Object *, int);
extern void call_8c03809c(void *, Object *, int);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void call_8c037f20(void *);
extern void call_8c037fa4(void *, S_c8c011ecc *, S_c8c011ecc *, int);
extern void call_8c011ed8(S_c8c011ecc *);
extern void operation_8c17e104();
void operation_8c17f824(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v4;
    S_vv11 *v11;
    int v10;
    S_vv14 *v14;
    int v13;
    S_c8c011ecc *t2;
    int v16;
    int t1;
    S_c8c011ecc *t3;
    S_vv17 *v17;
    t1 = next_random_state((void *)((void *)0x8c4db9f8));
    o->f3210 = (int)(t1);
    o->tag = 0;
    v1 = (int)0;
    v2 = (int)-1;
    while (0x16fc > v1) {
        v3 = (int)0;
        v2 = (int)(v2 ^ *(unsigned char *)((char *)((char *)v1 + 0x0) + ((int)(o))));
        while (8 > v3) {
            if (((v2 & 1)) != 0) {
                v4 = (int)((unsigned int)v2 >> 1 ^ -0x12477ce0);
            } else {
                v4 = (int)((unsigned int)v2 >> 1);
            }
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v1 = (int)(v1 + 1);
    }
    o->tag = v2 ^ -1;
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)(o->f3210));
    call_8c037eb8((void *)((void *)0x8c4db9f8), o, 0x3210);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f00));
    call_8c03809c((void *)((void *)0x8c4db9f8), o, 0x3214);
    t2 = game_malloc_8c011ecc(0x3314);
    if (t2 != 0) {
        call_8c18e044((void *)(&t2->f04), operation_8c17e104, 0, 0x80, 0x64);
    }
    t3 = game_malloc_8c011ecc(0x3314);
    if (t3 != 0) {
        call_8c18e044((void *)(&t3->f04), operation_8c17e104, 0, 0x80, 0x64);
    }
    v10 = (int)0x662;
    v11 = (S_vv11 *)t2;
    do {
        v11->f00 = (int)(o->tag);
        v11->f04 = (int)(o->f04);
        v10 = (int)(v10 - 1);
        v11 = (S_vv11 *)((char *)v11 + 8);
    } while (v10 != 0);
    v11->f00 = (int)(o->f08);
    v13 = (int)0x662;
    v14 = (S_vv14 *)t3;
    do {
        v14->f00 = (int)(o->tag);
        v14->f04 = (int)(o->f04);
        v13 = (int)(v13 - 1);
        v14 = (S_vv14 *)((char *)v14 + 8);
    } while (v13 != 0);
    v14->f00 = (int)(o->f08);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f04));
    call_8c037f20((void *)((void *)0x8c4db9f8));
    call_8c037fa4((void *)((void *)0x8c4db9f8), t2, t3, 0x3214);
    v16 = (int)0x662;
    v17 = (S_vv17 *)o;
    do {
        v17->f00 = (int)(t3->f00);
        v17->f04 = (int)(t3->f04);
        v16 = (int)(v16 - 1);
        v17 = (S_vv17 *)((char *)v17 + 8);
    } while (v16 != 0);
    v17->f00 = (int)(t3->f08);
    call_8c011ed8(t3);
    call_8c011ed8(t2);
}
