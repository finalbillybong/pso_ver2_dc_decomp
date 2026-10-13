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
    float f24;
    char unknown28[0x4];
    float f2c;
    float f30;
    float f34;
    int f38;
    int f3c;
    int f40;
    float f44;
};
extern void call_8c3bdf60(void *, void *);
void operation_8c07cab4(Object *o)
{
    o->f40 += 1;
    if (o->f40 > 0x28) {
        o->f44 -= 0.08f;
        if (0.0f > o->f44) {
            o->f44 = 0.0f;
            o->f04 |= 1;
        }
    }
    call_8c3bdf60((void *)(((char *)o + 0x20)), (void *)(&o->f2c));
    if (0.0f > o->f24) {
        o->f24 = o->f24 * -1.0f;
        o->f30 = o->f30 * -0.4f;
        o->f2c = o->f2c * 0.7f;
        o->f34 = o->f34 * 0.7f;
    }
    o->f30 += -0.5f;
    o->f38 += 0x60;
    o->f3c += 0x110;
}
