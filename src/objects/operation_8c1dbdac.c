#include "src/include/classes/TWindowMenuInfomation.h"
typedef struct TWindowMenuInfomation_p88 TWindowMenuInfomation_p88;
typedef struct TWindowMenuInfomation_p8c TWindowMenuInfomation_p8c;
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c1dc2b8(TWindowMenuInfomation *);
extern void call_8c1dc324(TWindowMenuInfomation *);
extern int operation_8c01d858(int, int, int, int);
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void operation_8c1dc390(void *);
extern void operation_8c1dc3f4(void *);
extern void call_8c199b74(void *);
extern void operation_8c199bc4(void *);
extern void call_8c0db30c(TWindowMenuInfomation *);
extern void update_grid_view_parameters(void *);
extern void call_8c1dc208(TWindowMenuInfomation *);
extern void position_menu_label_8c1dc1a0(void *);
extern void update_view_nodes(void *, void *);
void TWindowMenuInfomation_update_8c1dbdac(TWindowMenuInfomation *o)
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
    if (((o->f80 & 0xffff & 0x20)) == 0 && ((o->f80 & 0xffff & 2)) == 0) {
        if (((o->f80 & 0xffff & 0x10)) != 0) {
            int v1 = (int)(g_8c41cba0 + 0x20);
            t1 = operation_8c01d844(v1, 0x10, 6, 1);
            if (t1 == 0) {
                t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                if (t2 == 0) {
                    goto L_8c1dbe02;
                }
            }
            call_8c1dc2b8(o);
L_8c1dbe02:;
            t3 = operation_8c01d844(v1, 0x20, 6, 1);
            if (t3 == 0) {
                t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t4 == 0) {
                    goto L_8c1dbe88;
                }
            }
            call_8c1dc324(o);
        } else {
            int v8 = (int)(g_8c41cba0 + 0x20);
            t5 = operation_8c01d858(v8, 0x10, 6, 1);
            if (t5 == 0) {
                t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                if (t6 == 0) {
                    goto L_8c1dbe5e;
                }
            }
            call_8c1dc2b8(o);
L_8c1dbe5e:;
            t7 = operation_8c01d858(v8, 0x20, 6, 1);
            if (t7 == 0) {
                t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t8 == 0) {
                    goto L_8c1dbe88;
                }
            }
            call_8c1dc324(o);
        }
L_8c1dbe88:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t9 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t9 == 0) {
                goto L_8c1dbea6;
            }
        }
        operation_8c1dc390((void *)o);
L_8c1dbea6:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t10 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t10 == 0) {
                goto L_8c1dbec4;
            }
        }
        operation_8c1dc3f4((void *)o);
    }
L_8c1dbec4:;
    if (!(7.5f > (float)o->f64)) {
        if (o->second != 0) {
            call_8c199b74((void *)(o->second));
        }
        if (o->first != 0) {
            operation_8c199bc4((void *)(o->first));
        }
    }
    call_8c0db30c(o);
    update_grid_view_parameters((void *)o);
    call_8c1dc208(o);
    position_menu_label_8c1dc1a0((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
