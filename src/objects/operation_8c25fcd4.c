typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Object {
    char unknown0[0x2c];
    int f2c;
};
extern float call_8c37eb0c(int);
int operation_8c25fcd4(Object *o, Arg1 *a1)
{
    float v1;
    float t1;
    v1 = (float)a1->f08;
    if (-8.0f > v1 || v1 > -1.0f) {
        return 0;
    }
    v1 = (float)(v1 - -1.0f);
    v1 = (float)(v1 / -7.0f);
    t1 = call_8c37eb0c((int)((int)o->f2c + (int)(v1 * -16384.0f)));
    a1->f00 = v1 * 0.25f * t1 + a1->f00;
    return 1;
}
