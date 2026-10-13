typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x36e];
    int f3a0;
};
struct Arg1 {
    short f00;
};
struct Arg2 {
    short f00;
};
int operation_8c1ae1ec(Object *o, Arg1 *a1, Arg2 *a2)
{
    if (1 > o->f3a0 || o->f3a0 > 0x1fe) {
        return 0;
    }
    if (o->f3a0 > 0x1fd) {
        return 0;
    }
    a1->f00 = o->f30 + o->f3a0;
    a2->f00 = o->f20 + o->f3a0;
    o->f3a0 += 1;
    return 1;
}
