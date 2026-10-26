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
void operation_8c105be4(Object *o)
{
    o->f24 = 8;
}
