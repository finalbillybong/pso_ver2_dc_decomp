typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    float f68;
};
void operation_8c0ad90c(Object *o, int a1, int a2, int a3)
{
    ((void (*)(void *, void *, void *, int, float))0x8c0c51d8)(((char *)o + 0x24), ((char *)o + 0x84), ((char *)o + 0x24), a3, o->f68);
}
