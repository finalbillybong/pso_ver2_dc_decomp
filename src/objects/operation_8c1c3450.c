typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0xf4];
    Arg0_130 *f130;
};
struct Arg0_130 {
    char unknown0[0xa];
    short f0a;
};
extern void call_8c01ce18(Object *);
void operation_8c1c3450(Object *o, int a1)
{
    o->f38 = a1;
    o->f130->f0a |= 0x80;
    call_8c01ce18(o);
}
