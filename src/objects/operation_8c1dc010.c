typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c289508 S_L8c289508;
typedef struct S_L8c289510 S_L8c289510;
typedef struct S_L8c32aee4 S_L8c32aee4;
typedef struct S_L8c32aef0 S_L8c32aef0;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_L8c32aef0 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct S_L8c289508 {
    float f00;
    float f04;
};
struct S_L8c289510 {
    float f00;
    float f04;
};
struct S_L8c32aee4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c289508 g_8c289508;
extern S_L8c289510 g_8c289510;
extern S_L8c32aee4 g_8c32aee4;
extern S_L8c32aef0 g_8c32aef0;
extern char g_8c32af28[];
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_view(void *, void *);
extern void call_8c1dc0b4(S_c8c122700 *, int);
extern void operation_8c1dc270(void *, int);
S_c8c122700 *operation_8c1dc010(int a0)
{
    S_c8c122700 *t1;
    (&g_8c32aef0)->f00 = (&g_8c289508)->f00;
    (&g_8c32aef0)->f04 = (&g_8c289508)->f04;
    (&g_8c32aef0)->f08 = (&g_8c289510)->f00;
    (&g_8c32aef0)->f0c = (&g_8c289510)->f04;
    (&g_8c32aee4)->f04 = a0;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x90);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_view((void *)t1, (void *)((void *)&g_8c32aef0));
        self->f18 = (void *)0x8c277334;
        call_8c1dc0b4(self, a0);
    }
    operation_8c1dc270((void *)t1, (int)(g_8c32af28 + 0x16));
    return t1;
}
