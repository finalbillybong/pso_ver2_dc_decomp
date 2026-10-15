typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x332];
    short f332;
};
int operation_8c04a888(Object *o, int a1)
{
    *(short *)((char *)o + 0x332) -= a1;
    if (!(o->f332 >= 0)) {
        o->f332 = 0;
        return 0;
    }
    return 1;
}
