typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x8e];
    int f94;
    char unknown98[0x24];
    float fbc;
};
void operation_8c22b71c(Object *o)
{
    if (!(120.0f > (o->fbc += 1.0f))) {
        o->fbc = 120.0f;
    }
    if (++o->f94 >= 0x78) {
        o->f04 |= 1;
    }
}
