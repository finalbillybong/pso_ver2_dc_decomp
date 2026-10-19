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
void operation_8c114828(Object *o)
{
    o->dispatch = 2.0f;
    o->tag = 0.0f;
    o->f04 = 0.0f;
    o->f08 = 0.0f;
    o->f0c = 0.0f;
}
