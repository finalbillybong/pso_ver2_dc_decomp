typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void operation_8c01c1a4(int);
void operation_8c260610(Object *o)
{
    int v1;
    float v4;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (v4 > 4.5f) {
        operation_8c01c1a4(0x1f);
    }
}
