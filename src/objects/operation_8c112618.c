typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    char unknown28[0x8];
    int f30;
    int f34;
};
extern void operation_8c220b34(int, int);
extern void call_8c220b80(int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c1bce5c(int);
extern int spawn_node_8c0a49c8(int);
void operation_8c112618(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    (&frame)->f08 = 18.0f;
    (&frame)->f0c = 355.0f;
    (&frame)->f00 = 342.0f;
    (&frame)->f04 = 90.0f;
    operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
    call_8c220b80(0x2a, 1);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t1 != 0) {
        call_8c1bce5c(t1);
    }
    o->f30 = (int)(t1);
    o->f24 = 2;
    t2 = spawn_node_8c0a49c8(2);
    o->f34 = (int)(t2);
}
