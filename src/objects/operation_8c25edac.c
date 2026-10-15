typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_564 S_g8c467180_2c_564;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x564];
    S_g8c467180_2c_564 *f564;
};
extern void request_resource_release(void *);
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c119764(int, int, int);
void operation_8c25edac(int a0)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)(a0 + 0x34);
    if (v1->f00 != 0) {
        request_resource_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    }
    t1 = call_8c1196d4((void *)((void *)0x8c340628), (void *)((void *)0x8c340630), 1);
    v1->f00 = (S_vv1_0 *)t1;
    if (v1->f00 != 0) {
        operation_8c119764((int)(v1->f00), (int)((*(S_g8c467180 **)0x8c467180)->f2c->f564), 1);
    }
}
