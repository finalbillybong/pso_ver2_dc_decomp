typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
    char unknown3b8[0x170];
    int f528;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1b9550(Object *o)
{
    o->f3ac = (int)(o->f3a8);
    o->f3a8 = 0x11;
    o->f3b4 = (int)(o->f3b0);
    call_8c05fbf8(0x30031, (void *)(((char *)o + 0x3c)), 0, 1);
    o->f528 = 1;
    o->f3a0 = 0x31;
}
