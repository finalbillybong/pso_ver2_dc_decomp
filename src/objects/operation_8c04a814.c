typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x19c];
    short f19c;
};
int operation_8c04a814(Object *o, int a1)
{
    *(short *)((char *)o + 0x19c) += a1;
    if (!(o->f19c >= 0)) {
        o->f19c = 0;
        return 0;
    }
    return 1;
}
