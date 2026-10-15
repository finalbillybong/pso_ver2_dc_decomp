typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x12];
};
struct Object {
    char unknown0[0xbc8];
    Arg0_bc8 *fbc8;
};
extern void operation_1c7dd4(void *);
extern void find_node_8c16a3c0(void *, int);
void operation_8c02ad30(Object *o)
{
    Frame frame;
    operation_1c7dd4((void *)(&frame));
    (&frame)->f00 = 3;
    (&frame)->f01 = 9;
    find_node_8c16a3c0((void *)(o->fbc8), (int)(&frame));
}
