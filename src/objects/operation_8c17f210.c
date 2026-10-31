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
typedef struct S_vv11 S_vv11;
typedef struct S_vv3 S_vv3;
typedef struct Block_p0_0 {
    char unknown0[0x16f8];
    int f16f8;
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
    Block5884 f00;
};
struct Object {
    Block_p0_0 tag;
};
struct S_L8c4dbaf8 {
    S_g8c4dbaf8 *f00;
    S_L8c4dbaf8_4 *f04;
};
extern S_L8c4dbaf8 g_8c4dbaf8;
extern S_c8c011ecc *call_8c011ecc(int);
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037f20(void *);
extern void call_8c038020(void *, S_c8c011ecc *, S_c8c011ecc *, int);
extern void call_8c011ed8(S_c8c011ecc *);
extern void call_8c03809c(void *, Object *, int);
extern void call_8c037eb8(void *, Object *, int);
static inline void init_block(S_c8c011ecc *p)
{
    int m;
    int i;
    S_vv3 *e;
    operation_8c1acbc0((void *)(((char *)p + 0x3c4)));
    operation_8c1acbc0((void *)(((char *)p + 0x3e8)));
    for (i = 0, m = -1; i < 0x1e; i++) {
        e = (S_vv3 *)((char *)((char *)(int *)((char *)p + 0x4) + i * 0x1c) + 4);
        e->f00 = 0;
        e->f01 = m;
        e->f04 = 0;
        e->f03 = 0;
        e->f02 = 0;
        operation_1c7dd4((void *)((int)e + 8));
    }
}
void operation_8c17f210(Object *o)
{
    S_c8c011ecc *t1;
    S_c8c011ecc *t2;
    t1 = call_8c011ecc(0x16fc);
    if (t1 != 0) {
        init_block(t1);
    }
    t2 = call_8c011ecc(0x16fc);
    if (t2 != 0) {
        init_block(t2);
    }
    *(Block5884 *)&t1->f00 = *(Block5884 *)&o->tag;
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f04));
    call_8c037f20((void *)((void *)0x8c4db9f8));
    call_8c038020((void *)((void *)0x8c4db9f8), t1, t2, 0x16fc);
    *(Block5884 *)&o->tag = *(Block5884 *)&t2->f00;
    call_8c011ed8(t2);
    call_8c011ed8(t1);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)((&g_8c4dbaf8)->f00));
    call_8c03809c((void *)((void *)0x8c4db9f8), o, 0x16fc);
    seed_random_state((void *)((void *)0x8c4db9f8), (unsigned int)(o->tag.f16f8));
    call_8c037eb8((void *)((void *)0x8c4db9f8), o, 0x16f8);
}
