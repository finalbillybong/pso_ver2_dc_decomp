typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3b8];
    int f3b8;
    int f3bc;
};
void operation_8c15e9a0(Object *o, int a1, int a2)
{
    o->f3b8 = a1;
    o->f3bc = a2;
}
