typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2a];
    int f30;
};
void operation_8c0b9640(Object *o)
{
    int v1;
    v1 = (int)o->f30;
    o->f30 = v1 + 1;
    if (v1 > 0xb4) {
        o->f04 |= 1;
    }
}
