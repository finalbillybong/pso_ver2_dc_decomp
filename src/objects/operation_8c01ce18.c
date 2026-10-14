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
    char unknown3c[0xac];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x1c];
    int f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
};
extern void set_transform_node_callback(void *);
extern void draw_blended_tree_a702(void *, void *, float);
extern void draw_tree_a702(void *, void *, float);
extern void restore_child_blend(void);
void operation_8c01ce18(Object *o)
{
    if (o->f118 != 0) {
        *(int *)0x8c41cb68 = (int)(o->f118);
        set_transform_node_callback((void *)((void *)0x8c01cf44));
        if (((o->fe8 & 4)) != 0 && ((o->fe8 & 0x400)) == 0) {
            draw_blended_tree_a702((void *)(o->f38), (void *)(((char *)o + 0x11c)), o->ff8);
        } else {
            draw_tree_a702((void *)(o->f38), (void *)(o->f130), o->ff8);
        }
        set_transform_node_callback((void *)0);
        restore_child_blend();
    }
}
