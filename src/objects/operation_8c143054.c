typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0x4];
    float f1c;
};
extern float call_8c37f6c0(float);
void operation_8c143054(Object *o)
{
    float v1;
    float sq;
    float d;
    float b;
    float v7;
    sq = o->f10 * o->f10;
    v1 = -o->f08;
    d = 1.0f / o->f04 - 1.0f / v1;
    b = sq / (v1 * -2.0f) + o->f14;
    if (sq * 0.5f * d > b) {
        o->f0c = call_8c37f6c0(b * 2.0f / d);
    }
    v7 = o->f0c;
    o->f1c = v7 * v7 * 0.5f / v1 + o->f14;
}
