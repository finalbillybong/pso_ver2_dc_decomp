typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
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
extern char g_8c2ef0e4[];
extern int operation_8c03ec84(void *, int, int, int);
extern void operation_8c03ef80(void *, ...);
int operation_8c03e010(Object *o, int a1, int a2)
{
    Frame frame;
    int v2;
    int t1;
    v2 = (int)(a1 << 3);
    *(int *)((char *)((char *)o->f430 + 0x4) + (v2)) = 0;
    (&frame)->f04 = 0;
    t1 = operation_8c03ec84((void *)o, a2, (int)(&(&frame)->f04), (int)(&frame));
    if (t1 == 0) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x1f3)));
        return 0;
    }
    *(int *)((char *)((char *)o->f430 + 0x4) + (v2)) = (int)(t1);
    return 1;
}
