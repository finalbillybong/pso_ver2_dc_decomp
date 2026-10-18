typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x18];
    unsigned short f80;
    char unknown82[0xe];
    Arg0_90 *f90;
    Arg0_94 *f94;
};
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c1cd480(Object *);
extern void call_8c1cd4ec(Object *);
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c1cd558(void *);
extern void operation_8c1cd5ec(void *);
extern void call_8c199b74(void *);
extern void operation_8c199bc4(void *);
extern void call_8c0db30c(Object *);
extern void call_8c1cd1a8(Object *);
extern void update_grid_view_parameters(void *);
extern void call_8c1cd28c(Object *);
extern void position_menu_label_8c1cd224(void *);
extern void update_view_nodes(void *, void *);
void operation_8c1ccdc8(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    if (((o->f80 & 0xffff & 0x40)) == 0 && ((o->f80 & 0xffff & 2)) == 0) {
        if (((o->f80 & 0xffff & 0x10)) != 0) {
            int v1 = (int)(g_8c41cba0 + 0x20);
            t1 = operation_8c01d844(v1, 0x10, 6, 1);
            if (t1 == 0) {
                t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                if (t2 == 0) {
                    goto L_8c1cce1e;
                }
            }
            call_8c1cd480(o);
L_8c1cce1e:;
            t3 = operation_8c01d844(v1, 0x20, 6, 1);
            if (t3 == 0) {
                t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t4 == 0) {
                    goto L_8c1ccea4;
                }
            }
            call_8c1cd4ec(o);
        } else {
            int v8 = (int)(g_8c41cba0 + 0x20);
            t5 = operation_8c01d858(v8, 0x10, 6, 1);
            if (t5 == 0) {
                t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                if (t6 == 0) {
                    goto L_8c1cce7a;
                }
            }
            call_8c1cd480(o);
L_8c1cce7a:;
            t7 = operation_8c01d858(v8, 0x20, 6, 1);
            if (t7 == 0) {
                t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t8 == 0) {
                    goto L_8c1ccea4;
                }
            }
            call_8c1cd4ec(o);
        }
L_8c1ccea4:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t9 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t9 == 0) {
                goto L_8c1ccec2;
            }
        }
        operation_8c1cd558((void *)o);
L_8c1ccec2:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t10 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t10 == 0) {
                goto L_8c1ccee0;
            }
        }
        operation_8c1cd5ec((void *)o);
    }
L_8c1ccee0:;
    if (!(7.5f > (float)o->f64)) {
        if (o->f90 != 0) {
            call_8c199b74((void *)(o->f90));
        }
        if (o->f94 != 0) {
            operation_8c199bc4((void *)(o->f94));
        }
    }
    call_8c0db30c(o);
    call_8c1cd1a8(o);
    update_grid_view_parameters((void *)o);
    call_8c1cd28c(o);
    position_menu_label_8c1cd224((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
