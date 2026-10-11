typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x46];
    int f4c;
    int f50;
};
void operation_8c1ab5ec(Object *o)
{
    o->f4c += 1;
    if (o->f50 > 0) {
        if (o->f4c >= o->f50) {
            o->f04 |= 0x10;
            o->f04 |= 1;
        }
    }
}
