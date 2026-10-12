typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    int dispatch;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
};
extern int call_8c1a9a00(int, Frame *);
void operation_8c0e7720(Object *o, int a1, int a2)
{
    Frame frame;
    int t1;
    o->f0c = a1;
    t1 = call_8c1a9a00(a1, (&frame));
    if (t1 != 0) {
        o->dispatch = (&frame)->f04;
        return;
    }
    o->dispatch = a2;
}
