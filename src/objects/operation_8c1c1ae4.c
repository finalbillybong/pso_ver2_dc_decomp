typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_44 S_g8c4e2b80_430_44;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0xc8];
    float fe8;
};
struct S_g8c4e2b80 {
    char unknown0[0x430];
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x44];
    S_g8c4e2b80_430_44 *f44;
};
struct S_g8c4e2b80_430_44 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c328918;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2b80 *g_8c4e2b80;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void operation_8c1c16dc(void *, int, int, int);
S_c8c122700 *operation_8c1c1ae4(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf4);
    if (t1 != 0) {
        operation_8c1c16dc((void *)t1, (int)g_8c44be98, a0, (int)((void *)0x8c28907c));
        t1->f18 = (void *)0x8c275ab0;
        t1->f00 = (int)(g_8c328918);
        t1->f1e = 0xf4;
        t1->fe8 = (float)(unsigned int)(g_8c4e2b80->f430->f44->f04 + -1);
    }
    return t1;
}
