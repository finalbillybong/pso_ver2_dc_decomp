typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x37c];
    int f37c;
};
int operation_8c02c1ac(Object *o)
{
    int v1;
    v1 = (int)(o->f37c == 0xf);
    return (int)(v1);
}
