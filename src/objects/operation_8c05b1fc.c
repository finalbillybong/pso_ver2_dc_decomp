typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    float f04;
    char unknown8[0x10];
    int dispatch;
};
void operation_8c05b1fc(Object *o, float f0)
{
    if (!(f0 > o->f04)) {
        o->dispatch |= 4;
        o->dispatch &= -3;
        return;
    }
    o->dispatch &= -5;
    o->dispatch |= 2;
}
