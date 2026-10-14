typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x218];
    short f30a;
};
void operation_8c177ff4(Object *o)
{
    if (o->f30a != 2) {
        o->ff0 = 0;
        return;
    }
    o->ff0 = 1;
}
