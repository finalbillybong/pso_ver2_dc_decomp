typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_c8c011ecc_42c_8_2c S_c8c011ecc_42c_8_2c;
typedef struct S_c8c011ecc_42c_8_2c_2c S_c8c011ecc_42c_8_2c_2c;
typedef struct S_c8c011ecc_42c_8_2c_2c_4 S_c8c011ecc_42c_8_2c_2c_4;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    S_c8c011ecc_42c_8 *f08;
};
struct S_c8c011ecc_42c_8 {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c *f2c;
};
struct S_c8c011ecc_42c_8_2c {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c_2c *f2c;
};
struct S_c8c011ecc_42c_8_2c_2c {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_2c_4 *f04;
};
struct S_c8c011ecc_42c_8_2c_2c_4 {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void operation_8c14cd9c(void)
{
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c3155fc), 0, 0, 0);
    }
    *(S_c8c011ecc **)0x8c4da620 = t1;
    *(int *)0x8c4da624 = (int)(t1->f42c->f08->f2c->f2c->f04->f04);
    *(int *)0x8c4da628 = 0;
}
