typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c618 S_g8c41c618;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41c618 *g_8c41c618;
extern S_L8c41cba0 g_8c41cba0;
extern int pair_grid_view_ready(void *);
extern void call_8c119c78(void *);
extern void request_resource_release(void *);
extern void operation_8c016950(void);
extern void call_8c02fa5c(void *);
extern void call_8c01d9dc(void);
void operation_8c0162d0(void)
{
    int t1;
    if (g_8c41c618 != 0) {
        if ((((&g_8c41cba0)->f28 & 8)) == 0) {
            goto L_8c016324;
        }
        t1 = pair_grid_view_ready(g_8c41c618);
        if (t1 == 0) {
            call_8c119c78(g_8c41c618);
            goto L_8c016324;
        }
        request_resource_release(g_8c41c618);
        g_8c41c618 = 0;
        operation_8c016950();
        call_8c02fa5c(g_8c418a00);
    } else {
        operation_8c016950();
    }
L_8c016324:;
    call_8c01d9dc();
}
