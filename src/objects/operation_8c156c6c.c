typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_300 S_g8c467180_2c_300;
typedef struct S_g8c467180_2c_304 S_g8c467180_2c_304;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x300];
    S_g8c467180_2c_300 *f300;
    S_g8c467180_2c_304 *f304;
};
struct S_c8c122700 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void set_configuration_pair(void *, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_8c1566f0(void *, unsigned int);
extern void call_8c156d30(int, void *, int, int);
extern void call_8c15700c(int, float);
extern void call_8c157138(int);
S_c8c122700 *operation_8c156c6c(int a0)
{
    S_c8c122700 *t1;
    set_configuration_pair((void *)a0, 2);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        initialize_grid_8c1566f0((void *)t1, (unsigned int)2);
    }
    call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f300, 6, 0);
    call_8c156d30((int)t1, (*(S_g8c467180 **)0x8c467180)->f2c->f304, 6, 1);
    call_8c15700c((int)t1, 104.0f);
    call_8c157138((int)t1);
    t1->f80 = (t1->f80 & 0xffff) | 1;
    return t1;
}
