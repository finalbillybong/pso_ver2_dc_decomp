typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_8c Arg0_8c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x1b];
    char f83;
    char unknown84[0x4];
    Arg0_88 *f88;
    Arg0_8c *f8c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c199388(Object *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c199578(void *);
extern void operation_8c1995bc(void *);
extern void position_indexed_label(void *);
extern void call_8c199b74(void *);
extern void call_8c199bc4(void *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c198f70(Object *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f83 & 1)) == 0) {
        call_8c199388(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c198fb4;
            }
        }
        operation_8c199578((void *)o);
L_8c198fb4:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c198fd2;
            }
        }
        operation_8c1995bc((void *)o);
    }
L_8c198fd2:;
    position_indexed_label((void *)o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f88));
        call_8c199bc4((void *)(o->f8c));
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
