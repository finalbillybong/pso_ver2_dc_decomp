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
    char unknown40[0x30];
    float f70;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_follow_base(void *);
S_c8c122700 *operation_8c0a4c9c(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x74);
    if (t1 != 0) {
        initialize_follow_base((void *)t1);
        t1->f18 = (void *)0x8c265b84;
        t1->f70 = 10.0f;
        t1->f3c = 0;
    }
    return t1;
}
