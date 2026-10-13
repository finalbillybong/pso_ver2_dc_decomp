typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    char f68;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c2307ac(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
}
