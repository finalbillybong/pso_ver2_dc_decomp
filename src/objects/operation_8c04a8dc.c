typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x19e];
    short f19e;
};
int operation_8c04a8dc(Object *o, int a1)
{
    *(short *)((char *)o + 0x19e) += a1;
    if (!(o->f19e >= 0)) {
        o->f19e = 0;
        return 0;
    }
    return 1;
}
