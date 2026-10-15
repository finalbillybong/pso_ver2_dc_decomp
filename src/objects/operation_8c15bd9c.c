typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db124 S_g8c4db124;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
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
    char unknown38[0x4];
    Arg0_3c *f3c;
    char unknown40[0x4];
    int f44;
    int f48;
};
extern void operation_8c220b34(int, int);
extern void call_8c220b80(int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c1bce5c(int);
extern void call_8c22f004(int);
extern void operation_8c22f178(void *, int);
extern int spawn_node_8c0a49c8(int);
void operation_8c15bd9c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    (&frame)->f08 = 18.0f;
    (&frame)->f0c = 355.0f;
    (&frame)->f00 = 342.0f;
    (&frame)->f04 = 90.0f;
    operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
    call_8c220b80(0x30, 1);
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t1 != 0) {
        call_8c1bce5c(t1);
    }
    o->f34 = (int)(t1);
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x6c);
    if (t2 != 0) {
        call_8c22f004(t2);
    }
    o->f3c = (Arg0_3c *)t2;
    operation_8c22f178((void *)(o->f3c), (int)(*(S_g8c4db124 **)0x8c4db124));
    o->f44 = 0;
    t3 = spawn_node_8c0a49c8(4);
    o->f48 = (int)(t3);
    o->f24 = 2;
}
