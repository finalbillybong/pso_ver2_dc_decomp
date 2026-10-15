typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    int dispatch;
    char unknown1c[0x10];
    int f2c;
    char unknown30[0x3];
    char f33;
};
extern int call_8c09ac6c(Object *);
extern int call_8c09ab38(Object *);
int operation_8c09abf4(Object *o)
{
    int t1;
    int t2;
    t1 = call_8c09ac6c(o);
    if (t1 >= 0) {
        return 0;
    }
    switch (t1) {
    case -99:
        o->f33 = 2;
        o->dispatch = -0x51cb;
        return 1;
    case -100:
    case -98:
        o->f33 = 2;
        o->dispatch = -1;
        return 1;
    case -97:
    default:
        o->dispatch = -0x51cb;
        o->f33 = 2;
        o->dispatch |= -0x1000000;
        t2 = call_8c09ab38(o);
        o->f2c = (int)(t2);
        return 1;
    }
}
