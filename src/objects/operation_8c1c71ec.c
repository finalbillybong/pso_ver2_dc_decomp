typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x100];
    int f100;
};
void operation_8c1c71ec(Object *o)
{
    o->f100 += 0x888;
}
