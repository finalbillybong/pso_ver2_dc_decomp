typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6cc];
    int f6cc;
};
extern void operation_8c1452f8(int, int);
void operation_8c144bc4(Object *o, int a1)
{
    int v1;
    v1 = (int)((float)a1 * 0.5f);
    o->f6cc -= v1;
    operation_8c1452f8(0x3000f, (int)(((char *)o + 0x3c)));
}
