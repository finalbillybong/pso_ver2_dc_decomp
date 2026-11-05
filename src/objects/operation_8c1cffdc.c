#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p90 ViewParameters_p90;
typedef struct ViewParameters_p94 ViewParameters_p94;
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c1cd480(ViewParameters *);
extern void call_8c1cd4ec(ViewParameters *);
extern int operation_8c01d858(int, int, int, int);
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void operation_8c1d0294(void *);
extern void operation_8c1cd5ec(void *);
extern void call_8c1cd28c(ViewParameters *);
extern void call_8c199b74(void *);
extern void operation_8c199bc4(void *);
extern void call_8c0db30c(ViewParameters *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c1cffdc(ViewParameters *o)
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
                    goto L_8c1d0032;
                }
            }
            call_8c1cd480(o);
L_8c1d0032:;
            t3 = operation_8c01d844(v1, 0x20, 6, 1);
            if (t3 == 0) {
                t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t4 == 0) {
                    goto L_8c1d00b8;
                }
            }
            call_8c1cd4ec(o);
        } else {
            int v8 = (int)(g_8c41cba0 + 0x20);
            t5 = operation_8c01d858(v8, 0x10, 6, 1);
            if (t5 == 0) {
                t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                if (t6 == 0) {
                    goto L_8c1d008e;
                }
            }
            call_8c1cd480(o);
L_8c1d008e:;
            t7 = operation_8c01d858(v8, 0x20, 6, 1);
            if (t7 == 0) {
                t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                if (t8 == 0) {
                    goto L_8c1d00b8;
                }
            }
            call_8c1cd4ec(o);
        }
L_8c1d00b8:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t9 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t9 == 0) {
                goto L_8c1d00d6;
            }
        }
        operation_8c1d0294((void *)o);
L_8c1d00d6:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t10 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t10 == 0) {
                goto L_8c1d00f4;
            }
        }
        operation_8c1cd5ec((void *)o);
    }
L_8c1d00f4:;
    call_8c1cd28c(o);
    if (!(7.5f > (float)o->elapsed)) {
        if (o->secondary != 0) {
            call_8c199b74((void *)(o->secondary));
        }
        if (o->label != 0) {
            operation_8c199bc4((void *)(o->label));
        }
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
