typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9ae0 S_g8c4d9ae0;
typedef struct S_g8c4d9ae0_42c S_g8c4d9ae0_42c;
typedef struct S_g8c4d9ae4 S_g8c4d9ae4;
struct S_g8c4d9ae4 {
    int f00;
    int f04;
};
struct S_g8c4d9ae0 {
    char unknown0[0x42c];
    S_g8c4d9ae0_42c *f42c;
};
struct S_g8c4d9ae0_42c {
    char unknown0[0xc];
    int f0c;
};
extern S_g8c4d9ae0 *g_8c4d9ae0;
extern S_g8c4d9ae4 *g_8c4d9ae4;
extern char g_8c312cc8[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c1350a8(void)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c312cb4), 0, 0, 0);
    }
    g_8c4d9ae0 = (S_g8c4d9ae0 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c4d9ae4 = (S_g8c4d9ae4 *)(int)(t2);
    t3 = call_8c118528((void *)((g_8c312cc8 + 0x3e)));
    g_8c4d9ae4->f00 = (int)(t3);
    g_8c4d9ae4->f04 = (int)(g_8c4d9ae0->f42c->f0c);
}
