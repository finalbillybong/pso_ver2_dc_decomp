typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    float f238;
    float f23c;
    float f240;
};
void operation_8c24f660(Object *o)
{
    int v1;
    if (o->f234 == 1) {
        v1 = (int)(o->f234 == 0);
        o->f234 = (int)(v1);
        o->f240 = 1e-07f;
        o->f23c = 1e-07f;
        o->f238 = 1e-07f;
    }
}
