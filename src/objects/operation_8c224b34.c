typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x81];
    char f81;
    char unknown82[0x4];
    short f86;
    int f88;
};
extern void call_8c2254ec(void);
void operation_8c224b34(Object *o, int a1)
{
    o->f88 = a1;
    o->f86 = 0xc0;
    call_8c2254ec();
    o->f81 = 1;
}
