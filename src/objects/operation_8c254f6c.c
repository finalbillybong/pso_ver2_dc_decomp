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
    char unknown20[0x70];
    short f90;
};
extern void call_8c1dbfe0(void);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_panel_8c1dbd08(void *, int);
S_c8c122700 *operation_8c254f6c(int a0, int a1, int a2)
{
    S_c8c122700 *t1;
    call_8c1dbfe0();
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x94);
    if (t1 != 0) {
        initialize_grid_panel_8c1dbd08((void *)t1, a2);
        t1->f18 = (void *)0x8c280ff0;
        t1->f00 = *(int *)0x8c33fd60;
        t1->f1e = 0x94;
        t1->f90 = 0;
    }
    return t1;
}
