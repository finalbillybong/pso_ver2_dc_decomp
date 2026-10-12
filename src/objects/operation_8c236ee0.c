typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b20 S_L8c510b20;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x4c];
    int f4c;
};
struct S_L8c510b20 {
    int f00;
    int f04;
};
extern S_g8c44be94 *g_8c44be94;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c510b20 g_8c510b20;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c087b0c(void);
extern int create_item_view_8c21de48(void);
void operation_8c236ee0(void)
{
    S_c8c122700 *t1;
    int t2;
    int t3;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t1, g_8c44be94);
        self->f18 = (void *)0x8c279084;
        t2 = call_8c087b0c();
        self->f20 = t2;
        if (g_8c46fe20 != 0 && g_8c46fe20->f4c == 0) {
            t3 = create_item_view_8c21de48();
            g_8c46fe20->f4c = t3;
        }
        (&g_8c510b20)->f04 = 0;
        (&g_8c510b20)->f00 = 0;
    }
}
