typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_c8c2535bc S_c8c2535bc;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_2e4 S_g8c467180_2c_2e4;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x2e4];
    S_g8c467180_2c_2e4 *f2e4;
};
struct S_c8c2535bc {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
    short f82;
};
extern char g_8c3299bc[];
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern S_c8c2535bc *operation_8c2535bc(void);
extern void operation_8c156d30(S_c8c156bd8 *, int, int, int);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void operation_8c1570b4(void *, float, float);
S_c8c156bd8 *operation_8c1d41b4(void)
{
    S_c8c156bd8 *t1;
    int v2;
    int v1;
    int v3;
    S_c8c2535bc *t2;
    t1 = operation_8c156bd8((int)((void *)0x8c2893f0), 0x20, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f2e4));
    t2 = operation_8c2535bc();
    v2 = (int)0;
    v1 = (int)t2->f01;
    v3 = (int)((char *)t2 + 0x4);
    while (v1 > v2) {
        operation_8c156d30(t1, (int)(v3 + 4), 6, v2);
        v2 = (int)(v2 + 1);
        v3 = (int)(v3 + 0xd4);
    }
    if (!(t1->f82 > 0)) {
        call_8c156d48(t1, (void *)((g_8c3299bc + 0x13)), 0x17, 0, -0x979798);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)t1, 223.0f, 128.0f);
    return t1;
}
