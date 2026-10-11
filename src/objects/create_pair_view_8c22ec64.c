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
    char unknown20[0x80];
    int fa0;
    int fa4;
};
extern void configure_pair_grid_view(int, int, int);
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_pair_grid_view(S_c8c122700 *, int);
S_c8c122700 *create_pair_view_8c22ec64(int a0, int a1, int a2)
{
    S_c8c122700 *t1;
    configure_pair_grid_view(a0, a1, a2);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0xa8);
    if (t1 != 0) {
        initialize_pair_grid_view(t1, a2);
        t1->f18 = (void *)0x8c278ec0;
        t1->f00 = *(int *)0x8c338508;
        t1->f1e = 0xa8;
        t1->fa0 = 0;
        t1->fa4 = 0;
    }
    return t1;
}
