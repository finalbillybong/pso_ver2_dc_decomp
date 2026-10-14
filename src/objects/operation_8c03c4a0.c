typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c104e9c S_c8c104e9c;
typedef struct S_c8c104e9c_0 S_c8c104e9c_0;
typedef struct S_c8c104e9c_0_4 S_c8c104e9c_0_4;
typedef struct S_g8c462a24 S_g8c462a24;
typedef struct S_g8c462a24_0 S_g8c462a24_0;
typedef struct S_g8c462a24_0_c S_g8c462a24_0_c;
struct S_c8c104e9c {
    S_c8c104e9c_0 *f00;
};
struct S_c8c104e9c_0 {
    char unknown0[0x4];
    S_c8c104e9c_0_4 *f04;
};
struct S_g8c462a24 {
    S_g8c462a24_0 *f00;
};
struct S_g8c462a24_0 {
    char unknown0[0xc];
    S_g8c462a24_0_c *f0c;
};
extern char g_8c2eefcc[];
extern S_c8c104e9c *call_8c104e9c(void *);
extern void copy_resource_fields(void *, void *);
void operation_8c03c4a0(void)
{
    S_c8c104e9c *t1;
    t1 = call_8c104e9c((void *)((g_8c2eefcc + 0xc)));
    *(S_c8c104e9c **)0x8c462a24 = t1;
    *(S_c8c104e9c_0 **)0x8c462a28 = t1->f00;
    copy_resource_fields((void *)((g_8c2eefcc + 0x1c)), (void *)(t1->f00->f04));
    copy_resource_fields((void *)((g_8c2eefcc + 0x2c)), (void *)((*(S_g8c462a24 **)0x8c462a24)->f00->f0c));
}
