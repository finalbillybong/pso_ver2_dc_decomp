typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x53e];
    short f576;
};
int operation_8c0220dc(Object *o)
{
    int t1;
    int t2;
    t1 = ((int (*)(Object *))0x8c029fc8)(o);
    if (t1 != 0) {
        ((void (*)(Object *, int, int))0x8c1e8e60)(o, 0x13, 5);
        return 1;
    }
    if (((o->f34 & 0x200)) != 0) {
        if (((o->f34 & 0x400)) != 0) {
            ((void (*)(Object *, int, int))0x8c1e8e60)(o, 0xe, 5);
        } else {
            ((void (*)(Object *, int, int))0x8c1e8e60)(o, 0xd, 5);
        }
        return 1;
    }
    t2 = ((int (*)(Object *))0x8c1edf30)(o);
    if (t2 != 0) {
        ((void (*)(Object *, int, int))0x8c1e8e60)(o, 0xa, 5);
        return 1;
    }
    if (((o->f34 & 0x10000)) != 0) {
        if (o->f576 == 0x10) {
            ((void (*)(Object *, int, int))0x8c1e8e60)(o, 0x10, 5);
        } else {
            o->f34 &= -0x10001;
            ((void (*)(Object *, short, int))0x8c1e8e60)(o, o->f576, 5);
            o->f576 = 0;
        }
        return 1;
    }
    return 0;
}
