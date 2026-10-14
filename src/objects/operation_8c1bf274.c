typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2be4 S_L8c4e2be4;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_c8c011ecc_42c_8_2c S_c8c011ecc_42c_8_2c;
typedef struct S_c8c011ecc_42c_8_2c_30 S_c8c011ecc_42c_8_2c_30;
typedef struct S_c8c011ecc_42c_8_2c_30_30 S_c8c011ecc_42c_8_2c_30_30;
typedef struct S_c8c011ecc_42c_8_2c_30_30_30 S_c8c011ecc_42c_8_2c_30_30_30;
typedef struct S_c8c011ecc_42c_8_2c_30_30_30_4 S_c8c011ecc_42c_8_2c_30_30_30_4;
typedef struct S_c8c011ecc_42c_8_2c_30_30_4 S_c8c011ecc_42c_8_2c_30_30_4;
typedef struct S_c8c011ecc_42c_8_2c_30_4 S_c8c011ecc_42c_8_2c_30_4;
typedef struct S_c8c011ecc_42c_8_2c_4 S_c8c011ecc_42c_8_2c_4;
struct S_L8c4e2be4 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
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
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_4 *f04;
    char unknown8[0x28];
    S_c8c011ecc_42c_8_2c_30 *f30;
};
struct S_c8c011ecc_42c_8_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c011ecc_42c_8_2c_30 {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_30_4 *f04;
    char unknown8[0x28];
    S_c8c011ecc_42c_8_2c_30_30 *f30;
};
struct S_c8c011ecc_42c_8_2c_30_4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c011ecc_42c_8_2c_30_30 {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_30_30_4 *f04;
    char unknown8[0x28];
    S_c8c011ecc_42c_8_2c_30_30_30 *f30;
};
struct S_c8c011ecc_42c_8_2c_30_30_4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c011ecc_42c_8_2c_30_30_30 {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_30_30_30_4 *f04;
};
struct S_c8c011ecc_42c_8_2c_30_30_30_4 {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011ecc *g_8c4e2be0;
extern int g_8c4e2bf4;
extern S_L8c4e2be4 g_8c4e2be4;
extern S_c8c011ecc *call_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
void operation_8c1bf274(void)
{
    S_c8c011ecc *t1;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c3284ec), 0, 0, 0);
    }
    g_8c4e2be0 = t1;
    (&g_8c4e2be4)->f0c = (int)(t1->f42c->f08->f2c->f04->f04);
    (&g_8c4e2be4)->f08 = (int)(t1->f42c->f08->f2c->f30->f04->f04);
    (&g_8c4e2be4)->f04 = (int)(t1->f42c->f08->f2c->f30->f30->f04->f04);
    (&g_8c4e2be4)->f00 = (int)(t1->f42c->f08->f2c->f30->f30->f30->f04->f04);
    g_8c4e2bf4 = 0;
}
