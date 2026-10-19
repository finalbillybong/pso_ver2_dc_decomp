typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    char f28;
    char f29;
};
void operation_8c1cb850(Object *o)
{
    int v1;
    v1 = (int)o->f20;
    o->f20 = v1 + 1;
    if ((float)v1 > 7.5f) {
        o->f28 = o->f29;
    }
}
