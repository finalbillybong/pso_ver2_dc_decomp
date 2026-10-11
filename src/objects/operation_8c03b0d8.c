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
    char f20;
    char f21;
    short f22;
    int f24;
};
extern void *lookup_low_id(int);
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_hierarchy_node(S_c8c122700 *, void *);
S_c8c122700 *operation_8c03b0d8(int a0, int a1)
{
    void *t1;
    S_c8c122700 *t2;
    t1 = lookup_low_id((unsigned short)a0);
    if (t1 == 0) {
        return 0;
    }
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x28);
    if (t2 != 0) {
        initialize_hierarchy_node(t2, t1);
        t2->f18 = (void *)0x8c261998;
        t2->f20 = a1;
        t2->f21 = 0;
        t2->f22 = a0;
        t2->f24 = 0;
    }
    return t2;
}
