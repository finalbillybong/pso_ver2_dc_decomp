typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x184];
    int f528;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1ba4b4(Object *o)
{
    call_8c05fbf8(0x3002b, 0, 0, 0);
    o->f528 = 0;
    o->f3a0 = 0x62;
}
