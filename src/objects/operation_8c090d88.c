typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
    char unknown3e8[0x2c];
    float f414;
};
void operation_8c090d88(Object *o, float f0)
{
    float v1;
    float *p;
    p = (float *)((char *)o + 0x414);
    v1 = f0 - *p;
    {
        int *q;
        q = (int *)((char *)o + 0x3e4);
        *q &= -0x80001;
    }
    if (!(0.5f > v1)) {
        *p += 0.5f;
        return;
    }
    if (!(v1 > -0.5f)) {
        *p -= 0.5f;
        return;
    }
    *p = f0;
    o->f3e4 |= 0x80000;
}
