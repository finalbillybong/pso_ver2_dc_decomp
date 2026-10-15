typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb60 S_g8c4dbb60;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x14];
    int f14;
};
struct S_vv1 {
    char unknown0[0x48];
    float f48;
};
extern void reparent_hierarchy_node(void *, void *);
void operation_8c1857bc(Object *o, float f0)
{
    S_vv1 *v1;
    while ((v1 = (S_vv1 *)o->f14) != 0) {
        v1->f48 += f0;
        reparent_hierarchy_node((void *)v1, (void *)(*(S_g8c4dbb60 **)0x8c4dbb60));
    }
}
