typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32];
    int f38;
    float f3c;
};
void operation_8c253db4(Object *o)
{
    int v1;
    v1 = (int)o->f38;
    o->f38 = v1 + 1;
    if (v1 >= 0x32) {
        o->f04 |= 1;
        return;
    }
    o->f3c = (float)o->f38 * 0.5f / 50.0f + 0.5f;
}
