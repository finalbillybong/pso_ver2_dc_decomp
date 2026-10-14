typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    short f2c;
};
int operation_8c0107b4(Object *o)
{
    int v1;
    v1 = (int)(o->f2c == 0);
    return (int)(v1);
}
