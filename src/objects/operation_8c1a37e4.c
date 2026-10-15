typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_220 S_g8c467180_2c_220;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x220];
    S_g8c467180_2c_220 *f220;
};
struct S_c8c122700 {
    char unknown0[0x68];
    short f68;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_selection_child(void *, void *, int, int, int);
extern void operation_8c1bd94c(void *, int);
extern void call_8c1bd9a4(S_c8c122700 *, float);
S_c8c122700 *operation_8c1a37e4(int a0, int a1)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x7c);
    if (t1 != 0) {
        initialize_selection_child((void *)t1, (void *)((void *)0x8c287bc0), 1, a1, 1);
    }
    operation_8c1bd94c((void *)t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f220));
    call_8c1bd9a4(t1, 224.0f);
    t1->f68 |= 0x10;
    return t1;
}
