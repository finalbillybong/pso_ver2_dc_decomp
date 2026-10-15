typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_6c Arg0_6c;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x38];
    Arg0_6c *f6c;
};
struct Arg0_6c {
    char f00;
};
struct S_vv2 {
    char unknown0[0x2c];
    int f2c;
};
extern int operation_8c1a68f8(int);
void operation_8c220130(Object *o)
{
    int v1;
    S_vv2 *v2;
    int t1;
    v1 = (int)0;
    while (4 > v1) {
        v2 = (S_vv2 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2));
        t1 = operation_8c1a68f8((int)(o->f6c->f00));
        v2->f2c = (int)(t1);
        v1 = (int)(v1 + 1);
    }
}
