typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    S_c8c021ef8 *f20;
    short f24;
    char unknown26[0x16];
    int f3c;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_follow_base(void *);
extern S_c8c021ef8 *lookup_low_id(int);
S_c8c122700 *operation_8c1cfaf4(void)
{
    S_c8c122700 *t1;
    S_c8c021ef8 *t2;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_follow_base((void *)t1);
        self->f18 = (void *)0x8c276d5c;
        self->f3c = 5;
        t2 = lookup_low_id(0);
        self->f20 = t2;
        if (t2 != 0) {
            self->f24 = t2->f20;
        }
    }
    return t1;
}
