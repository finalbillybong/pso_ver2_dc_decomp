typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c12b77c(void *, void *, int);
extern void call_8c105534(void *, void *, int);
void operation_8c03b024(Object *o)
{
    S_c8c122700 *t1;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x120);
    if (t1 != 0) {
        initialize_hierarchy_node((void *)t1, (void *)(*(S_g8c44be9c **)0x8c44be9c));
        t1->f18 = (void *)0x8c2619b4;
    }
    if (t1 != 0 && (void *)0x8c42ad80 != 0) {
        call_8c12b77c((void *)(((char *)o + 0x20)), (void *)((void *)0x8c42ad80), 0x100);
        call_8c105534((void *)(((char *)o + 0x20)), (void *)(((char *)t1 + 0x20)), 0x100);
    }
    o->f04 |= 1;
}
