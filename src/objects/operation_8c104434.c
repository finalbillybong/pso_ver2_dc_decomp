typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_20 {
    float f00;
    float f04;
    float f08;
} Block_p0_20;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Block_p0_20 f20;
    float f2c;
    float f30;
    float f34;
    Vector3 f38;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
void operation_8c104434(Object *o)
{
    float v1;
    o->f54 += 1.0f;
    v1 = (float)(o->f54 * 6.0f);
    if (!(o->f50 > v1)) {
        *(Vector3 *)&o->f20 = *(Vector3 *)&o->f38;
        o->f04 |= 1;
        return;
    }
    o->f20.f00 = o->f44 * v1 + o->f2c;
    o->f20.f04 = o->f48 * v1 + o->f30;
    o->f20.f08 = o->f4c * v1 + o->f34;
}
