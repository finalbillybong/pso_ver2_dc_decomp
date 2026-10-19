typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern int g_8c32a308;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1d80f8(S_c8c122700 *, void *, int, int, float);
S_c8c122700 *operation_8c1d9054(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        call_8c1d80f8(t1, g_8c44be98, a0, 5, 3.0f);
        t1->f18 = (void *)0x8c276f90;
        t1->f00 = (int)(g_8c32a308);
        t1->f1e = 0xec;
    }
    return t1;
}
