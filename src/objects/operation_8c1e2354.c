typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
};
int operation_8c1e2354(Object *o)
{
    int v1;
    v1 = (int)(((o->f68 & 4)) != 0);
    return (int)(v1);
}
