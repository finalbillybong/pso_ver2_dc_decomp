typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    Vector3 f6c;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x4];
    int f90;
    char unknown94[0x6c];
    float f100;
    char unknown104[0x4];
    float f108;
    Vector3 f10c;
};
void operation_8c11f3dc(Object *o)
{
    o->f100 = 1.0f / ((float)o->f88 / 1024.0f + 29.9999981f);
    o->f108 = (float)o->f90 + 40000.0f;
    *(Vector3 *)&o->f10c = *(Vector3 *)&o->f6c;
}
