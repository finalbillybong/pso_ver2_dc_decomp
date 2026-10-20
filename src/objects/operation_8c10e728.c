typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    Arg0_94 *f94;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_94 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
};
extern float call_8c37e480(Frame *);
int operation_8c10e728(Object *o)
{
    Frame frame;
    Vector3 *a;
    Vector3 *b;
    a = (Vector3 *)&o->f94->f48;
    b = (Vector3 *)&o->f94->f3c;
    if (a == 0 || b == 0) {
        return 0;
    }
    (&frame)->f00 = b->x - a->x;
    (&frame)->f04 = b->y - a->y;
    (&frame)->f08 = b->z - a->z;
    if (call_8c37e480((Frame *)((&frame))) > 0.4f) {
        o->f8c |= 1;
        return 1;
    }
    return 0;
}
