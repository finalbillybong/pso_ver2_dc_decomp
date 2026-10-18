typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x698];
    int f698;
};
int operation_8c066dd8(Object *o)
{
    int v1;
    v1 = (int)(0x32 > o->f698);
    return (int)(v1);
}
