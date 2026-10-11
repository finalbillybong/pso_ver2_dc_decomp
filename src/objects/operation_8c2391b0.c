typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xd];
    char f0d;
};
void operation_8c2391b0(Object *o, int a1)
{
    int v1;
    v1 = a1;
    if ((unsigned int)(unsigned char)a1 >= (unsigned int)2) {
        v1 = 0;
    }
    o->f0d = v1;
}
