typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x140];
    short f140;
};
short operation_8c075b84(Object *o)
{
    return o->f140;
}
