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
void operation_8c10acc4(Object *o)
{
    call_8c220b80(0x20, 1);
    o->f24 = 8;
}
