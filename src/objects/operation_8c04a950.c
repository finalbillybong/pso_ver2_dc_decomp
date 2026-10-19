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
int operation_8c04a950(Object *o, int a1)
{
    o->f184->f1c -= a1;
    if (!(o->f184->f1c >= 0)) {
        o->f184->f1c = 0;
        return 0;
    }
    return 1;
}
