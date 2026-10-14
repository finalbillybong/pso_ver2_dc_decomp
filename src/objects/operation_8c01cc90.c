typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f520 S_g8c46f520;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_38 Arg0_38;
struct Object {
    Arg0_0 *tag;
    char unknown4[0x34];
    Arg0_38 *f38;
    char unknown3c[0xac];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x34];
    Arg0_130 *f130;
};
extern void operation_8c01d1e4(void);
extern void draw_blended_tree_a702(void *, void *, float);
extern void call_8c3af5ee(void *);
extern void call_8c3addea(void *, void *, float);
extern void restore_child_blend(void);
extern void operation_8c01d1e8(void *);
void operation_8c01cc90(Object *o)
{
    operation_8c01d1e4();
    if (((o->fe8 & 4)) != 0) {
        draw_blended_tree_a702((void *)(o->f38), (void *)(((char *)o + 0x11c)), o->ff8);
    } else {
        call_8c3af5ee((void *)(*(S_g8c46f520 **)0x8c46f520));
        call_8c3addea((void *)(o->f38), (void *)(o->f130), o->ff8);
        call_8c3af5ee((void *)0);
    }
    restore_child_blend();
    operation_8c01d1e8((void *)(o->tag));
}
