typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    float f38;
    char unknown3c[0x1c];
    int f58;
};
void operation_8c215dcc(Object *o, float f0)
{
    o->f38 = f0;
    o->f58 = *(int *)0x8c2e1604;
}
