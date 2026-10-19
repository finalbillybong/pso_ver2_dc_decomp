typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x370];
    float f370;
    char unknown374[0x1c];
    int f390;
};
void operation_8c03afac(Object *o)
{
    if (0.0f > o->f370) {
        o->f370 = 0.0f;
    } else {
        if (o->f370 > 1.0f) {
            o->f370 = 1.0f;
        }
    }
    o->f390 = (int)o->f370;
}
