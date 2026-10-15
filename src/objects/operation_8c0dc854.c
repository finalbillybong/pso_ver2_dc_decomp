typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
void operation_8c0dc854(Object *o)
{
    o->f48 = o->f38;
    o->f4c = o->f3c;
    o->f50 = o->f40;
    o->f54 = o->f44;
}
