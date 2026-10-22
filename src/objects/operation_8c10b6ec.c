typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_g8c4d7cc0 S_g8c4d7cc0;
typedef struct S_g8c4d7cc0_42c S_g8c4d7cc0_42c;
typedef struct S_g8c4d7cc4 S_g8c4d7cc4;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d7cc4 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4d7cc0 {
    char unknown0[0x42c];
    S_g8c4d7cc0_42c *f42c;
};
struct S_g8c4d7cc0_42c {
    char unknown0[0xc];
    int f0c;
    char unknown10[0xc];
    int f1c;
};
extern S_g8c4d7cc0 *g_8c4d7cc0;
extern S_g8c4d7cc4 *g_8c4d7cc4;
extern int g_8c4d7cc8;
extern char g_8c30be04[];
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern int call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c10b6ec(void)
{
    int v3;
    S_c8c011ecc *t1;
    int t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c30bdc4), 0, 0, 0);
    }
    g_8c4d7cc0 = (S_g8c4d7cc0 *)t1;
    v3 = (int)t1->f42c->f08;
    g_8c4d7cc8 = (int)(v3);
    t2 = call_8c18de4c(0xc);
    g_8c4d7cc4 = (S_g8c4d7cc4 *)(int)(t2);
    t3 = call_8c118528((void *)((g_8c30be04 + 0x6d)));
    g_8c4d7cc4->f00 = (int)(t3);
    g_8c4d7cc4->f04 = (int)(g_8c4d7cc0->f42c->f1c);
    g_8c4d7cc4->f08 = (int)(g_8c4d7cc0->f42c->f0c);
}
