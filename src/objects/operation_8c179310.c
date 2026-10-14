typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    char unknown24[0x4];
    int f28;
};
void operation_8c179310(Object *o)
{
    o->f20 -= 8.0f;
    if (!(o->f20 > 0.0f)) {
        o->f20 = 0.0f;
        if (o->f28 != 0) {
            ((void (*)(void))(o->f28))();
        } else {
            o->f04 |= 1;
        }
        *(int *)0x8c4db924 = 1;
    }
}
