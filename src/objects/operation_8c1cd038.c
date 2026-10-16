typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3292ac S_L8c3292ac;
typedef struct S_L8c3292b8 S_L8c3292b8;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    float f04;
};
struct S_L8c3292b8 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_L8c3292ac {
    char unknown0[0x4];
    int f04;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c3292ac g_8c3292ac;
extern S_L8c3292b8 g_8c3292b8;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_grid_view(void *, void *);
extern void operation_8c1cd0bc(void *, unsigned int);
S_c8c122700 *operation_8c1cd038(Object *o, Arg1 *a1, int a2)
{
    S_c8c122700 *t1;
    (&g_8c3292b8)->f00 = o->tag;
    (&g_8c3292b8)->f04 = o->f04;
    (&g_8c3292b8)->f08 = a1->f00;
    (&g_8c3292b8)->f0c = a1->f04;
    (&g_8c3292ac)->f04 = a2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x98);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_view((void *)t1, (void *)((void *)&g_8c3292b8));
        self->f18 = (void *)0x8c276874;
        operation_8c1cd0bc((void *)self, (unsigned int)a2);
    }
    return t1;
}
