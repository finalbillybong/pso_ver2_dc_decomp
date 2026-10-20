typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    float f68;
    float f6c;
    float f70;
    char unknown74[0x64];
    int fd8;
    float fdc;
};
extern float call_8c37eb0c(int);
void operation_8c0a19f0(Object *o)
{
    float v1;
    float v4;
    float t1;
    int v2;
    int v5;
    if (o->fd8 != 0) {
        o->fd8 -= 1;
        v2 = o->fd8;
        v5 = v2 * 0x28;
        v1 = (float)o->fdc;
        v4 = (float)(float)(unsigned int)v2;
        o->f68 = 0.0f;
        v1 = (float)(v1 * v4);
        t1 = call_8c37eb0c((int)((int)((float)v5 * 65536.0f / 360.0f)));
        o->f6c = v1 * t1;
        o->f70 = 0.0f;
    }
}
