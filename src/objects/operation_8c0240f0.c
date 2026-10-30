typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xa6];
    int f3b0;
    char unknown3b4[0x814];
    Arg0_bc8 *fbc8;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern int operation_8c02c194(void);
extern int operation_8c16a18c(void *, int);
extern int operation_8c169508(void *);
extern int operation_8c028ef8(void *, void *);
extern void operation_8c0368a8(void *);
int operation_8c0240f0(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v3;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    unsigned int lim;
    v1 = (S_vv1 *)(void *)0x8c004000;
    lim = 0x1000;
    for (v3 = 0; lim > (unsigned int)(short)v3; v3++) {
        if ((v1++)->f00 != 0) {
            o->f3b0 |= 1;
            break;
        }
    }
    t1 = operation_8c02c194();
    if (t1 != 0) {
        return 0;
    }
    t2 = operation_8c16a18c((void *)(o->fbc8), a1);
    if (t2 == 0) {
        return 0;
    }
    t3 = operation_8c169508((void *)t2);
    if (t3 == 0) {
        return 0;
    }
    t4 = operation_8c028ef8((void *)o, (void *)t3);
    if (t4 == 0) {
        return 0;
    }
    if (o != 0) {
        v9 = (int)(o->f308 == 2);
        if (v9 != 0) {
            return 0;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = -1;
    (&frame)->f00 = 0x27;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = a1;
    operation_8c0368a8((void *)(&frame));
    return 1;
}
