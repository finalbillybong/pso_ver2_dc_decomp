typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    float f74;
};
void operation_8c215510(Object *o, int a1)
{
    o->f74 = (float)a1;
}
