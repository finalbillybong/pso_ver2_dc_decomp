typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x20];
    int f3c;
    char unknown40[0x1c];
    float f5c;
    char unknown60[0x44];
    int fa4;
    int fa8;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_follow_8c0a5ad0(void *);
S_c8c122700 *operation_8c1cfbe0(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xc4);
    if (t1 != 0) {
        initialize_follow_8c0a5ad0((void *)t1);
        t1->f18 = (void *)0x8c276d90;
        t1->f3c = 0x15;
        t1->f5c = 0.65f;
        t1->fa8 = 0;
        t1->fa4 = 0;
    }
    return t1;
}
