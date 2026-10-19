typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e30c4 S_g8c4e30c4;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x8];
    int f28;
};
struct S_g8c4e30c4 {
    int f00;
};
extern int g_8c32b6c0;
extern int g_8c32b6c4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e30c4 *g_8c4e30c4;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1e4024(S_c8c122700 *, int);
S_c8c122700 *operation_8c1e47e4(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x384);
    if (t1 != 0) {
        call_8c1e4024(t1, a0);
        t1->f18 = (void *)0x8c277a60;
        t1->f00 = (int)(g_8c32b6c0);
        t1->f1e = 0x384;
        t1->f28 = (int)(g_8c4e30c4->f00);
        t1->f18 = (void *)0x8c2778f4;
        t1->f00 = (int)(g_8c32b6c4);
        t1->f1e = 0x384;
    }
    return t1;
}
