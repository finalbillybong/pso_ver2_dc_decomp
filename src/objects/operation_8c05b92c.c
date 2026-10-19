typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38c];
    int f38c;
};
void operation_8c05b92c(Object *o, int a1)
{
    o->f38c = a1;
}
