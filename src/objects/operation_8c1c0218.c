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
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void operation_8c1c0218(void)
{
    S_c8c011ecc *t1;
    int v2;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c328688), 0, 0, 0);
    }
    *(S_c8c011ecc **)0x8c4e2c40 = t1;
    v2 = t1->f42c->f08;
    *(int *)0x8c4e2c44 = v2;
    *(int *)0x8c4e2c48 = (int)(t1->f42c->f0c);
}
