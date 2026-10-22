typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_18 S_c8c011ecc_42c_18;
typedef struct S_c8c011ecc_42c_18_2c S_c8c011ecc_42c_18_2c;
typedef struct S_c8c011ecc_42c_18_2c_4 S_c8c011ecc_42c_18_2c_4;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_c8c011ecc_42c_8_4 S_c8c011ecc_42c_8_4;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    S_c8c011ecc_42c_8 *f08;
    int f0c;
    char unknown10[0x8];
    S_c8c011ecc_42c_18 *f18;
    char unknown1c[0x10];
    int f2c;
};
struct S_c8c011ecc_42c_18 {
    char unknown0[0x2c];
    S_c8c011ecc_42c_18_2c *f2c;
};
struct S_c8c011ecc_42c_18_2c {
    char unknown0[0x4];
    S_c8c011ecc_42c_18_2c_4 *f04;
};
struct S_c8c011ecc_42c_18_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c011ecc_42c_8 {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_4 *f04;
};
struct S_c8c011ecc_42c_8_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c469a8c;
extern S_c8c011ecc *g_8c469a94;
extern int g_8c469a98;
extern int g_8c469a9c;
extern int g_8c469aa0;
extern int g_8c469aa4;
extern int g_8c469aac;
extern int g_8c469ab0;
extern char g_8c2fdbf0[];
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern void operation_8c08a548(void);
extern void operation_8c07cd8c(void);
extern int call_8c118528(void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c079104(void)
{
    int v3;
    int v4;
    S_c8c011ecc *t1;
    char *v5;
    int v6;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c2fda10), 0, 0, 0);
    }
    g_8c469a94 = t1;
    v3 = (int)t1->f42c->f08;
    g_8c469aa4 = (int)(v3);
    g_8c469a9c = (int)(t1->f42c->f0c);
    g_8c469aa0 = (int)(t1->f42c->f2c);
    g_8c469aac = (int)(t1->f42c->f18->f2c->f04->f04);
    g_8c469ab0 = (int)(t1->f42c->f08->f04->f04);
    operation_8c08a548();
    operation_8c07cd8c();
    t2 = call_8c118528((void *)((g_8c2fdbf0 + 0x1a7)));
    v4 = (int)0;
    g_8c469a98 = (int)(t2);
    while (1 > v4) {
        t3 = record24_8c17948c((int)(v4 + 0x1e));
        v5 = (char *)v4;
        v6 = (int)((int)(v5) << 2);
        *(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c469a80))) = (int)(t3);
        t4 = record30_8c1794a0((int)(v4 + 0x1e));
        *(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c469a84))) = (int)(t4);
        t5 = block32_8c1794b4((int)(v4 + 0x1e));
        *(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c469a88))) = (int)(t5);
        v4 = (int)(v4 + 1);
    }
    t6 = record30_8c1794c8(0x1e);
    g_8c469a8c = (int)(t6);
}
