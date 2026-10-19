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
    char unknown20[0xc4];
    float fe4;
    char unknowne8[0xc];
    float ff4;
};
extern int g_8c327fb0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c088f14(S_c8c122700 *, void *, int);
S_c8c122700 *operation_8c1bdf60(int a0)
{
    int v1;
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x120);
    if (t1 != 0) {
        call_8c088f14(t1, g_8c44be98, a0);
        t1->f18 = (void *)0x8c2755c8;
        t1->f00 = (int)(g_8c327fb0);
        t1->f1e = 0x120;
        t1->fe4 = 25.0f;
        t1->ff4 = 0.0f;
        v1 = (int)0;
        while (0xa > v1) {
            *(int *)((char *)((char *)t1 + 0xf8) + (v1 << 2)) = 0;
            v1 = (int)(v1 + 1);
        }
    }
    return t1;
}
