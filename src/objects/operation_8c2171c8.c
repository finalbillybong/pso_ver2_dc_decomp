typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1cd038 S_c8c1cd038;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_238 S_g8c467180_2c_238;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x238];
    S_g8c467180_2c_238 *f238;
};
struct S_c8c1cd038 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c1cd038 *call_8c1cd038(void *, void *, int);
extern void call_8c1cd38c(int, void *);
S_c8c1cd038 *operation_8c2171c8(void)
{
    S_c8c1cd038 *t1;
    t1 = call_8c1cd038((void *)0x8c2e1770, (void *)0x8c2e1778, 8);
    call_8c1cd38c((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f238);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
