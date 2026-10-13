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
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    float f2c;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
S_c8c122700 *operation_8c099cb0(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t1 != 0) {
        initialize_hierarchy_node((void *)t1, (void *)a0);
        t1->f18 = (void *)0x8c26574c;
        t1->f20 = (int)(*(int *)0x8c460900);
        t1->f24 = 0;
        t1->f28 = 1;
        t1->f2c = 0.0f;
    }
    return t1;
}
