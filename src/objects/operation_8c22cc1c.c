typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_30 S_c8c122700_30;
typedef struct S_c8c122700_30_0 S_c8c122700_30_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x30];
    S_c8c122700_30 *f30;
};
struct S_c8c122700_30 {
    S_c8c122700_30_0 *f00;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c22ca64(S_c8c122700 *, int, void *);
extern void set_normalized_rectangle(void *, float, float, float, float);
S_c8c122700 *operation_8c22cc1c(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x74);
    if (t1 != 0) {
        call_8c22ca64(t1, a0, (void *)((void *)0x8c2e1b60));
    }
    set_normalized_rectangle((void *)(t1->f30->f00), 0.0f, 0.0f, 0.625f, 0.46875f);
    return t1;
}
