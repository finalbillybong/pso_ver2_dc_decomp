typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    int f20;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_hierarchy_node(S_c8c122700 *, void *);
void create_effect_node_8c080310(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x24);
    if (t1 != 0) {
        initialize_hierarchy_node(t1, *(S_g8c44be98 **)0x8c44be98);
        t1->f18 = (void *)0x8c264348;
        t1->f00 = *(int *)0x8c2fec08;
        t1->f1e = 0x24;
        t1->f20 = 2;
    }
}
