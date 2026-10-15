typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
};
extern void operation_8c220b34(int, int);
extern void call_8c220c40(int, int);
extern int spawn_node_8c0a49c8(int);
void operation_8c1593f0(Object *o)
{
    Frame frame;
    int t1;
    (&frame)->f08 = 18.0f;
    (&frame)->f0c = 355.0f;
    (&frame)->f00 = 342.0f;
    (&frame)->f04 = 90.0f;
    operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
    call_8c220c40(1, 1);
    t1 = spawn_node_8c0a49c8(5);
    o->f34 = (int)(t1);
    o->f24 = 2;
}
