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
int operation_8c013468(Object *o)
{
    return (int)(o->f184->f18);
}
