typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c510fa0 S_g8c510fa0;
typedef struct S_g8c510fa0_42c S_g8c510fa0_42c;
typedef struct S_g8c510fa4 S_g8c510fa4;
struct S_c8c18de4c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c510fa0 {
    char unknown0[0x42c];
    S_g8c510fa0_42c *f42c;
};
struct S_g8c510fa0_42c {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c510fa4 {
    int f00;
};
extern S_g8c510fa0 *g_8c510fa0;
extern S_g8c510fa4 *g_8c510fa4;
extern char g_8c33e974[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c24b66c(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c33e934), 0, 0, 0);
    }
    g_8c510fa0 = (S_g8c510fa0 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c510fa4 = (S_g8c510fa4 *)t2;
    t2->f04 = (int)(g_8c510fa0->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c33e974 + 0x3f)));
    g_8c510fa4->f00 = (int)(t3);
}
