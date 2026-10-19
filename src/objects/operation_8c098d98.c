typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2f5b38 S_L8c2f5b38;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_20 S_c8c122700_20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    S_c8c122700_20 *f20;
    int f24;
    int f28;
    int f2c;
    char unknown30[0x4];
    int f34;
    float f38;
};
struct S_L8c2f5b38 {
    char unknown0[0x8];
    short f08;
};
extern int g_8c460900;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c2f5b38 g_8c2f5b38;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c034c7c(void *);
S_c8c122700 *operation_8c098d98(int a0)
{
    int v2;
    S_c8c122700 *t1;
    int t2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x48);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t1, (void *)a0);
        self->f18 = (void *)0x8c265784;
        self->f20 = (S_c8c122700_20 *)g_8c460900;
        self->f24 = 0;
        self->f28 = 0;
        t2 = operation_8c034c7c((void *)(self->f20));
        self->f2c = *(short *)((char *)&g_8c2f5b38.f08 + (t2 * 0x2c));
        self->f34 = 1;
        self->f38 = 0.0f;
        v2 = (int)0;
        while (3 > v2) {
            *(int *)((char *)((char *)self + 0x3c) + (v2 << 2)) = 0;
            v2 = (int)(v2 + 1);
        }
    }
    return t1;
}
