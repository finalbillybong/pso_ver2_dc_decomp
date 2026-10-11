typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x270];
    int f270;
};
int operation_8c244850(Object *o)
{
    if (*(int *)0x8c510cbc >= *(int *)0x8c467874) {
        o->f270 = 2;
    }
    return o->f270 == 2;
}
