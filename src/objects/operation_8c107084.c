typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct S_g8c4dbc20_0_18 S_g8c4dbc20_0_18;
typedef struct S_g8c4dbc20_0_1c S_g8c4dbc20_0_1c;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_398 Arg0_398;
typedef struct S_vv62 S_vv62;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x358];
    int f380;
    char unknown384[0x10];
    Arg0_394 *f394;
    Arg0_398 *f398;
};
struct S_vv62 {
    char unknown0[0x68];
    unsigned short f68;
};
struct Frame {
    Block8 f00;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x18];
    S_g8c4dbc20_0_18 *f18;
    S_g8c4dbc20_0_1c *f1c;
};
struct Arg0_394 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_398 {
    char unknown0[0x74];
    int f74;
};
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_394 *, void *, int, int);
extern void call_8c156f50(Arg0_394 *);
extern void call_8c157138(Arg0_394 *);
extern void request_resource_release(void *);
void operation_8c107084(Object *o)
{
    Frame frame;
    S_vv62 *v62;
    int t1;
    v62 = (S_vv62 *)o->f398;
    if (v62 != 0 && ((v62->f68 & 2)) != 0) {
        if (o->f394 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c30b6cc;
            t1 = operation_8c156c24((int)(&frame), 2);
            o->f394 = (Arg0_394 *)t1;
            operation_8c156d30((Arg0_394 *)(o->f394), (void *)((*(S_g8c4dbc20 **)0x8c4dbc20)->f00->f18), 6, 0);
            operation_8c156d30((Arg0_394 *)(o->f394), (void *)((*(S_g8c4dbc20 **)0x8c4dbc20)->f00->f1c), 6, 1);
            call_8c156f50((Arg0_394 *)(o->f394));
            call_8c157138((Arg0_394 *)(o->f394));
            o->f394->f80 = (o->f394->f80 & 0xffff) | 1;
        }
        o->f380 = (int)(o->f398->f74);
        request_resource_release((void *)(o->f398));
        o->f398 = (Arg0_398 *)0;
        o->f24 = 2;
        return;
    }
    if (v62 != 0 && ((v62->f68 & 4)) != 0) {
        request_resource_release((void *)v62);
        o->f398 = (Arg0_398 *)0;
        o->f24 = 5;
    }
}
