typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void call_8c220b80(int, int);
void operation_8c112924(Object *o)
{
    call_8c220b80(0x19, 1);
    o->f24 = 2;
}
