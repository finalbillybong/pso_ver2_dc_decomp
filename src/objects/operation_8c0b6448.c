typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    Block16 f28;
    Vector3 f38;
    char unknown44[0xc];
    int f50;
    float f54;
    Arg0_58 *f58;
    float f5c;
    float f60;
    unsigned short f64;
};
struct Arg1 {
    Block16 f00;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg0_58 {
    char unknown0[0x20];
    short f20;
};
struct Frame {
    char unknown4[0x10];
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c013bd0(void *, void *, int);
Object *operation_8c0b6448(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4, int a5, float f0, float f1, float f2)
{
    Frame frame;
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a5);
    o->dispatch = (void *)0x8c2660f8;
    *(Block16 *)&o->f28 = *(Block16 *)&a1->f00;
    *(Vector3 *)&o->f38 = *(Vector3 *)&a2->f00;
    o->f20 = a3;
    o->f50 = 0;
    o->f54 = f0;
    o->f58 = (Arg0_58 *)a4;
    o->f24 = 1;
    o->f5c = f1;
    o->f60 = f2;
    o->f64 = o->f58->f20;
    call_8c013bd0((void *)(((char *)o + 0x44)), (void *)(((char *)(&frame))), (int)(o->f64));
    return o;
}
