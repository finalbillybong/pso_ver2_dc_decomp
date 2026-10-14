typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0xf4];
    Arg0_130 *f130;
};
extern void set_transform_node_callback(void *);
extern void forward_prepare_transform_tree(void *, void *, float);
int operation_8c01cfc0(Object *o, float f0)
{
    if (o->f130 == 0 || o->f38 == 0) {
        return 0;
    }
    *(int *)0x8c41cb68 = (int)(*(int *)0x8c41cb64);
    set_transform_node_callback((void *)((void *)0x8c01cf44));
    forward_prepare_transform_tree((void *)(o->f38), (void *)(o->f130), f0);
    set_transform_node_callback((void *)0);
    return 1;
}
