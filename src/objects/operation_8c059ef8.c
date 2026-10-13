typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x394];
    int f394;
};
void operation_8c059ef8(Object *o, int a1)
{
    o->f394 = a1;
}
