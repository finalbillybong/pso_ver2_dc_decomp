typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0xc];
    int f0c;
};
extern S_c8c011ecc *g_8c4dc6a0;
extern int g_8c4dc6a4;
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void operation_8c1a2330(void)
{
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c31da0c), 0, 0, 0);
    }
    g_8c4dc6a0 = t1;
    g_8c4dc6a4 = (int)(t1->f42c->f0c);
}
