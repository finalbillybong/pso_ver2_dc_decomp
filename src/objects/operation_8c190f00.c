typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1d50b4 S_c8c1d50b4;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_210 S_g8c467180_2c_210;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x210];
    S_g8c467180_2c_210 *f210;
};
struct S_c8c1d50b4 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c1d50b4 *call_8c1d50b4(void *, void *);
extern void call_8c1cd38c(int, void *);
extern void call_8c1d56a4(S_c8c1d50b4 *);
S_c8c1d50b4 *operation_8c190f00(void)
{
    S_c8c1d50b4 *t1;
    t1 = call_8c1d50b4((void *)0x8c2876d0, (void *)0x8c2876d8);
    call_8c1cd38c((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f210);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    call_8c1d56a4(t1);
    return t1;
}
