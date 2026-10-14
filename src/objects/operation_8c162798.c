typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db220 S_g8c4db220;
typedef struct S_g8c4db220_42c S_g8c4db220_42c;
typedef struct S_g8c4db224 S_g8c4db224;
struct S_g8c4db224 {
    int f00;
    int f04;
};
struct S_g8c4db220 {
    char unknown0[0x42c];
    S_g8c4db220_42c *f42c;
};
struct S_g8c4db220_42c {
    char unknown0[0xc];
    int f0c;
};
extern S_g8c4db220 *g_8c4db220;
extern S_g8c4db224 *g_8c4db224;
extern char g_8c316fe8[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c162798(void)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c316fd4), 0, 0, 0);
    }
    g_8c4db220 = (S_g8c4db220 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c4db224 = (S_g8c4db224 *)(int)(t2);
    t3 = call_8c118528((void *)((g_8c316fe8 + 0x41)));
    g_8c4db224->f00 = (int)(t3);
    g_8c4db224->f04 = (int)(g_8c4db220->f42c->f0c);
}
