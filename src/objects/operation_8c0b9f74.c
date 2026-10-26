typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x62];
    float f68;
    char unknown6c[0x8];
    float f74;
    float f78;
};
void operation_8c0b9f74(Object *o)
{
    if (o->f78 > o->f74) {
        o->f04 |= 1;
        return;
    }
    o->f78 += o->f68;
}
