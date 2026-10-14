typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c18de4c S_c8c18de4c;
typedef struct S_g8c4db160 S_g8c4db160;
typedef struct S_g8c4db160_42c S_g8c4db160_42c;
typedef struct S_g8c4db164 S_g8c4db164;
struct S_c8c18de4c {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4db160 {
    char unknown0[0x42c];
    S_g8c4db160_42c *f42c;
};
struct S_g8c4db160_42c {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c4db164 {
    int f00;
};
extern S_g8c4db160 *g_8c4db160;
extern S_g8c4db164 *g_8c4db164;
extern char g_8c316798[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern S_c8c18de4c *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c15d384(void)
{
    int t1;
    S_c8c18de4c *t2;
    int t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c316784), 0, 0, 0);
    }
    g_8c4db160 = (S_g8c4db160 *)(int)(t1);
    t2 = call_8c18de4c(8);
    g_8c4db164 = (S_g8c4db164 *)t2;
    t2->f04 = (int)(g_8c4db160->f42c->f0c);
    t3 = call_8c118528((void *)((g_8c316798 + 0x38)));
    g_8c4db164->f00 = (int)(t3);
}
