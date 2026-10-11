typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c119758 S_c8c119758;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c119758 {
    char unknown0[0x1c];
    int f1c;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern S_c8c119758 *get_render_state_8c119758(void);
extern void configure_pair_grid_view(int, int, int);
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_pair_grid_view(S_c8c122700 *, int);
S_c8c122700 *create_pair_view_8c226800(int a0, int a1)
{
    S_c8c119758 *t1;
    S_c8c122700 *t2;
    t1 = get_render_state_8c119758();
    t1->f1c |= 0x20;
    configure_pair_grid_view(a0, a1, 8);
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0xa0);
    if (t2 != 0) {
        initialize_pair_grid_view(t2, 8);
        t2->f18 = (void *)0x8c278b48;
        t2->f00 = *(int *)0x8c3376d8;
        t2->f1e = 0xa0;
    }
    t1->f1c &= -0x21;
    return t2;
}
