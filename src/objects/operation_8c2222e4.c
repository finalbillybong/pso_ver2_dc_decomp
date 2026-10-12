typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2284];
    int f22ac;
    int f22b0;
    char unknown22b4[0x28];
    int f22dc;
    int f22e0;
};
extern void call_8c12b880(int, int, int);
void operation_8c2222e4(Object *o)
{
    call_8c12b880((int)((char *)o + 0x2c), 0, 0x2280);
    o->f22dc = 4;
    o->f22ac = 0;
    o->f22e0 = 0;
    o->f22b0 = 0;
    o->f24 = 1;
}
