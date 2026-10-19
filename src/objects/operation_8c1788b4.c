typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x1c];
    int f370;
    int f374;
};
float operation_8c1788b4(Object *o, int a1)
{
    if (a1 != 0 && o->f374 != 0) {
        *(int *)((char *)o + 0x370) += 1;
        if (o->f370 >= 3) {
            o->f350 = 2;
        }
    }
    return 0.0f;
}
