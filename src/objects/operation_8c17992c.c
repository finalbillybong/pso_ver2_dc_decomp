typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x23a];
    short f23a;
};
void operation_8c17992c(Object *o)
{
    if (o->f23a != 2 && o->f23a != 3) {
        return;
    }
    o->f23a = 1;
}
