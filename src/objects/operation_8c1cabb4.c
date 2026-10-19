typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char f28;
    char f29;
    char f2a;
    char f2b;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
};
extern char g_8c41cba0[];
extern void call_8c1cacb4(Object *);
extern void call_8c1cae24(Object *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c05fbf8(int, int, int, int);
extern void request_resource_release(void *);
extern void operation_8c199b14(void);
extern void operation_8c1b0308(void);
extern void operation_8c1ca664(void *);
void operation_8c1cabb4(Object *o)
{
    int v10;
    int t1;
    switch (*(char *)0x8c4e2e20) {
    case 0:
        call_8c1cacb4(o);
        break;
    case 1:
        call_8c1cae24(o);
    }
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t1 == 0) {
            goto L_8c1cac48;
        }
    }
    call_8c05fbf8(0x50016, 0, 0, 0);
    if (o->f2c != 0) {
        request_resource_release((void *)(o->f2c));
        o->f2c = (Arg0_2c *)0;
    }
    if (o->f30 != 0) {
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
    }
    if (o->f34 != 0) {
        request_resource_release((void *)(o->f34));
        o->f34 = (Arg0_34 *)0;
    }
    operation_8c199b14();
    operation_8c1b0308();
    o->f29 = 8;
    v10 = (int)6;
    o->f28 = v10;
L_8c1cac48:;
    o->f2a = *(char *)0x8c4e2ce0;
    if (o->f2a != o->f2b) {
        o->f24 = 0;
    }
    operation_8c1ca664((void *)o);
    o->f2b = o->f2a;
}
