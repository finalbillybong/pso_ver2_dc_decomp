typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    int f238;
};
void operation_8c24f238(Object *o)
{
    o->f234 = 0;
    o->f238 = 0;
}
