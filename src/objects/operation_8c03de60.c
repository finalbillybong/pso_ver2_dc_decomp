typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c462ce4 S_g8c462ce4;
typedef struct Object Object;
typedef struct Arg0_430 Arg0_430;
struct Object {
    char unknown0[0x430];
    Arg0_430 *f430;
};
struct Frame {
    char unknown0[0x4];
    int f04;
};
extern S_g8c462ce4 *g_8c462ce4;
extern char g_8c2ef0e4[];
extern int operation_8c104d5c(int, void *);
extern void operation_8c03ef80(void *, ...);
extern int operation_8c03ec84(void *, int, int, int);
int operation_8c03de60(Object *o, int a1, int a2)
{
    Frame frame;
    int t2;
    int t1;
    int v1;
    v1 = (int)(a2 << 3);
    *(int *)((char *)((char *)o->f430 + 0x4) + (v1)) = 0;
    t1 = operation_8c104d5c(a1, g_8c462ce4);
    if (t1 == 0) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x16d)), a1);
        return 0;
    }
    if (t1 > 0x40000) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x18c)), t1 + -0x40000);
    }
    (&frame)->f04 = 0;
    t2 = operation_8c03ec84((void *)o, (int)g_8c462ce4, (int)(&(&frame)->f04), (int)(&frame));
    if (t2 == 0) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x1af)));
    }
    *(int *)((char *)((char *)o->f430 + 0x4) + (v1)) = (int)(t2);
    return 1;
}
