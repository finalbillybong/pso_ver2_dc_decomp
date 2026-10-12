typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
struct Object {
    int tag;
    int f04;
    int f08;
    char unknownc[0x4];
    Arg0_10 *f10;
    int f14;
    int dispatch;
};
struct Arg0_10 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x10];
    unsigned short f1c;
    unsigned short f1e;
};
extern int call_8c011e9c(int);
void operation_8c03059c(Object *o, int a1, int a2)
{
    int t1;
    o->f10 = (Arg0_10 *)a1;
    o->dispatch = a2;
    o->f04 = o->f10->f1c;
    o->tag = o->f10->f1e;
    o->f08 = o->f10->f08;
    t1 = call_8c011e9c(o->tag * (o->f04 << 1) + 0x20);
    o->f14 = t1;
}
