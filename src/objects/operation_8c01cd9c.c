typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f520 S_g8c46f520;
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
    char unknownfc[0x34];
    Arg0_130 *f130;
};
extern void draw_blended_tree_b44a(void *, void *, float);
extern void call_8c3af5ee(void *);
extern void call_8c3ad12e(void *, void *, float);
extern void restore_child_blend(void);
void operation_8c01cd9c(Object *o)
{
    if (((o->fe8 & 4)) != 0) {
        draw_blended_tree_b44a((void *)(o->f38), (void *)(((char *)o + 0x11c)), o->ff8);
    } else {
        call_8c3af5ee((void *)(*(S_g8c46f520 **)0x8c46f520));
        call_8c3ad12e((void *)(o->f38), (void *)(o->f130), o->ff8);
        call_8c3af5ee((void *)0);
    }
    restore_child_blend();
}
