typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x815];
    char f815;
};
char operation_8c02c320(Object *o)
{
    return o->f815;
}
