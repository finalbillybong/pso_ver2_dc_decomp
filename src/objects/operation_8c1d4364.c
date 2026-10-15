typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_2c S_c8c122700_2c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x2c];
    S_c8c122700_2c *f2c;
};
struct S_c8c122700_2c {
    char unknown0[0x68];
    int f68;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c051a98(S_c8c122700 *, int, int, int, int);
extern void operation_8c051d50(void *, int);
extern void operation_8c051d5c(void *, float, float);
extern void set_fields_8c051e04(void *);
S_c8c122700 *operation_8c1d4364(int a0)
{
    char *v1;
    S_c8c122700 *t1;
    v1 = (char *)*(int *)0x8c4e2fa0;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t1 != 0) {
        call_8c051a98(t1, a0, 0xc6, 3, 2);
    }
    operation_8c051d50((void *)t1, (int)(v1 + 0x20));
    operation_8c051d5c((void *)t1, 357.0f, 269.0f);
    set_fields_8c051e04((void *)t1);
    if (t1->f2c != 0) {
        t1->f2c->f68 |= 2;
    }
    return t1;
}
