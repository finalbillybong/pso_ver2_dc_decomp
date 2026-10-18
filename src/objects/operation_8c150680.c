typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_g8c4d9b60_42c S_g8c4d9b60_42c;
typedef struct S_g8c4da6b0 S_g8c4da6b0;
typedef struct S_g8c4da6b0_42c S_g8c4da6b0_42c;
typedef struct S_g8c4da6b0_42c_108 S_g8c4da6b0_42c_108;
struct S_g8c4d9b60 {
    char unknown0[0x42c];
    S_g8c4d9b60_42c *f42c;
};
struct S_g8c4d9b60_42c {
    char unknown0[0x108];
    int f108;
};
struct S_c8c03ef88 {
    int f00;
};
struct S_g8c4da6b0 {
    char unknown0[0x42c];
    S_g8c4da6b0_42c *f42c;
};
struct S_g8c4da6b0_42c {
    char unknown0[0x108];
    S_g8c4da6b0_42c_108 *f108;
};
extern S_g8c4d9b60 *g_8c4d9b60;
extern int g_8c4da6a0;
extern int g_8c4da6a4;
extern int g_8c4da6a8;
extern int g_8c4da6ac;
extern S_g8c4da6b0 *g_8c4da6b0;
extern S_c8c03ef88 *g_8c4da6b8;
extern int g_8c4da6bc;
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern int call_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c150680(void)
{
    char *v3;
    S_c8c03ef88 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    g_8c4da6b0 = (S_g8c4da6b0 *)g_8c4d9b60;
    {
        int v4;
        v4 = 0x108;
        v3 = (char *)*(int *)((char *)g_8c4d9b60->f42c + v4);
    }
    t1 = call_8c03ef88((int)(v3), 0xb);
    g_8c4da6b8 = t1;
    t1->f00 &= -3;
    t2 = call_8c011ecc(0xc);
    if (t2 != 0) {
        initialize_vector_array((void *)t2, (void *)(g_8c4da6b0->f42c->f108));
    }
    g_8c4da6bc = (int)(t2);
    t3 = record24_8c17948c(0x24);
    g_8c4da6a0 = (int)(t3);
    t4 = record30_8c1794a0(0x24);
    g_8c4da6a4 = (int)(t4);
    t5 = block32_8c1794b4(0x24);
    g_8c4da6a8 = (int)(t5);
    t6 = record30_8c1794c8(0x24);
    g_8c4da6ac = (int)(t6);
}
