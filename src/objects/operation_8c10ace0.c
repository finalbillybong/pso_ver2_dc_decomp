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
struct Frame {
    Block8 f00;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
};
extern void call_8c220b80(int, int);
extern int operation_8c156c6c(int);
void operation_8c10ace0(Object *o)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c30bc64;
    call_8c220b80(0x1f, 1);
    t1 = operation_8c156c6c((int)(&frame));
    o->f30 = (int)(t1);
    o->f24 = 3;
}
