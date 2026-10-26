typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    int f08;
    int f0c;
};
int operation_8c0f3990(Object *o)
{
    int v1;
    v1 = (int)(o->f08 < o->f0c);
    return (int)(v1);
}
