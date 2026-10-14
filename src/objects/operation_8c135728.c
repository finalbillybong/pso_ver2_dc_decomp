typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c4d9b00 S_g8c4d9b00;
typedef struct S_g8c4d9b00_42c S_g8c4d9b00_42c;
typedef struct S_g8c4d9b04 S_g8c4d9b04;
struct S_c8c18de4c {
    int f00;
};
struct S_g8c4d9b00 {
    char unknown0[0x42c];
    S_g8c4d9b00_42c *f42c;
};
struct S_g8c4d9b00_42c {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c4d9b04 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4d9b00 *g_8c4d9b00;
extern S_g8c4d9b04 *g_8c4d9b04;
extern char g_8c312d70[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c135728(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c312d30), 0, 0, 0);
    }
    g_8c4d9b00 = (S_g8c4d9b00 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c4d9b04 = (S_g8c4d9b04 *)t2;
    t2->f00 = (int)(g_8c4d9b00->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c312d70 + 0x4e)));
    g_8c4d9b04->f04 = (int)(t3);
}
