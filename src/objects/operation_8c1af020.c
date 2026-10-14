typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2300 S_g8c4e2300;
typedef struct S_g8c4e2300_42c S_g8c4e2300_42c;
typedef struct S_g8c4e2304 S_g8c4e2304;
struct S_g8c4e2304 {
    int f00;
    int f04;
};
struct S_g8c4e2300 {
    char unknown0[0x42c];
    S_g8c4e2300_42c *f42c;
};
struct S_g8c4e2300_42c {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c2e2ad8;
extern int g_8c44be20;
extern int g_8c4703c0;
extern S_g8c4e2300 *g_8c4e2300;
extern S_g8c4e2304 *g_8c4e2304;
extern char g_8c325e80[];
extern int call_8c18de4c(int);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c1af020(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c18de4c(8);
    g_8c4e2304 = (S_g8c4e2304 *)(int)(t1);
    if (g_8c2e2ad8 == 1) {
        if (g_8c4703c0 != 3 && g_8c44be20 != 1) {
            goto L_8c1af07a;
        }
        t2 = call_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c325e40), 0, 0, 0);
        }
        g_8c4e2300 = (S_g8c4e2300 *)(int)(t2);
        t3 = call_8c118528((void *)((g_8c325e80 + 0x63)));
        g_8c4e2304->f00 = (int)(t3);
    } else {
L_8c1af07a:;
        t4 = call_8c011ecc(0x440);
        if (t4 != 0) {
            call_8c03d610(t4, 1, (void *)((void *)0x8c325e20), 0, 0, 0);
        }
        g_8c4e2300 = (S_g8c4e2300 *)(int)(t4);
        t5 = call_8c118528((void *)((g_8c325e80 + 0x7a)));
        g_8c4e2304->f00 = (int)(t5);
    }
    g_8c4e2304->f04 = (int)(g_8c4e2300->f42c->f0c);
}
