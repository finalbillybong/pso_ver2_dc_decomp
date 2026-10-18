typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c4db140 S_g8c4db140;
typedef struct S_g8c4db140_42c S_g8c4db140_42c;
typedef struct S_g8c4db144 S_g8c4db144;
struct S_c8c18de4c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4db140 {
    char unknown0[0x42c];
    S_g8c4db140_42c *f42c;
};
struct S_g8c4db140_42c {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c4db144 {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
};
extern S_g8c4db140 *g_8c4db140;
extern S_g8c4db144 *g_8c4db144;
extern int g_8c4db148;
extern int g_8c4db14c;
extern char g_8c3166dc[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c15cd30(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c3166c8), 0, 0, 0);
    }
    g_8c4db140 = (S_g8c4db140 *)(int)(t1);
    t2 = call_8c18de4c(0x10);
    g_8c4db144 = (S_g8c4db144 *)t2;
    t2->f04 = (int)(g_8c4db140->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c3166dc + 0x56)));
    g_8c4db144->f00 = (int)(t3);
    t4 = call_8c118528((void *)((g_8c3166dc + 0x6d)));
    g_8c4db144->f0c = (int)(t4);
    t5 = call_8c118528((void *)((g_8c3166dc + 0x83)));
    g_8c4db144->f08 = (int)(t5);
    g_8c4db148 = 0;
    g_8c4db14c = 0;
    *(int *)0x8c4db150 = 0;
    *(int *)0x8c4db154 = 0;
}
