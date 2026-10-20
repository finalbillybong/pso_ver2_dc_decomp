typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_0 S_g8c4d7bbc_0;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct S_g8c4d7bbc_42c_38 S_g8c4d7bbc_42c_38;
typedef struct S_g8c4d7bbc_430 S_g8c4d7bbc_430;
typedef struct S_g8c4d7bbc_430_1c S_g8c4d7bbc_430_1c;
typedef struct S_g8c4d7c18 S_g8c4d7c18;
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
    S_g8c4d7bbc_430 *f430;
};
struct S_g8c4d7bbc_42c {
    char unknown0[0x38];
    S_g8c4d7bbc_42c_38 *f38;
};
struct S_g8c4d7bbc_0 {
    char unknown0[0x48];
    int f48;
};
struct S_g8c4d7c18 {
    char unknown0[0x30];
    int f30;
};
struct S_g8c4d7bbc_430 {
    char unknown0[0x1c];
    S_g8c4d7bbc_430_1c *f1c;
};
extern int g_8c4d7ba0;
extern int g_8c4d7ba4;
extern int g_8c4d7ba8;
extern int g_8c4d7bac;
extern S_g8c4d7bbc *g_8c4d7bbc;
extern int g_8c4d7c4c;
extern int g_8c4d7c50;
extern int g_8c4d7c54;
extern char g_8c30bb10[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c03ef88(int, int);
extern void call_8c0c6fd8(int, void *, float, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c108a24(void)
{
    int v5;
    char *v11;
    int v7;
    int t8;
    char *v12;
    int v8;
    char *v13;
    char *v14;
    int t1;
    int t2;
    int v6;
    int t4;
    int t5;
    int t6;
    int t7;
    int t3;
    int t9;
    int t10;
    int t11;
    int t12;
    int id;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c30b824), (int)(g_8c30bb10 + 0x139));
        g_8c4d7bbc = (S_g8c4d7bbc *)(int)(t2);
    } else {
        t3 = call_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 5, (void *)((void *)0x8c30b824), 0, 0, 0);
        }
        g_8c4d7bbc = (S_g8c4d7bbc *)(int)(t3);
    }
    v6 = (int)0x42c;
    v5 = (int)0;
    while (0x16 > v5) {
        id = *(short *)((char *)0x8c30b8fc + (v5 << 1));
        v11 = (char *)(*(S_g8c4d7bbc_42c **)((char *)g_8c4d7bbc + v6))->f38;
        t4 = call_8c03ef88((int)(v11), id);
        *(int *)((char *)0x8c4d7bc0 + (v5 << 2)) = (int)(t4);
        v5 = (int)(v5 + 1);
    }
    v6 = (int)0x42c;
    v7 = (int)0;
    while (0xd > v7) {
        id = *(short *)((char *)0x8c30b8fc + (v7 << 1));
        v12 = (char *)(*(S_g8c4d7bbc_0 **)((char *)((char *)g_8c4d7bbc + 0x0) + (v6)))->f48;
        t5 = call_8c03ef88((int)(v12), id);
        *(int *)((char *)0x8c4d7c18 + (v7 << 2)) = (int)(t5);
        v7 = (int)(v7 + 1);
    }
    v8 = (int)0;
    while (0xd > v8) {
        (*(S_g8c4d7c18 **)((char *)0x8c4d7c18 + (v8 << 2)))->f30 = 0;
        v8 = (int)(v8 + 1);
    }
    v13 = (char *)g_8c4d7bbc->f42c->f38;
    t6 = call_8c03ef88((int)(v13), 0x19);
    g_8c4d7c4c = (int)(t6);
    v14 = (char *)g_8c4d7bbc->f42c->f38;
    t7 = call_8c03ef88((int)(v14), 0xd);
    g_8c4d7c50 = (int)(t7);
    t8 = call_8c011ecc(0xc);
    if (t8 != 0) {
        call_8c0c6fd8(t8, (void *)(g_8c4d7bbc->f42c->f38), 54.0f, (void *)(g_8c4d7bbc->f430->f1c));
    }
    g_8c4d7c54 = (int)(t8);
    t9 = record24_8c17948c(0x1d);
    g_8c4d7ba0 = (int)(t9);
    t10 = record30_8c1794a0(0x1d);
    g_8c4d7ba4 = (int)(t10);
    t11 = block32_8c1794b4(0x1d);
    g_8c4d7ba8 = (int)(t11);
    t12 = record30_8c1794c8(0x1d);
    g_8c4d7bac = (int)(t12);
}
