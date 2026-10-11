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
    int f2c;
    int f30;
    float f34;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_hierarchy_node(S_c8c122700 *, int);
S_c8c122700 *operation_8c09a130(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x38);
    if (t1 != 0) {
        initialize_hierarchy_node(t1, a0);
        t1->f18 = (void *)0x8c265730;
        t1->f20 = *(int *)0x8c460900;
        t1->f24 = 0;
        t1->f2c = 0;
        t1->f28 = 0;
        t1->f30 = 1;
        t1->f34 = 0.0f;
    }
    return t1;
}
