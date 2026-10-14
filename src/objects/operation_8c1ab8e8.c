typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x48];
    int f48;
};
void operation_8c1ab8e8(Object *o, int a1)
{
    o->f48 = a1 & 0xffffff;
}
