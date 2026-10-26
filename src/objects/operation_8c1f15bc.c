typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
};
int operation_8c1f15bc(Object *o)
{
    int v1;
    v1 = (int)(0.0f > o->tag);
    return (int)(v1);
}
