typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x66];
    int f6c;
    char unknown70[0x4];
    float f74;
};
void operation_8c0b6d08(Object *o)
{
    o->f6c += 1;
    if ((float)o->f6c > o->f74) {
        o->f04 |= 1;
    }
}
