typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c462a24 S_g8c462a24;
typedef struct S_g8c462a24_0 S_g8c462a24_0;
typedef struct S_g8c462a24_0_4 S_g8c462a24_0_4;
typedef struct S_g8c462a24_0_c S_g8c462a24_0_c;
struct S_g8c462a24 {
    S_g8c462a24_0 *f00;
};
struct S_g8c462a24_0 {
    char unknown0[0x4];
    S_g8c462a24_0_4 *f04;
    char unknown8[0x4];
    S_g8c462a24_0_c *f0c;
};
extern void call_8c37d534(void *);
extern void operation_8c105320(int);
void operation_8c03c4ec(void)
{
    call_8c37d534((void *)((*(S_g8c462a24 **)0x8c462a24)->f00->f0c));
    call_8c37d534((void *)((*(S_g8c462a24 **)0x8c462a24)->f00->f04));
    operation_8c105320((int)(*(S_g8c462a24 **)0x8c462a24));
}
