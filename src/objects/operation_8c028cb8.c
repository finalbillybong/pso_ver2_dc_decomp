typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6d8];
    int f6d8;
};
int operation_8c028cb8(Object *o, int a1)
{
    int v1;
    v1 = (int)(((o->f6d8 & 1 << a1)) == 0);
    return (int)(v1);
}
