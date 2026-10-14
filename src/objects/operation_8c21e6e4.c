typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x64];
    int f64;
    char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void operation_8c21eb14(void *);
extern void call_8c21e810(Object *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c21e920(void *);
extern void operation_8c21e960(void *);
extern void call_8c0db30c(Object *);
extern void call_8c199b74(void *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c21e6e4(Object *o)
{
    int t1;
    int t2;
    if (((o->f68 & 1)) == 0) {
        operation_8c21eb14((void *)o);
        call_8c21e810(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c21e722;
            }
        }
        operation_8c21e920((void *)o);
L_8c21e722:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c21e740;
            }
        }
        operation_8c21e960((void *)o);
    }
L_8c21e740:;
    call_8c0db30c(o);
    if (!(7.5f > (float)o->f64)) {
        o->f64 = 0x186a0;
        call_8c199b74((void *)(o->f6c));
    }
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
