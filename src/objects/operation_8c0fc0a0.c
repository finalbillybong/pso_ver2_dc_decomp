typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    float dispatch;
};
void operation_8c0fc0a0(Object *o)
{
    o->dispatch = 0.0f;
    o->tag = -1.0f;
    o->f04 = -1.0f;
    o->f08 = -1.0f;
    o->f0c = -1.0f;
}
