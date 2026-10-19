typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x8];
    char f70;
    char unknown71[0x1f];
    Arg0_90 *f90;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void operation_8c2240c4(void *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c224438(void *);
extern void operation_8c22447c(void *);
extern void update_toggle_8c22426c(void *);
extern void call_8c2242c8(Object *);
extern void call_8c199b74(void *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c223f1c(Object *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f70 & 1)) == 0) {
        operation_8c2240c4((void *)o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c223f62;
            }
        }
        operation_8c224438((void *)o);
L_8c223f62:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c223f80;
            }
        }
        operation_8c22447c((void *)o);
    }
L_8c223f80:;
    update_toggle_8c22426c((void *)o);
    call_8c2242c8(o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f90));
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
