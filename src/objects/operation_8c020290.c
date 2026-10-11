typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_508 Arg0_508;
struct Object {
    char unknown0[0x508];
    Arg0_508 *f508;
};
struct Arg0_508 {
    char unknown0[0x4];
    short f04;
};
void operation_8c020290(Object *o)
{
    if (o->f508 != 0) {
        o->f508->f04 |= 1;
        o->f508 = 0;
    }
}
