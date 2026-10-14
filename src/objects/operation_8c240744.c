typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    float f234;
    float f238;
    float f23c;
    int f240;
};
void operation_8c240744(Object *o)
{
    o->f240 = 0x2aaa;
    o->f23c = 10.0f;
    o->f238 = 10.0f;
    o->f234 = 10.0f;
}
