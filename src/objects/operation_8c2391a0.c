typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xc];
    char f0c;
};
void operation_8c2391a0(Object *o, int a1)
{
    int v1;
    v1 = a1;
    if ((unsigned int)(unsigned char)a1 >= (unsigned int)3) {
        v1 = 0;
    }
    o->f0c = v1;
}
