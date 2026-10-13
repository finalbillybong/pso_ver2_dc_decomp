typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
extern void set_child_blend(void);
extern void call_8c38efbc(void *, void *, int);
extern void restore_child_blend(void);
void operation_8c103d3c(Object *o)
{
    set_child_blend();
    call_8c38efbc((void *)(o->f20), (void *)(o->f24), 1);
    restore_child_blend();
}
