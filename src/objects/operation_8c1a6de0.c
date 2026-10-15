typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv62 S_vv62;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x20];
    int f58;
};
struct S_vv62 {
    char unknown0[0x68];
    unsigned short f68;
};
struct Frame {
    Block8 f00;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_34 {
    char unknown0[0x74];
    int f74;
};
extern int operation_8c156c6c(int);
extern void request_resource_release(void *);
void operation_8c1a6de0(Object *o)
{
    Frame frame;
    S_vv62 *v62;
    int t1;
    v62 = (S_vv62 *)o->f34;
    if (v62 != 0 && ((v62->f68 & 2)) != 0) {
        if (o->f30 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31e6d4;
            t1 = operation_8c156c6c((int)(&frame));
            o->f30 = (Arg0_30 *)t1;
            o->f30->f80 = (o->f30->f80 & 0xffff) | 1;
        }
        o->f58 = (int)(o->f34->f74);
        request_resource_release((void *)(o->f34));
        o->f34 = (Arg0_34 *)0;
        o->f24 = 3;
        return;
    }
    if (v62 != 0 && ((v62->f68 & 4)) != 0) {
        request_resource_release((void *)v62);
        o->f34 = (Arg0_34 *)0;
        o->f24 = 4;
    }
}
