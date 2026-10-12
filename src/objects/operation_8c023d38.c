typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct S_vv82 S_vv82;
struct Object {
    char unknown0[0xbc8];
    Arg0_bc8 *fbc8;
};
struct Arg0_bc8 {
    char unknown0[0x1ac];
    int f1ac;
    int f1b0;
};
struct S_vv82 {
    int f00;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c16a014(int, Object *);
extern void initialize_tag_8c1694cc(void *, void *);
extern void initialize_hierarchy_node(void *, void *);
void operation_8c023d38(Object *o)
{
    int v83;
    S_vv82 *v82;
    int t1;
    int t2;
    int t3;
    if (o->fbc8 == 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x1b4);
        if (t1 != 0) {
            call_8c16a014(t1, o);
        }
        o->fbc8 = (Arg0_bc8 *)t1;
    }
    t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x24);
    if (t2 != 0) {
        initialize_tag_8c1694cc((void *)t2, (void *)o->fbc8);
    }
    o->fbc8->f1ac = t2;
    t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
    if (t3 != 0) {
        initialize_hierarchy_node((void *)t3, (void *)o);
    }
    o->fbc8->f1b0 = t3;
    v82 = (S_vv82 *)((char *)o + 0xbcc);
    v83 = (int)0;
    while (0xd > v83) {
        v82->f00 = 0;
        v83 = (int)(v83 + 1);
        v82 = (S_vv82 *)((char *)v82 + 4);
    }
}
