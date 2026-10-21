typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    short f00;
    char unknown2[0x2];
    int f04;
    short f08;
    char f0a;
    char unknownb[0x1];
    short f0c;
    char unknowne[0x2];
    int f10;
};
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2];
    short f26;
    short f28;
};
extern int call_8c12b0cc(int);
extern int call_8c3ca534(int, Frame *, int);
int operation_8c0110a0(Object *o, int a1)
{
    Frame frame;
    short v1;
    int t1;
    int t2;
    (&frame)->f00 = o->f28;
    (&frame)->f0a = 1;
    t1 = call_8c12b0cc(a1);
    (&frame)->f0c = t1;
    (&frame)->f10 = a1;
    (&frame)->f04 = (int)(o->f20);
    v1 = (short)o->f26;
    *(int *)0x8c4621a8 = 1;
    (&frame)->f08 = v1;
    t2 = call_8c3ca534(0x4121, (Frame *)((&frame)), 0);
    *(int *)0x8c4621a8 = 0;
    return t2;
}
