typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_550 S_g8c467180_2c_550;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x7f];
    char fa3;
    int fa4;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x550];
    S_g8c467180_2c_550 *f550;
};
extern int operation_8c24997c(void);
extern int call_8c1196d4(void *, void *, int);
extern void call_8c12b154(void *, void *, int);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
void operation_8c2498b4(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (o->f20 == 0) {
        if (*(int *)0x8c4e2ba0 == 0) {
            return;
        }
        t1 = operation_8c24997c();
        if (t1 != 0) {
            if (--o->fa4 >= 0) {
                goto L_8c2498ea;
            }
            o->fa4 = 0;
        } else {
            o->fa4 = 0x1e;
        }
L_8c2498ea:;
        if (o->fa4 != 0) {
            return;
        }
        t2 = call_8c1196d4((void *)((void *)0x8c33b1cc), (void *)((void *)0x8c33b1d4), 1);
        o->f20 = (Arg0_20 *)t2;
        if (o->f20 == 0) {
            return;
        }
        call_8c12b154((void *)(((char *)o + 0x24)), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f550), 0x7f);
        o->fa3 = 0;
        operation_8c119764((int)(o->f20), (int)(((char *)o + 0x24)), 0);
        return;
    }
    t3 = operation_8c24997c();
    if (t3 == 0) {
        request_resource_release((void *)(o->f20));
        o->f20 = (Arg0_20 *)0;
        o->fa4 = 0x1e;
    }
}
