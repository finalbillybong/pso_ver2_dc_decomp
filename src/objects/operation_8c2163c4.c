typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x28];
    int f94;
};
void operation_8c2163c4(Object *o)
{
    o->f68 = (unsigned int)o->f68 >> 1 << 1;
    o->f94 = 1;
}
