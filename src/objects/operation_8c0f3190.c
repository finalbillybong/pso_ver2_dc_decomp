typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c4705e0 S_g8c4705e0;
typedef struct S_g8c4705e0_42c S_g8c4705e0_42c;
typedef struct S_g8c4705e4 S_g8c4705e4;
struct S_c8c18de4c {
    int f00;
};
struct S_g8c4705e0 {
    char unknown0[0x42c];
    S_g8c4705e0_42c *f42c;
};
struct S_g8c4705e0_42c {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c4705e4 {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
};
extern S_g8c4705e0 *g_8c4705e0;
extern S_g8c4705e4 *g_8c4705e4;
extern char g_8c309d8c[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c0f3190(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c309c18), 0, 0, 0);
    }
    g_8c4705e0 = (S_g8c4705e0 *)(int)(t1);
    t2 = call_8c18de4c(0x10);
    g_8c4705e4 = (S_g8c4705e4 *)t2;
    t2->f00 = (int)(g_8c4705e0->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c309d8c + 0x55)));
    g_8c4705e4->f04 = (int)(t3);
    t4 = call_8c118528((void *)((g_8c309d8c + 0x6b)));
    g_8c4705e4->f08 = (int)(t4);
    t5 = call_8c118528((void *)((g_8c309d8c + 0x81)));
    g_8c4705e4->f0c = (int)(t5);
}
