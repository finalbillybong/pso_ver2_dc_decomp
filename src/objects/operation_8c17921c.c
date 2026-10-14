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
void operation_8c17921c(Object *o)
{
    o->f20 += 8.0f;
    if (!(255.0f > o->f20)) {
        o->f20 = 255.0f;
        if (o->f28 != 0) {
            ((void (*)(void))(o->f28))();
        } else {
            o->f04 |= 1;
        }
        *(int *)0x8c4db920 = 1;
    }
}
