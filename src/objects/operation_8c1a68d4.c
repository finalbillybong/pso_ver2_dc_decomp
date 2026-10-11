typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    float f08;
    float f0c;
};
void operation_8c1a68d4(Object *o, int a1, int a2)
{
    o->f08 = (float)(short)a1 + 32.0f;
    o->f0c = (float)(short)a2;
}
