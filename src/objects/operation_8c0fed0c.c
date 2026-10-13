typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x334];
    int f334;
};
int operation_8c0fed0c(Object *o, int a1)
{
    int v1;
    v1 = (int)(a1 != o->f334);
    return (int)(v1);
}
