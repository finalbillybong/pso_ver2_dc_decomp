typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513480 S_g8c513480;
struct S_g8c513480 {
    char unknown0[0x20];
    int f20;
    int f24;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c513480 *g_8c513480;
extern void call_8c060724(int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
void operation_8c25eef4(int a0, int a1)
{
    S_c8c122700 *t1;
    if (g_8c513480 != 0) {
        g_8c513480->f20 = a1;
        g_8c513480->f24 = a0;
        call_8c060724(a0);
        return;
    }
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x28);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t1, g_8c44be84);
        self->f18 = (void *)0x8c281d54;
        self->f20 = a1;
        self->f24 = a0;
        call_8c060724(a0);
    }
    g_8c513480 = (S_g8c513480 *)t1;
}
