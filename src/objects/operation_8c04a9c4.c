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
    char unknown0[0x20];
    int f20;
};
int operation_8c04a9c4(Object *o, int a1)
{
    int v1;
    v1 = o->f184->f20;
    if (a1 > o->f184->f20) {
        return 0;
        v1 = 0;
    }
    o->f184->f20 = v1 - a1;
    return 1;
}
