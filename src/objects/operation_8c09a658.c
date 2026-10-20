typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct S_g8c41cba0 {
    char unknown0[0x1c];
    short f1c;
    short f1e;
};
struct Object {
    int tag;
};
struct Arg1 {
    float f00;
};
extern S_g8c41cba0 *g_8c41cba0;
extern float call_8c130334(float, float);
extern float call_8c37f6c0(float);
void operation_8c09a658(Object *o, Arg1 *a1)
{
    float v1;
    float v2;
    float v3;
    int v4;
    float t2;
    v1 = (float)g_8c41cba0->f1c;
    v2 = (float)g_8c41cba0->f1e;
    t2 = call_8c130334(v1, -v2);
    v4 = (int)(t2 * 65536.0f / 6.28318405f);
    v3 = call_8c37f6c0(v1 * v1 + v2 * v2) / 115.2f;
    if (v3 > 1.0f) {
        v3 = 1.0f;
    }
    if (0.1f > v3) {
        v4 = 0;
        v3 = 0.0f;
    }
    if (o != 0) {
        o->tag = v4;
    }
    if (a1 != 0) {
        a1->f00 = v3;
    }
}
