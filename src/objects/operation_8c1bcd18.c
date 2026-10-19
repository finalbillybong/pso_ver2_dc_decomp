typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x33c];
    int f390;
};
void operation_8c1bcd18(Object *o)
{
    float v1;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    v1 = (float)o->f3c.f04;
    if (6.0f > v1) {
        o->f3c.f04 = v1 + 1.11111116f;
        if ((v1 + 1.11111116f) > 6.0f) {
            o->f3c.f04 = 6.0f;
            o->f390 = 2;
        }
    }
}
