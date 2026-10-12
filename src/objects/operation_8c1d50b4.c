typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern void call_8c1cd008(int, int, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_panel_8c1ccd24(void *, int);
extern void operation_8c1cd3d4(void *);
S_c8c122700 *operation_8c1d50b4(int a0, int a1)
{
    S_c8c122700 *t1;
    call_8c1cd008(a0, a1, 0x1f);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x98);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_panel_8c1ccd24((void *)t1, 0x1f);
        self->f18 = (void *)0x8c276e64;
        self->f00 = *(int *)0x8c329a18;
        self->f1e = 0x98;
        operation_8c1cd3d4((void *)self);
    }
    return t1;
}
