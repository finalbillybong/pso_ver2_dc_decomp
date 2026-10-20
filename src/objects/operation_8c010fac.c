typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    int f00;
    short f04;
    short f06;
    char f08;
    char f09;
    char f0a;
    char f0b;
    short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
    void *f18;
};
struct Object {
    char unknown0[0x20];
    int f20;
    short f24;
    short f26;
    short f28;
};
extern int g_8c4621a8;
extern int call_8c3ca534(int, Frame *);
extern void operation_8c010f34();
extern char g_8c2e2130[];
int operation_8c010fac(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f00 = (int)(o->f20);
    (&frame)->f04 = o->f24;
    (&frame)->f06 = o->f26;
    g_8c4621a8 = 1;
    (&frame)->f08 = 0;
    (&frame)->f09 = 0x78;
    (&frame)->f0a = 0;
    (&frame)->f0b = 0;
    (&frame)->f0c = 0;
    (&frame)->f10 = 0;
    (&frame)->f14 = 0;
    (&frame)->f18 = operation_8c010f34;
    t1 = call_8c3ca534(0x4120, (Frame *)((&frame)));
    g_8c4621a8 = 0;
    o->f28 = t1;
    if (!(o->f28 >= 0)) {
        return -1;
    }
    *(Object **)((char *)(g_8c2e2130 - 0x200) + (o->f28 << 2)) = o;
    return o->f28;
}
