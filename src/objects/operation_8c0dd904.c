typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x22];
    short f22;
    char unknown24[0x4];
    int f28;
};
extern int call_8c18e954(int, int);
extern float call_8c38c154(int);
void operation_8c0dd904(Object *o)
{
    float v3;
    float v6;
    float v7;
    float t1;
    float w;
    int t2;
    t2 = call_8c18e954((int)(o->f22), 0x64);
    v3 = (float)(float)(unsigned int)t2;
    v6 = (float)v3;
    if (v3 > 50.0f) {
        v6 = (float)(100.0f - v3);
    }
    t1 = call_8c38c154((int)((int)(v6 / 100.0f * 65536.0f)));
    v7 = (float)((t1 + 1.0f) * 0.85f);
    if (((t1 + 1.0f) * 0.85f) > 1.0f) {
        v7 = (float)1.0f;
    }
    w = 1.0f - v7;
    o->f28 = (int)(v7 * 255.0f + w * 187.0f) << 0x10 | -0x1000000 | (int)(v7 * 174.0f + w * 83.0f) << 8 | (int)(v7 * 53.0f + w * 19.0f);
}
