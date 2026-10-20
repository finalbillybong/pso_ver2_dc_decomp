typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_9c S_vv1_9c;
struct S_vv1 {
    char unknown0[0x14];
    S_vv1_14 *f14;
    char unknown18[0x84];
    S_vv1_9c *f9c;
};
extern int g_8c4db9e4;
extern int call_8c238458(void *);
extern int operation_8c238e7c(int);
extern int call_8c2383a0(void *);
int operation_8c247c88(void)
{
    S_vv1 *v1;
    S_vv1_9c **pp;
    int t1;
    int t2;
    int t3;
    if (g_8c4db9e4 == 0) {
        return -1;
    }
    v1 = (S_vv1 *)(g_8c4db9e4 + 0x11c4);
    pp = &v1->f9c;
    t1 = call_8c238458((void *)(*pp));
    t2 = operation_8c238e7c(t1);
    if (t2 != 0) {
        *pp = (S_vv1_9c *)0;
        return -1;
    }
    t3 = call_8c2383a0((void *)(v1->f14));
    if (t3 < 0 || t3 >= 0x1a) {
        return -1;
    }
    return (int)(t3);
}
