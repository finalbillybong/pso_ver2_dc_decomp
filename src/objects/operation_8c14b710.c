typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da604 S_g8c4da604;
typedef struct S_g8c4da608 S_g8c4da608;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    float f24;
};
struct S_g8c4da604 {
    char unknown0[0x8];
    float f08;
};
struct S_g8c4da608 {
    char unknown0[0x8];
    float f08;
};
void operation_8c14b710(Object *o)
{
    o->f20 += 1;
    if (o->f20 > 0x1e) {
        o->f24 += 1.0f;
        if (o->f24 > 70.0f) {
            o->f24 = 70.0f;
            o->f04 |= 1;
            return;
        }
        (*(S_g8c4da604 **)0x8c4da604)->f08 = -o->f24;
        (*(S_g8c4da608 **)0x8c4da608)->f08 = o->f24;
    }
}
