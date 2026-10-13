typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x334];
    int f334;
    char unknown338[0x1c];
    int f354;
};
int operation_8c0fed60(Object *o, int a1)
{
    if (o->f354 == 2 && a1 == o->f334) {
        return 0;
    }
    return 1;
}
