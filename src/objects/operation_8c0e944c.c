typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    char f2c;
};
extern float call_8c37eb0c(int);
void operation_8c0e944c(Object *o)
{
    float t1;
    if (++o->f24 > 0x3c) {
        o->f24 = 0;
    }
    t1 = call_8c37eb0c((int)((int)((float)(o->f24 * 6) * 65536.0f / 360.0f)));
    o->f2c = (unsigned int)((t1 + 1.0f) * 255.0f / 2.0f);
}
