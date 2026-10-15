typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c1cbb18 S_c8c1cbb18;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x28];
    float f48;
    float f4c;
    char unknown50[0x18];
    float f68;
};
struct S_c8c1cbb18 {
    char unknown0[0x8];
    float f08;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1cb998(S_c8c122700 *, int);
extern void operation_8c1cbb08(void *, int);
extern S_c8c1cbb18 *call_8c1cbb18(S_c8c122700 *);
extern int call_8c04b8dc(int);
S_c8c122700 *operation_8c24bce8(int a0)
{
    float v23;
    S_c8c122700 *t1;
    S_c8c1cbb18 *t2;
    int t3;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x6c);
    if (t1 != 0) {
        call_8c1cb998(t1, 0);
        t1->f18 = (void *)0x8c27d858;
        t1->f00 = (int)(*(int *)0x8c33e9d0);
        t1->f1e = 0x6c;
        t1->f48 = 454.0f;
        t1->f4c = 24.0f;
        t1->f68 = 0.0f;
    }
    operation_8c1cbb08((void *)t1, a0);
    t2 = call_8c1cbb18(t1);
    t3 = call_8c04b8dc(a0);
    v23 = (float)(float)(unsigned int)t3;
    t2->f08 = 80.0f - v23 * 0.5f;
    return t1;
}
