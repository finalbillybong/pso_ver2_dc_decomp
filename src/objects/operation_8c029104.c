typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169508 S_c8c169508;
typedef struct S_c8c169508_e8 S_c8c169508_e8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
    char f0c;
    char f0d;
    char f0e;
    char unknownf[0x11];
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x8be];
    Arg0_bc8 *fbc8;
};
struct S_c8c169508 {
    char unknown0[0xe8];
    S_c8c169508_e8 *fe8;
};
extern void operation_1c7dd4(void *);
extern int find_node_8c16a3c0(void *, int);
extern S_c8c169508 *operation_8c169508(void *);
extern int call_8c0240f0(Object *, void *);
extern int operation_8c02c1ac(void *);
extern void operation_8c0368a8(void *);
extern void operation_8c022bbc(void *);
extern int hierarchy_is_active(void *);
int operation_8c029104(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int v2;
    int v1;
    S_c8c169508 *t2;
    int t1;
    int v8;
    int t3;
    int t4;
    int t5;
    S_c8c169508 *t6;
    int t7;
    operation_1c7dd4((void *)(&(&frame)->f0c));
    (&frame)->f0c = a1;
    (&frame)->f0d = a2;
    (&frame)->f0e = a3;
    t1 = find_node_8c16a3c0((void *)(o->fbc8), (int)(&(&frame)->f0c));
    if (t1 == 0) {
        return 0;
    }
    t2 = operation_8c169508((void *)t1);
    if (t2 == 0) {
        return 0;
    }
    t3 = call_8c0240f0(o, (void *)(t2->fe8));
    if (t3 == 0) {
        return 0;
    }
    v1 = (int)t2->fe8;
    t4 = operation_8c02c1ac((void *)o);
    if (t4 == 0) {
        if (o != 0) {
            v2 = (int)(o->f308 == 2);
            if (v2 != 0) {
                goto L_8c0291b8;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f04 = -1;
        (&frame)->f08 = 0;
        (&frame)->f00 = 0x29;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = (int)(v1);
        (&frame)->f08 = 1;
        operation_8c0368a8((void *)(&frame));
        operation_8c022bbc((void *)o);
    }
L_8c0291b8:;
    t5 = find_node_8c16a3c0((void *)(o->fbc8), (int)(&(&frame)->f0c));
    if (t5 == 0) {
        return 0;
    }
    t6 = operation_8c169508((void *)t5);
    if (t6 == 0) {
        return 0;
    }
    t7 = hierarchy_is_active((void *)t6);
    v8 = (int)(t7 != 0);
    return (int)(v8);
}
