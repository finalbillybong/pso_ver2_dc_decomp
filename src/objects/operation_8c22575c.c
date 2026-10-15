typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x14];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x5c];
    int fa0;
    float fa4;
};
struct S_g8c46fe20 {
    char unknown0[0x6c];
    S_c8c122700 *f6c;
};
struct Frame {
    float f04;
    float f08;
};
extern void configure_pair_grid_view(void *, void *, unsigned int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_pair_grid_view(void *, unsigned int);
extern int call_8c011ecc(int);
extern void call_8c199b8c(int, void *);
extern void call_8c225cd0(S_c8c122700 *);
S_c8c122700 *operation_8c22575c(int a0, int a1)
{
    Frame frame;
    S_c8c122700 *t1;
    int t2;
    configure_pair_grid_view((void *)a0, (void *)a1, (unsigned int)0x1e);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_pair_grid_view((void *)t1, (unsigned int)0x1e);
        self->f18 = (void *)0x8c278b0c;
        self->f00 = (int)(*(int *)0x8c3375d0);
        self->f1e = 0xa8;
        if (*(int *)0x8c46fe20 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f6c = self;
        }
        (&frame)->f04 = self->f40 - 18.0f;
        (&frame)->f08 = 0.0f;
        t2 = call_8c011ecc(8);
        if (t2 != 0) {
            call_8c199b8c(t2, (void *)(&(&frame)->f04));
        }
        self->fa0 = (int)(t2);
        self->f34 |= 0x80;
        self->fa4 = 0.0f;
        call_8c225cd0(self);
    }
    return t1;
}
