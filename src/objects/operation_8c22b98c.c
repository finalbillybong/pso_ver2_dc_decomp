typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    char f68;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c22ba9c(void);
extern void call_8c22bb7c(Object *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c22bc80(void *);
extern void operation_8c22bcb0(void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c22b98c(Object *o)
{
    int t1;
    int t2;
    if (((o->f68 & 1)) == 0) {
        call_8c22ba9c();
        call_8c22bb7c(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c22b9ca;
            }
        }
        operation_8c22bc80((void *)o);
L_8c22b9ca:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c22b9e8;
            }
        }
        operation_8c22bcb0((void *)o);
    }
L_8c22b9e8:;
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
