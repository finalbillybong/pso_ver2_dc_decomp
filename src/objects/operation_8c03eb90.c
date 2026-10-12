typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_420 Arg0_420;
struct Object {
    int tag;
    char unknown4[0x418];
    int f41c;
    Arg0_420 *f420;
};
void operation_8c03eb90(Object *o)
{
    o->tag |= 0x400;
    if (o->f41c != 0) {
        ((void (*)(void *))(o->f41c))(o->f420);
    }
}
