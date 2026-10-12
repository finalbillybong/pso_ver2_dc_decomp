typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_24 S_c8c122700_24;
typedef struct S_c8c122700_2c S_c8c122700_2c;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x24];
    S_c8c122700_24 *f24;
    char unknown28[0x4];
    S_c8c122700_2c *f2c;
};
struct S_c8c122700_24 {
    char unknown0[0x6a];
    short f6a;
};
struct S_c8c122700_2c {
    char unknown0[0x68];
    int f68;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c051a98(int, void *, int, int, int);
extern void call_8c051d5c(S_c8c122700 *, float, float);
extern void set_fields_8c051e04(void *);
S_c8c122700 *operation_8c21749c(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x30);
    if (t1 != 0) {
        call_8c051a98((int)t1, *(S_g8c44be84 **)0x8c44be84, 0xc6, 5, 2);
    }
    if (t1->f24 != 0) {
        t1->f24->f6a |= 4;
    }
    call_8c051d5c(t1, 357.0f, 269.0f);
    set_fields_8c051e04((void *)t1);
    if (t1->f2c != 0) {
        t1->f2c->f68 |= 2;
    }
    return t1;
}
