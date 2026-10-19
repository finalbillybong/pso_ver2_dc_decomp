typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c1beb7c S_c8c1beb7c;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0xc8];
    float fe8;
};
struct S_c8c1beb7c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c328920;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void operation_8c1c16dc(void *, int, int, int);
extern S_c8c1beb7c *operation_8c1beb7c(int);
S_c8c122700 *operation_8c1c1e1c(int a0)
{
    S_c8c122700 *t1;
    S_c8c1beb7c *t2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf4);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c1c16dc((void *)t1, (int)g_8c44be98, a0, (int)((void *)0x8c2890b4));
        self->f18 = (void *)0x8c2759e0;
        self->f00 = (int)(g_8c328920);
        self->f1e = 0xf4;
        t2 = operation_8c1beb7c(9);
        self->fe8 = (float)(unsigned int)(t2->f04 + -1);
    }
    return t1;
}
