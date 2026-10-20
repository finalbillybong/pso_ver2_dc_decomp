typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c41cba0 {
    char unknown0[0x10];
    int f10;
};
struct S_g8c418a00 {
    char unknown0[0xa8c];
    int fa8c;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41c60c *g_8c41c60c;
extern int g_8c41c72c;
extern S_g8c41cba0 *g_8c41cba0;
extern char g_8c2e3014[];
extern int operation_8c1cdc80(void *);
extern void request_resource_release(void *);
extern void call_8c017554(S_g8c418a00 *);
extern void operation_8c02ea04(void *, void *, int, int);
extern void release_stage_8c016a74(void);
extern void operation_8c016950(void);
extern void operation_8c02ed00(void *, void *);
void operation_8c015f58(void)
{
    S_vv1 *v1;
    int v60;
    int t1;
    int t2;
    v1 = (S_vv1 *)g_8c41c60c;
    if (v1 != 0) {
        v60 = (int)v1->f80;
        if (((v60 & 0xffff & 2)) != 0) {
            g_8c41c72c = operation_8c1cdc80((void *)v1);
            request_resource_release(g_8c41c60c);
            t1 = g_8c41c72c;
            g_8c41c60c = (S_g8c41c60c *)0;
            if (((*(char *)((char *)((char *)g_8c418a00 + 0xf2f) + t1 * 0x1c) & 2)) != 0) {
                call_8c017554(g_8c418a00);
            } else {
                operation_8c02ea04((void *)g_8c418a00, (void *)((int)g_8c418a00 + t1 * 0x1c + 0xf14), (int)(g_8c2e3014 + 0x57), (int)(g_8c2e3014 + 0x57));
                release_stage_8c016a74();
            }
            return;
        }
        if (((v60 & 0xffff & 4)) != 0) {
            request_resource_release((void *)v1);
            g_8c41c60c = (S_g8c41c60c *)0;
            operation_8c016950();
            return;
        }
        if (((g_8c41cba0->f10 & 0x400)) != 0) {
            t2 = operation_8c1cdc80((void *)v1);
            g_8c41c72c = (int)(t2);
            if (g_8c418a00->fa8c > t2) {
                operation_8c02ed00((void *)g_8c418a00, (void *)((int)g_8c418a00 + t2 * 0x1c + 0xf14));
            }
        }
    }
}
