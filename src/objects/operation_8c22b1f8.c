typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    float f24;
    float f28;
};
extern float call_8c130334(float, float);
extern float call_8c38c154(int);
extern float call_8c37eb0c(int);
int operation_8c22b1f8(Object *o, float f0, float f1)
{
    float v1;
    float v3;
    int v2;
    float t1;
    float t2;
    float t3;
    v1 = (float)(f0 - o->f24);
    v3 = f1 - o->f28;
    if (25.0f > (v1 * v1 + v3 * v3)) {
        o->f24 = f0;
        o->f28 = f1;
        return 1;
    }
    t3 = call_8c130334(v3, v1);
    v2 = (int)(int)(t3 * 65536.0f / 6.28318405f);
    t1 = call_8c38c154(v2);
    o->f24 += t1 * 5.0f;
    t2 = call_8c37eb0c(v2);
    o->f28 += t2 * 5.0f;
    return 0;
}
