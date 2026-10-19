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
    char unknown0[0x1c];
    int f1c;
};
int operation_8c04a928(Object *o, int a1)
{
    int m;
    o->f184->f1c += a1;
    m = 0x5f5e0ff;
    if (o->f184->f1c > m) {
        o->f184->f1c = m;
        return 0;
    }
    return 1;
}
