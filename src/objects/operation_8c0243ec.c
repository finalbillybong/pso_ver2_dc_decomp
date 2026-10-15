typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c169508 S_c8c169508;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
};
struct Object {
    char unknown0[0xbc8];
    Arg0_bc8 *fbc8;
};
struct S_c8c169508 {
    char unknown0[0xe8];
    int fe8;
};
extern void operation_1c7dd4(void *);
extern int find_node_8c16a3c0(void *, int);
extern S_c8c169508 *operation_8c169508(void *);
int operation_8c0243ec(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int t1;
    S_c8c169508 *t2;
    operation_1c7dd4((void *)(&frame));
    (&frame)->f00 = a1;
    (&frame)->f01 = a2;
    (&frame)->f02 = a3;
    t1 = find_node_8c16a3c0((void *)(o->fbc8), (int)(&frame));
    if (t1 == 0) {
        return -1;
    }
    t2 = operation_8c169508((void *)t1);
    if (t2 == 0) {
        return -1;
    }
    return (int)(t2->fe8);
}
