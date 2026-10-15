typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x48];
    Arg0_78 *f78;
    Arg0_7c *f7c;
};
struct S_vv1 {
    char unknown0[0x8c];
    int f8c;
    int f90;
};
struct S_vv2 {
    char unknown0[0x8c];
    int f8c;
    int f90;
};
extern void operation_8c10e5c4(void *);
void operation_8c10dad8(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    v1 = (S_vv1 *)o->f78;
    v1->f8c = 0;
    v1->f90 = 0;
    v2 = (S_vv2 *)o->f7c;
    v2->f8c = 0;
    v2->f90 = 0;
    if (o->f2c != 0) {
        if (o->f2c == 1) {
            return;
        }
        return;
    }
    operation_8c10e5c4((void *)o);
    o->f2c = 1;
}
