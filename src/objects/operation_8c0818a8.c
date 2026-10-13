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
};
void operation_8c0818a8(Object *o)
{
    o->f70 += o->f6c;
}
