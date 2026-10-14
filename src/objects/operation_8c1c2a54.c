typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
    char unknown98[0x8];
    float fa0;
};
void operation_8c1c2a54(Object *o)
{
    o->fa0 = 0.0f;
    o->f94 = 1;
}
