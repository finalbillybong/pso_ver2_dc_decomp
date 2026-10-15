typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1d4 Arg0_1d4;
typedef struct S_vv44 S_vv44;
struct Object {
    char unknown0[0x1d4];
    Arg0_1d4 *f1d4;
};
struct S_vv44 {
    int f00;
    char unknown4[0x10];
    int f14;
};
extern int operation_1abd98(void *, void *, void *);
extern int operation_1abf30(void *, void *, void *, float);
extern void call_8c1ac06c(int, int, int);
extern void reparent_hierarchy_node(void *, void *);
int operation_8c2492e8(Object *o, int a1, int a2, float f0)
{
    S_vv44 *v44;
    int t1;
    int t2;
    t1 = operation_1abd98((void *)o, (void *)a1, (void *)a2);
    t2 = operation_1abf30((void *)o, (void *)a1, (void *)a2, f0);
    if (t1 != 0 && t2 != 0) {
        v44 = (S_vv44 *)o->f1d4;
        if (v44 != 0) {
            v44->f00 &= -3;
            v44->f14 = 0x4000;
        }
        call_8c1ac06c(t2, 0x1bb, 0);
        reparent_hierarchy_node((void *)t2, (void *)t1);
    }
    return (int)(t1);
}
