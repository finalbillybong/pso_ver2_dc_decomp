typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0xc];
    float f4c;
};
void operation_8c18cd8c(Object *o, int a1)
{
    o->f3c = (float)(short)a1 * 30.0f + 99.0f;
    o->f4c = o->f3c;
}
