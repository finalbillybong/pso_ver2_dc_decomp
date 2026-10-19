typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e0];
    int f1e0;
    char unknown1e4[0x4];
    int f1e8;
};
void operation_8c255688(Object *o)
{
    if (o->f1e8 == 2) {
        o->f1e0 = -1;
    }
}
