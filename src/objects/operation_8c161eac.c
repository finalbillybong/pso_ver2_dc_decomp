typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db200 S_g8c4db200;
typedef struct S_g8c4db200_42c S_g8c4db200_42c;
typedef struct S_g8c4db204 S_g8c4db204;
struct S_g8c4db204 {
    int f00;
    int f04;
};
struct S_g8c4db200 {
    char unknown0[0x42c];
    S_g8c4db200_42c *f42c;
};
struct S_g8c4db200_42c {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c2e2ad8;
extern int g_8c44be20;
extern int g_8c4703c0;
extern S_g8c4db200 *g_8c4db200;
extern S_g8c4db204 *g_8c4db204;
extern char g_8c316f38[];
extern int call_8c18de4c(int);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c161eac(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c18de4c(8);
    g_8c4db204 = (S_g8c4db204 *)(int)(t1);
    if (g_8c2e2ad8 == 1) {
        if (g_8c4703c0 != 3 && g_8c44be20 != 1) {
            goto L_8c161f06;
        }
        t2 = call_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c316ef8), 0, 0, 0);
        }
        g_8c4db200 = (S_g8c4db200 *)(int)(t2);
        t3 = call_8c118528((void *)((g_8c316f38 + 0x5f)));
        g_8c4db204->f00 = (int)(t3);
    } else {
L_8c161f06:;
        t4 = call_8c011ecc(0x440);
        if (t4 != 0) {
            call_8c03d610(t4, 1, (void *)((void *)0x8c316ed8), 0, 0, 0);
        }
        g_8c4db200 = (S_g8c4db200 *)(int)(t4);
        t5 = call_8c118528((void *)((g_8c316f38 + 0x75)));
        g_8c4db204->f00 = (int)(t5);
    }
    g_8c4db204->f04 = (int)(g_8c4db200->f42c->f0c);
}
