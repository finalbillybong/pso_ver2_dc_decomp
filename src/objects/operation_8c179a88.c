typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x238];
    short f238;
};
void operation_8c179a88(Object *o)
{
    o->f238 = -1;
}
