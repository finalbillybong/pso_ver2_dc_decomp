typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
void operation_8c186a78(Object *o)
{
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            return;
        }
        return;
    }
    o->f20 += 1;
}
