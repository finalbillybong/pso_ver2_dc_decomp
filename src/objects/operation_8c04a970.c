typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1a0];
    short f1a0;
};
int operation_8c04a970(Object *o, int a1)
{
    int v1;
    *(short *)((char *)o + 0x1a0) += a1;
    v1 = (int)0x3e7;
    if ((short)v1 < o->f1a0) {
        o->f1a0 = v1;
        return 0;
    }
    return 1;
}
