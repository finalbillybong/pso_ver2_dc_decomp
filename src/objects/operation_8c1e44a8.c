typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern int g_8c2e2ad8;
extern int g_8c32b6bc;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1e4024(S_c8c122700 *, int);
S_c8c122700 *operation_8c1e44a8(int a0)
{
    int v1;
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    if (g_8c2e2ad8 == 1) {
        v1 = (int)(g_8c510ba0 != 0);
        if (v1 == 1 && g_8c4dc800 == 1) {
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x384);
            if (t1 != 0) {
                call_8c1e4024(t1, a0);
                t1->f18 = (void *)0x8c277bcc;
                t1->f00 = (int)(g_8c32b6bc);
                t1->f1e = 0x384;
            }
            return t1;
        }
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x384);
    if (t2 != 0) {
        call_8c1e4024(t2, a0);
        t2->f18 = (void *)0x8c277bcc;
        t2->f00 = (int)(g_8c32b6bc);
        t2->f1e = 0x384;
    }
    return t2;
}
