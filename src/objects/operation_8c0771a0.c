typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    char unknown0[0x228];
    int f228;
};
void operation_8c0771a0(Object *o, int a1, int a2)
{
    if (o->f228 != 0) {
        ((void (*)(void *, Object *, int, int))(o->f228))(*(S_g8c44be9c **)0x8c44be9c, o, a1, a2);
    }
}
