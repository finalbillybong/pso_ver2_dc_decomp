typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
};
struct Arg0_184 {
    char unknown0[0x18];
    int f18;
};
float operation_8c027784(Object *o, int a1)
{
    int v1;
    int v3;
    if (!(o->f184->f18 >= 0)) {
        v3 = (int)0;
    } else {
        v1 = (int)o->f184->f18;
        if (o->f184->f18 > 0xc7) {
            v1 = (int)0xc7;
        }
        v3 = (int)v1;
    }
    return (float)a1 / (((float)v3 + 1.0f) * 15.0f);
}
