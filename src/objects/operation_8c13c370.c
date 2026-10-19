typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c30 S_g8c4d9c30;
typedef struct S_g8c4d9c30_42c S_g8c4d9c30_42c;
typedef struct S_g8c4d9c30_42c_118 S_g8c4d9c30_42c_118;
typedef struct S_g8c4d9c3c S_g8c4d9c3c;
typedef struct S_g8c4d9c3c_4 S_g8c4d9c3c_4;
struct S_g8c4d9c30 {
    char unknown0[0x42c];
    S_g8c4d9c30_42c *f42c;
};
struct S_g8c4d9c30_42c {
    char unknown0[0x118];
    S_g8c4d9c30_42c_118 *f118;
};
struct S_g8c4d9c3c {
    char unknown0[0x4];
    S_g8c4d9c3c_4 *f04;
};
struct S_g8c4d9c3c_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c4d9c38;
extern S_g8c4d9c30 *g_8c4d9c30;
extern int call_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern int call_8c03ef88(int, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c13c370(void)
{
    char *v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    g_8c4d9c30 = (S_g8c4d9c30 *)(*(int *)0x8c4d9b60);
    t1 = call_8c011ecc(0xc);
    if (t1 != 0) {
        initialize_vector_array((void *)t1, (void *)(g_8c4d9c30->f42c->f118));
    }
    g_8c4d9c38 = (int)(t1);
    v3 = (char *)g_8c4d9c30->f42c->f118;
    t2 = call_8c03ef88((int)(v3), 0xd);
    *(int *)0x8c4d9c3c = (int)(t2);
    t3 = record24_8c17948c(0x22);
    *(int *)0x8c4d9c20 = (int)(t3);
    t4 = record30_8c1794a0(0x22);
    *(int *)0x8c4d9c24 = (int)(t4);
    t5 = block32_8c1794b4(0x22);
    *(int *)0x8c4d9c28 = (int)(t5);
    t6 = record30_8c1794c8(0x22);
    *(int *)0x8c4d9c2c = (int)(t6);
    *(int *)0x8c4d9c40 = (int)((*(S_g8c4d9c3c **)0x8c4d9c3c)->f04->f04);
}
