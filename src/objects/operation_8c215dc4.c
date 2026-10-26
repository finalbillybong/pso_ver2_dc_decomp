typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x7c];
    int f7c;
};
int operation_8c215dc4(Object *o)
{
    return (int)(o->f7c);
}
