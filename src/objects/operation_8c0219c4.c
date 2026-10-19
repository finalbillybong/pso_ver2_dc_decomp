typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv2 S_vv2;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x428];
    int f514;
    char unknown518[0x68];
    float f580;
};
struct S_vv2 {
    float f00;
    float f04;
    float f08;
};
extern void call_8c38ae68(void);
extern void call_8c382a58(int, Frame *);
extern void call_8c37df90(int, void *);
extern void call_8c37e2e4(int, float, float, float);
extern void operation_8c03bdcc(void *);
extern void call_8c38c0e0(int);
extern void operation_8c026e24(void *);
extern void call_8c3827d8(void *);
extern int operation_8c02c194(void);
extern void operation_8c01ceb0(void *);
extern void operation_8c01ce18(void *);
extern void operation_8c021b50(void *);
extern void operation_8c03be04(void *);
extern void call_8c38ad10(void);
extern void call_8c04a9e0(Object *, void *);
void operation_8c0219c4(Object *o, int a1)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    int v8;
    int t1;
    call_8c38ae68();
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 += o->f580;
    call_8c382a58(0, (Frame *)((&frame)));
    call_8c37df90(0, (void *)(o->f64));
    v1 = (int)(((o->f514 & 1)) != 0);
    if (v1 != 0) {
        v2 = (S_vv2 *)((int)((char *)o + 0x510) + 0xc);
        call_8c37e2e4(0, v2->f00, v2->f04, v2->f08);
    }
    operation_8c03bdcc((void *)(((char *)o + 0x58c)));
    call_8c38c0e0(8);
    operation_8c026e24((void *)o);
    call_8c3827d8((void *)(((char *)o + 0xbbc)));
    t1 = operation_8c02c194();
    if (t1 != 0) {
        operation_8c01ceb0((void *)o);
    } else {
        if (a1 == 2) {
            o->fe8 |= 0x400;
            operation_8c01ceb0((void *)o);
        } else {
            o->fe8 &= -0x401;
            operation_8c01ce18((void *)o);
        }
    }
    operation_8c021b50((void *)o);
    operation_8c03be04((void *)(((char *)o + 0x58c)));
    call_8c38ad10();
    v8 = (int)(((o->f514 & 1)) != 0);
    if (v8 != 0) {
        call_8c04a9e0(o, (void *)((int)((char *)o + 0x510) + 0xc));
        return;
    }
    call_8c04a9e0(o, (void *)0);
}
