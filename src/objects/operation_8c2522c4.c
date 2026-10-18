typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
    float f70;
    float f74;
};
void operation_8c2522c4(Object *o)
{
    if (o != 0) {
        o->f6c = 1.6f;
        o->f70 = 1.6f;
        o->f74 = 1.6f;
    }
}
