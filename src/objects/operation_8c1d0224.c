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
};
extern void call_8c1cd008(int, int, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_panel_8c1ccd24(void *, int);
extern void init_header_8c1d0280(void *);
S_c8c122700 *operation_8c1d0224(int a0, int a1)
{
    S_c8c122700 *t1;
    call_8c1cd008(a0, a1, 5);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_panel_8c1ccd24((void *)t1, 5);
        self->f18 = (void *)0x8c276dd0;
        init_header_8c1d0280((void *)self);
    }
    return t1;
}
