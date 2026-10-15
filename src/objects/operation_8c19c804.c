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
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_390 Arg0_390;
typedef struct S_vv62 S_vv62;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x354];
    int f37c;
    char unknown380[0xc];
    Arg0_38c *f38c;
    Arg0_390 *f390;
};
struct S_vv62 {
    char unknown0[0x68];
    unsigned short f68;
};
struct Frame {
    Block8 f00;
};
struct Arg0_38c {
    char unknown0[0x80];
    unsigned short f80;
};
struct Arg0_390 {
    char unknown0[0x74];
    int f74;
};
extern int operation_8c156c6c(int);
extern void request_resource_release(void *);
void operation_8c19c804(Object *o)
{
    Frame frame;
    S_vv62 *v62;
    int t1;
    v62 = (S_vv62 *)o->f390;
    if (v62 != 0 && ((v62->f68 & 2)) != 0) {
        if (o->f38c == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31cc9c;
            t1 = operation_8c156c6c((int)(&frame));
            o->f38c = (Arg0_38c *)t1;
            o->f38c->f80 = (o->f38c->f80 & 0xffff) | 1;
        }
        o->f37c = (int)(o->f390->f74);
        request_resource_release((void *)(o->f390));
        o->f390 = (Arg0_390 *)0;
        o->f24 = 2;
        return;
    }
    if (v62 != 0 && ((v62->f68 & 4)) != 0) {
        request_resource_release((void *)v62);
        o->f390 = (Arg0_390 *)0;
        o->f24 = 3;
    }
}
