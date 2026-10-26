typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0x4];
    int f38;
};
void operation_8c09759c(Object *o)
{
    if (!(--o->f38 >= 0)) {
        o->f30 = 4;
    }
}
