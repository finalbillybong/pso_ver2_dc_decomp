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
extern void call_8c1cd008(void *, void *, int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_panel_8c1ccd24(void *, int);
extern void call_8c19fb98(S_c8c122700 *, int);
S_c8c122700 *operation_8c19fb24(int a0, int a1)
{
    S_c8c122700 *t1;
    call_8c1cd008((void *)0x8c287ba0, (void *)0x8c287ba8, a1);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x98);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_panel_8c1ccd24((void *)t1, a1);
        self->f18 = (void *)0x8c272c94;
        call_8c19fb98(self, a0);
    }
    return t1;
}
