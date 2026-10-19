typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    short f20;
    char unknown22[0x2];
    void *f24;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
void operation_8c1ef644(Object *o)
{
    S_c8c122700 *t1;
    short v1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x28);
    if (t1 != 0) {
        v1 = (short)o->f20;
        initialize_hierarchy_node((void *)t1, (void *)o);
        t1->f18 = (void *)0x8c261928;
        t1->f20 = v1;
        t1->f24 = (void *)0x8c1ef698;
    }
}
