typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
};
void operation_8c0777fc(Object *o)
{
    o->f04 |= 4;
    o->f04 |= 0x10;
    o->f24 = 0;
}
