typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2ec054 S_L8c2ec054;
typedef struct Object Object;
struct Object {
    char unknown0[0x31];
    char f31;
    char unknown32[0x1a];
    float f4c;
};
struct S_L8c2ec054 {
    char unknown0[0x4];
    float f04;
};
extern S_L8c2ec054 g_8c2ec054;
float operation_8c0352d4(Object *o)
{
    float v1;
    float v2;
    float v3;
    float v6;
    v2 = (float)*(float *)((char *)&g_8c2ec054 + (o->f31 << 3));
    v3 = (float)*(float *)((char *)&g_8c2ec054.f04 + (o->f31 << 3));
    v1 = (float)o->f4c;
    if (0.0f > v1 || v1 > 1.0f) {
        v6 = (float)0.0f;
    } else {
        v6 = (float)v1;
    }
    return (v2 - v3) * v6 + v3;
}
