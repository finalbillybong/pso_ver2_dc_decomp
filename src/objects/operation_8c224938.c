typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x18];
    char f80;
    char unknown81[0x17];
    Arg0_98 *f98;
    Arg0_9c *f9c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c225034(Object *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c225228(void *);
extern void call_8c22529c(Object *);
extern void operation_8c225338(void *);
extern void position_indexed_label_8c22519c(void *);
extern void call_8c199b74(void *);
extern void call_8c199bc4(void *);
extern void call_8c0db30c(Object *);
void operation_8c224938(Object *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f80 & 1)) == 0) {
        call_8c225034(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c22497c;
            }
        }
        operation_8c225228((void *)o);
L_8c22497c:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 0x400)) != 0) {
            call_8c22529c(o);
        }
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c2249ac;
            }
        }
        operation_8c225338((void *)o);
    }
L_8c2249ac:;
    position_indexed_label_8c22519c((void *)o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f98));
        call_8c199bc4((void *)(o->f9c));
    }
    call_8c0db30c(o);
}
