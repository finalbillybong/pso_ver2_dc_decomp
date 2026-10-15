typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c462ce4 S_g8c462ce4;
typedef struct Object Object;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_42c_c Arg0_42c_c;
typedef struct S_x64688 S_x64688;
struct Frame {
    char unknown0[0x20];
};
struct Object {
    int tag;
    char unknown4[0x428];
    Arg0_42c *f42c;
};
struct S_x64688 {
    int f00;
};
extern char g_8c2ef0e4[];
extern void call_8c03ee90(Frame *, int, void *);
extern int call_8c1a8310(Frame *, void *);
extern void operation_8c03ef80(void *, ...);
extern void call_8c3877a8(void *, void *);
void operation_8c03ebbc(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    call_8c03ee90((Frame *)((&frame)), a1, (void *)((g_8c2ef0e4 + 0x215)));
    t1 = call_8c1a8310((Frame *)((&frame)), (void *)(*(S_g8c462ce4 **)0x8c462ce4));
    if (t1 > 0x40000) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x33e)), (Frame *)((&frame)));
        return;
    }
    if (t1 > 0) {
        v1 = (int)(a2 << 2);
        v2 = (int)(v1 << 2);
        call_8c3877a8((void *)(*(S_g8c462ce4 **)0x8c462ce4), (void *)(*(Arg0_42c_c **)((char *)((char *)o->f42c + 0xc) + (v2))));
        ((S_x64688 *)((int)o->f42c + v2))->f00 |= 1;
        return;
    }
    *(int *)((char *)((char *)o->f42c + 0x0) + (a2 << 4)) |= 2;
    if (((o->tag & 4)) == 0) {
        operation_8c03ef80((void *)((g_8c2ef0e4 + 0x35c)), (Frame *)((&frame)));
    }
}
