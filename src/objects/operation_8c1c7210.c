typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_7a48(void *, int, int);
Object *operation_8c1c7210(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2767e0;
    o->tag = (int)(*(int *)0x8c328e30);
    o->size = 0x30;
    v1 = (int)0;
    while (4 > v1) {
        v2 = (int)(v1 << 2);
        t1 = create_effect_7a48((void *)(v1 * 0xc + 0x8c328e44), (int)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c328e34)))), 1);
        *(int *)((char *)((char *)o + 0x20) + (v2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    return o;
}
